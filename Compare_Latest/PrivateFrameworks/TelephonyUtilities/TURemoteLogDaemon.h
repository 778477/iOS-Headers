/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_xpc_object>, NSTimer;

@interface TURemoteLogDaemon : NSObject
{
    id _delegate;
    NSObject<OS_xpc_object> *_connection;
    unsigned long long _clients;
    NSDictionary *_appenderConfigurations;
    NSDictionary *_appenders;
    unsigned long long _lastActivityTime;
    NSTimer *_wakeUpAndDieTimer;
    int _stateLock;
}

+ (id)sharedInstance;
@property id <TURemoteLogDaemonDelegate> delegate; // @synthesize delegate=_delegate;
- (id)appenderForName:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;
- (void)_handleXPCMessage:(id)arg1 connection:(id)arg2;
- (void)_checkTimer;
- (void)_updateLastActivityTime;
- (unsigned long long)_currentUptime;

@end

