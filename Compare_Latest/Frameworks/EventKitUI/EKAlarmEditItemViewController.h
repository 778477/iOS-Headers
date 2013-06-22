/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKEditItemViewController.h>

#import "CalendarEventAlarmTableDelegate-Protocol.h"

@class CalendarEventAlarmTable, EKAlarm;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate>
{
    CalendarEventAlarmTable *_table;
    EKAlarm *_alarm;
    int _alarmIndex;
    BOOL _allDay;
    BOOL _shouldAllowAlarmsTriggeringAfterStartDate;
}

@property(nonatomic) BOOL shouldAllowAlarmsTriggeringAfterStartDate; // @synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate;
@property(nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
- (void)alarmTableDidChangeAlarm:(id)arg1;
@property(nonatomic) int presetIdentifier;
- (BOOL)customSelected;
- (void)setCustomString:(id)arg1;
@property(retain, nonatomic) EKAlarm *alarm;
@property(nonatomic) int alarmIndex;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidUnload;
- (void)loadView;
- (id)initWithFrame:(struct CGRect)arg1 styleProvider:(id)arg2;

@end
