//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HDQueryServer.h"

#import "HDDataObserver.h"

@class HKStatisticsCollection, NSDate, NSNumber, NSString;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDDataObserver>
{
    NSNumber *_startAnchor;
    HKStatisticsCollection *_statisticsCollection;
    BOOL _deliversUpdates;
    NSDate *_anchorDate;
    unsigned int _statisticsOptions;
}

@property(readonly, nonatomic) unsigned int statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
@property(readonly, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void).cxx_destruct;
- (id)_orderedSourcesWithRestrictedSourceIdentifier:(id)arg1;
- (BOOL)_queue_objectIsRelevant:(id)arg1;
- (void)_queue_fetchAndDeliverStatisticsForTimePeriod:(id)arg1 sourceIdentifier:(id)arg2 orderedSources:(id)arg3;
- (id)_fetchStatisticsByEnumeratingTimePeriodsWithStartDate:(id)arg1 endDate:(id)arg2 sourceIdentifier:(id)arg3 error:(id *)arg4;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(BOOL)arg1;
- (id)_queue_fetchStatisticsWithStartDate:(id)arg1 endDate:(id)arg2 sourceIdentifier:(id)arg3 orderedSources:(id)arg4 error:(id *)arg5;
- (void)samplesOfTypeWereRemoved:(id)arg1;
- (void)_queue_samplesAdded:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_start;
- (BOOL)_shouldListenForUpdates;
- (id)initWithQueryUUID:(id)arg1 sampleType:(id)arg2 filter:(id)arg3 anchorDate:(id)arg4 statisticsOptions:(unsigned int)arg5 statisticsInterval:(id)arg6 shouldListenForUpdates:(BOOL)arg7 clientProxy:(id)arg8 delegate:(id)arg9 daemon:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

