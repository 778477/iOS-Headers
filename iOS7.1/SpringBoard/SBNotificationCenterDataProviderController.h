//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SBNotificationCenterDataProviderController : NSObject
{
    NSArray *_dataProviders;
}

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;
- (void)buddyCompleted:(id)arg1;
- (void)publishSectionInfoIfNecessary;
- (id)_widgetSections;
- (id)_sectionWithIdentifier:(id)arg1 forCategory:(long long)arg2;
- (id)_sectionForWidgetBundle:(id)arg1 forCategory:(long long)arg2;
- (id)_copyDefaultEnabledWidgetIDs;
- (void)dealloc;
- (id)init;

@end

