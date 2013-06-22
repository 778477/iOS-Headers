/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface MPUsageStatistics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_domain;
    NSString *_lastAggregateStatisticsDisplayCountKey;
    double _lastAggregateStatisticsDisplayCountTime;
}

+ (id)sharedStatistics;
- (void)incrementViewDisplayCountForKey:(id)arg1;
- (void)incrementViewDisplayCountForViewController:(id)arg1;
- (id)domain;
- (void)setAggregateStatisticsDomain:(id)arg1;
- (void)dealloc;
- (id)init;

@end

