/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPickerViewController.h>

@interface ABRingtonePickerViewController : ABPickerViewController
{
    BOOL _isTextToneViewController;
}

- (void)cancelButtonClicked:(id)arg1;
- (void)ringtoneSaveButtonClicked:(id)arg1;
- (void)_getRotationContentSettings:(CDStruct_af7d35ee *)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)loadView;
@property(readonly, nonatomic) id tonePicker;
- (id)initAsRingtoneViewController:(BOOL)arg1;
- (id)init;

@end

