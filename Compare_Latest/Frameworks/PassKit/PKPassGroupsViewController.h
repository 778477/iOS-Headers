/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PKCodeAcquisitionDelegate-Protocol.h"
#import "PKGroupsControllerDelegate-Protocol.h"
#import "PKPassGroupStackViewDatasource-Protocol.h"
#import "PKPassGroupStackViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSTimer, PKGroupsController, PKPassGroupStackView, PKUsageNotificationServer;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKCodeAcquisitionDelegate>
{
    PKGroupsController *_groupsController;
    PKPassGroupStackView *_cardStackView;
    unsigned int _modalCardIndex;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    int _presentationState;
    NSTimer *_allowDimmingTimer;
    unsigned long long tick;
    unsigned long long tock;
    NSTimer *_passViewedNotificationTimer;
    PKUsageNotificationServer *_usageServer;
    id <PKPassGroupsViewControllerDelegate> _delegate;
}

@property(nonatomic) id <PKPassGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKPassGroupStackView *groupStackView; // @synthesize groupStackView=_cardStackView;
- (void)cardsChanged:(id)arg1;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAcquirePass:(id)arg2;
- (void)_applyPresentationState;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)groupStackView:(id)arg1 didAnimateToState:(int)arg2;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleApplicationdidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (int)suppressedContent;
- (BOOL)passesGrowWhenFlipped;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (unsigned int)indexOfGroup:(id)arg1;
- (float)groupHeightAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfGroups;
- (id)groupAtIndex:(unsigned int)arg1;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)presentGroupWithIndex:(unsigned int)arg1;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)presentGroupTable;
- (void)reloadPasses;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidUnload;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsFullScreenLayout;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
