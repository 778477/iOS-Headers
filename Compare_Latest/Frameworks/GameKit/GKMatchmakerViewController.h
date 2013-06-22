/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class GKMatchRequest, GKMatchmakerViewControllerPrivate, NSString;

@interface GKMatchmakerViewController : UINavigationController
{
    GKMatchmakerViewControllerPrivate *_privateViewController;
}

@property(retain, nonatomic) GKMatchmakerViewControllerPrivate *privateViewController; // @synthesize privateViewController=_privateViewController;
- (void)setHostedPlayerReady:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
@property(copy, nonatomic) NSString *defaultInvitationMessage; // @dynamic defaultInvitationMessage;
- (void)setHostedPlayer:(id)arg1 connected:(BOOL)arg2;
@property(nonatomic, getter=isHosted) BOOL hosted;
@property(readonly, nonatomic) GKMatchRequest *matchRequest; // @dynamic matchRequest;
@property(nonatomic) id <GKMatchmakerViewControllerDelegate> matchmakerDelegate; // @dynamic matchmakerDelegate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)dealloc;
- (void)addPlayersToMatch:(id)arg1;
- (id)init;
- (id)initWithInvite:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (id)initWithPrivateViewController:(id)arg1;

@end

