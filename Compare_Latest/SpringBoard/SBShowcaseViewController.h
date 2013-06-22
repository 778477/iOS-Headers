/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBShowcaseViewControllerProtocol-Protocol.h"

@class SBShowcaseController;

@interface SBShowcaseViewController : NSObject <SBShowcaseViewControllerProtocol>
{
    SBShowcaseController *_showcase;
    int _revealMode;
}

@property(nonatomic) int revealMode; // @synthesize revealMode=_revealMode;
@property(nonatomic) SBShowcaseController *showcase; // @synthesize showcase=_showcase;
- (BOOL)activateIgnoringTouches;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)expectsFaceContact;
- (void)revealModeWillChange:(int)arg1;
- (float)revealAmountForMode:(int)arg1;
- (float)bottomBarHeight;
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)view;

@end

