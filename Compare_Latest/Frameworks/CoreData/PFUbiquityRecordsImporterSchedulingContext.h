/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSSet;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject
{
    NSMutableSet *_scheduledLogs;
    NSMutableSet *_pendingLogs;
    NSMutableSet *_failedLogs;
    NSMutableSet *_ignoredLogs;
    NSMutableDictionary *_logsToEncounteredErrors;
}

@property(readonly, nonatomic) NSDictionary *logsToEncounteredErrors; // @synthesize logsToEncounteredErrors=_logsToEncounteredErrors;
@property(readonly, nonatomic) NSSet *ignoredLogs; // @synthesize ignoredLogs=_ignoredLogs;
@property(readonly, nonatomic) NSSet *failedLogs; // @synthesize failedLogs=_failedLogs;
@property(readonly, nonatomic) NSSet *scheduledLogs; // @synthesize scheduledLogs=_scheduledLogs;
@property(readonly, nonatomic) NSSet *pendingLogs; // @synthesize pendingLogs=_pendingLogs;
- (void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2;
- (void)transactionLogAtLocationWasIgnored:(id)arg1;
- (void)transactionLogAtLocationWasScheduled:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithPendingLogs:(id)arg1;
- (id)init;

@end

