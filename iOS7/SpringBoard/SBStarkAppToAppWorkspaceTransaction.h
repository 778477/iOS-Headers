/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBStarkToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate-Protocol.h"

@class BKSApplicationActivationAssertion, SBApplication, SBUIAnimationController;

@interface SBStarkAppToAppWorkspaceTransaction : SBStarkToAppWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBApplication *_fromApp;
    SBUIAnimationController *_animationController;
    BKSApplicationActivationAssertion *_suspendingAppAssertion;
    _Bool _animatedActivation;
    _Bool _animatedDeactivation;
}

@property(readonly, nonatomic) SBApplication *fromApp; // @synthesize fromApp=_fromApp;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(_Bool)arg2;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToApp;
- (void)_doCommit;
- (id)_animation;
- (void)_handleAppDidNotChange;
- (id)_setupAnimationFrom:(id)arg1 to:(id)arg2;
- (void)_transactionComplete;
- (void)_interruptWithReason:(int)arg1;
- (_Bool)_canBeInterrupted;
- (void)_endAnimation;
- (_Bool)selfStarkAlertDidDeactivate:(id)arg1;
- (_Bool)selfAlertDidDeactivate:(id)arg1;
- (_Bool)selfApplicationExited:(id)arg1;
- (_Bool)selfApplicationLaunchDidFail:(id)arg1;
- (_Bool)selfApplicationActivated:(id)arg1;
- (_Bool)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2;
- (_Bool)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (_Bool)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (void)_commit;
- (void)_beginAnimation;
- (int)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5;

@end

