/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKMultiplayerViewController.h>

#import "GKFriendPickerViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class NSError, NSMutableDictionary;

@interface GKTurnBasedInviteViewController : GKMultiplayerViewController <UIActionSheetDelegate, GKFriendPickerViewControllerDelegate>
{
    id <GKTurnBasedInviteViewControllerDelegate> _delegate;
    BOOL _showCancelButton;
    NSMutableDictionary *_inviteMessageDictionary;
    NSError *_creationError;
}

@property(retain, nonatomic) NSError *creationError; // @synthesize creationError=_creationError;
@property(retain, nonatomic) NSMutableDictionary *inviteMessageDictionary; // @synthesize inviteMessageDictionary=_inviteMessageDictionary;
@property(nonatomic) BOOL showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(nonatomic) id <GKTurnBasedInviteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)friendPickerViewController:(id)arg1 didFinishWithPlayers:(id)arg2 inviteMessage:(id)arg3;
- (void)finishWithError:(id)arg1;
- (void)cancel;
- (void)cleanupStateForCancelOrError;
- (void)cancelButtonPressed;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)playNow;
- (void)finishWithMatch:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;

@end

