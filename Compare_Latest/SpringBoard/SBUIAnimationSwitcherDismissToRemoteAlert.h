//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBRemoteAlertAdapter;

@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController
{
    SBRemoteAlertAdapter *_alert;
    SBAlertManager *_alertManager;
}

- (void)_cleanupAnimation;
- (void)_deferredAlertActivationStuff;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithDeactivatingApp:(id)arg1 toRemoteAlert:(id)arg2 alertManager:(id)arg3;

@end

