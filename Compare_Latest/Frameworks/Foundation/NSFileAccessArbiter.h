/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <Foundation/NSFileAccessArbiter-Protocol.h>

@class NSFileAccessNode, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter>
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isSubarbiter;
    NSMutableDictionary *_accessClaimsByID;
    NSMutableDictionary *_subarbitrationClaimsByID;
    NSMutableDictionary *_reactorsByID;
    NSMutableDictionary *_watchersByPresenterID;
    NSFileAccessNode *_rootNode;
    NSObject<OS_xpc_object> *_superarbitrationServer;
}

- (void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)cancelAccessClaimForID:(id)arg1;
- (void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)revokeAccessClaimForID:(id)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
- (void)_handleCanceledClient:(id)arg1;
- (void)_handleMessage:(id)arg1 forSubarbitrationClaim:(id)arg2 server:(id)arg3;
- (void)_handleMessage:(id)arg1 fromClient:(id)arg2;
- (BOOL)_handleMessage:(id)arg1 ofKind:(id)arg2 withParameters:(id)arg3 embeddedServer:(id)arg4 fromClient:(id)arg5;
- (void)_sendSubarbitersMessageWithKind:(id)arg1 parameters:(id)arg2;
- (id)rootNode;
- (void)stopArbitrating;
- (void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2;
- (void)_removeReactorForID:(id)arg1;
- (void)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2;
- (void)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 withLastEventID:(id)arg3;
- (void)_stopWatchingItemForPresenterForID:(id)arg1;
- (void)_startWatchingItemAtURL:(id)arg1 forPresenter:(id)arg2 withLastEventID:(id)arg3;
- (void)_tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (void)_writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (void)_cancelAccessClaimForID:(id)arg1;
- (void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (void)_revokeAccessClaimForID:(id)arg1 fromLocal:(BOOL)arg2;
- (void)_revokeAccessClaim:(id)arg1;
- (void)_grantAccessClaim:(id)arg1;
- (void)_tiePresenter:(id)arg1 toItemAtURL:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 isSubarbiter:(BOOL)arg2 listener:(id)arg3;

@end

