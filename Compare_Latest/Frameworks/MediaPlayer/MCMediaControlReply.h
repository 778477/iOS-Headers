/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MCMediaControlClientRemote, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface MCMediaControlReply : NSObject
{
    MCMediaControlClientRemote *_client;
    NSObject<OS_dispatch_queue> *_completionQueue;
    id _completionBlock;
    BOOL _replySent;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_source;
}

- (void)_sendReplyWithErrorCode:(unsigned int)arg1 playbackInfo:(id)arg2;
- (void)_sendReplyWithDictionary:(id)arg1;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 volume:(float)arg2;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 position:(float)arg2 duration:(float)arg3;
- (void)_sendReplyWithErrorCode:(unsigned int)arg1 picData:(id)arg2 playerGUID:(id)arg3;
@property(readonly, nonatomic) unsigned int receivePort;
- (void)dealloc;
- (id)initWithClient:(id)arg1 completionQueue:(id)arg2 completionBlock:(id)arg3;
- (id)init;

@end

