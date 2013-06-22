/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "WDNetworkTask.h"

@class WDSecureConnectionManager;

@interface WDNetworkConnectionTask : WDNetworkTask
{
    WDSecureConnectionManager *_connectionManager;
}

- (void)handleError:(id)arg1;
- (void)handleResponse:(id)arg1 data:(id)arg2;
- (id)request;
- (void)_destroyConnectionManager;
- (void)_handleConnectionFailureWithError:(id)arg1;
- (void)_handleConnectionSuccessWithResponse:(id)arg1 data:(id)arg2;
- (void)_startConnection;
- (void)performReset;
- (void)performCancel;
- (void)performStart;
- (void)dealloc;

@end

