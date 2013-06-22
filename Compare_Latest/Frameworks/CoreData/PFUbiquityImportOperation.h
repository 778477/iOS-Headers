/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSLock, NSObject;

@interface PFUbiquityImportOperation : NSOperation
{
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}

- (void)unlockDelegateLock;
- (void)lockDelegateLock;
@property NSObject *delegate;
- (id)retainedDelegate;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

