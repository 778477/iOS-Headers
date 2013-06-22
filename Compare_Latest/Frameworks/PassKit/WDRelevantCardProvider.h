/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSDate, NSMutableSet, NSTimer, SBSCardItemsController, WDDatabaseManager;

@interface WDRelevantCardProvider : NSObject <CLLocationManagerDelegate>
{
    WDDatabaseManager *_databaseManager;
    CLLocationManager *_locationManager;
    CLLocation *_lastLocation;
    CLLocation *_roughLocation;
    NSDate *_currentSearchStartDate;
    NSTimer *_searchExpirationTimer;
    int _locationSearchState;
    NSMutableSet *_dateRelevantCards;
    NSMutableSet *_locationPendingCards;
    SBSCardItemsController *_cardItemsController;
    int _springBoardRegistrationStatus;
    BOOL _locationsAlwaysMatchOverride;
    BOOL _datesAlwaysMatchOverride;
    BOOL _passesAreNeverRelevant;
}

- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (BOOL)_locationIsNewEnoughAndHasGoodAccuracy:(id)arg1;
- (void)_sendGroups:(id)arg1;
- (void)_updateAndSendRelevantCardsForContinuity:(BOOL)arg1;
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forLocation:(id)arg3;
- (void)_insertPass:(id)arg1 intoGroups:(id)arg2 forDate:(id)arg3;
- (id)_groupForPass:(id)arg1 inGroups:(id)arg2;
- (void)_addDateRelevantAndLocationPendingCardsForTemplate:(int)arg1 locationAvailable:(BOOL)arg2;
- (void)_stopLocationSearch;
- (BOOL)_isDoingLocationSearch;
- (BOOL)_handleNewLocation:(id)arg1 forceAcceptance:(BOOL)arg2 from:(id)arg3;
- (void)_stopAndAcceptLocation:(id)arg1;
- (void)_reallyStartLocationSearchIfNeeded;
- (void)_startLocationSearch;
- (void)_clearSearchExpirationTimer;
- (void)_beginSearchExpirationTimer;
- (void)_searchTimerExpired:(id)arg1;
- (void)_unscheduleEagerRecalculation;
- (void)_scheduleEagerRecalculationWithCards:(id)arg1 region:(id)arg2;
- (BOOL)_shouldScheduleEagerRecalculation;
- (void)_loadPersistedLocationIfNecessary;
- (void)_startCardSearchUpdatingWithLastLocation:(BOOL)arg1 refreshingLocation:(BOOL)arg2;
- (void)_tearDownExitFenceTimerFired;
- (void)_relevantCardExpirationTimerFired;
- (void)_handleDimmedEvent:(BOOL)arg1;
- (void)_handleSignifigantTimeChangedEvent;
- (void)_registerOrUnregisterForSpringBoardEvents;
- (void)_loadDefaults;
- (void)reloadDefaults;
- (void)recomputeRelevantCards;
- (void)startObservingEvents;
- (void)dealloc;
- (id)initWithDatabaseManager:(id)arg1;

@end

