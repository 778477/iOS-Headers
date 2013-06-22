/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSComponent.h>

@class ICSColor, ICSDuration, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ICSCalendar : ICSComponent
{
    NSMutableSet *_keys;
    NSMutableDictionary *_masters;
    NSMutableDictionary *_occurrences;
    NSMutableDictionary *_timezones;
    NSMutableArray *_parsingErrors;
}

+ (id)ICSStringFromCalendarServerAccess:(int)arg1;
+ (int)calendarServerAccessFromICSString:(id)arg1;
+ (id)ICSStringFromMethod:(int)arg1;
+ (int)methodFromICSString:(id)arg1;
+ (id)defaultProdid;
+ (void)setDefaultProdid:(id)arg1;
+ (id)name;
+ (id)calendarWithKnownTimeZones;
- (id)parsingErrors;
- (void)addParsingError:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setComponents:(id)arg1 options:(int)arg2;
- (void)setComponents:(id)arg1 timeZones:(BOOL)arg2;
- (id)componentOccurrencesForKey:(id)arg1;
- (id)componentForKey:(id)arg1;
- (id)componentKeys;
- (void)_addComponent:(id)arg1;
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;
- (id)systemDateForDate:(id)arg1 options:(int)arg2;
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;
- (id)systemTimeZoneForDate:(id)arg1;
@property(retain) NSString *x_wr_timezone;
@property(retain) NSString *x_wr_relcalid;
@property(retain) NSString *x_wr_calname;
@property(retain) NSString *x_wr_caldesc;
@property(retain) ICSColor *x_apple_calendar_color;
@property(retain) ICSDuration *x_apple_auto_refresh;
@property(retain) NSString *version;
@property(retain) NSString *prodid;
@property int method;
@property(retain) NSString *calscale;
- (void)dealloc;
- (id)init;
- (id)_init;
- (void)fixEntities;
- (void)fixComponent;
- (void)fixPropertiesInheritance;

// Remaining properties
@property BOOL x_apple_ignore_on_restore; // @dynamic x_apple_ignore_on_restore;
@property int x_calendarserver_access; // @dynamic x_calendarserver_access;

@end

