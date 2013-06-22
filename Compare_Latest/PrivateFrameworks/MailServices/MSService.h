/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface MSService : NSObject
{
    int _canceled;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_responseListener;
    NSObject<OS_xpc_object> *_responseHandler;
}

- (void)_generateUnitTestResponsesForResultArray:(id)arg1;
- (id)_generateUnitTestReplyForMethod:(id)arg1 arg:(id)arg2 error:(id *)arg3;
- (BOOL)_unitTestsAreEnabled;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id)arg3;
- (BOOL)_shouldSimulate;
- (void)_callServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id)arg3;
- (id)_handleMessageSendFailure:(id)arg1 message:(id)arg2 messageIndex:(long long)arg3 context:(inout id *)arg4;
- (id)_createMessageForService:(id)arg1 arguments:(id)arg2;
- (void)_registerConnection:(id)arg1 onQueue:(id)arg2;
- (void)setupResponseConnectionOnQueue:(id)arg1;
- (void)responseConnection:(id)arg1 handleResponse:(id)arg2;
- (void)responseConnection:(id)arg1 handleError:(id)arg2;
@property(readonly, getter=isCanceled) BOOL canceled;
- (void)cancel;
- (void)stop;
- (void)start;
- (id)_connection;
- (id)_createServiceOnQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end

