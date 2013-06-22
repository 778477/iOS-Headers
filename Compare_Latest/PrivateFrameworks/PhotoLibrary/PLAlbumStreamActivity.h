/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibrary/PLActivity.h>

#import "PLAbstractAlbumPickerViewControllerDelegate-Protocol.h"
#import "PLCloudSharedCreateAlbumViewControllerDelegate-Protocol.h"

@class NSObject<PLUserEditableAssetContainer>, PLCloudSharedCreateAlbumViewController, PLModalDimmingViewController, UIViewController;

@interface PLAlbumStreamActivity : PLActivity <PLCloudSharedCreateAlbumViewControllerDelegate, PLAbstractAlbumPickerViewControllerDelegate>
{
    PLModalDimmingViewController *_modalDimmingViewController;
    PLCloudSharedCreateAlbumViewController *_createAlbumViewController;
    UIViewController *_referenceViewController;
    BOOL _destinationAlbumWasCreated;
    id <PLAlbumStreamActivityDelegate> _delegate;
    NSObject<PLUserEditableAssetContainer> *_destinationStreamingAlbum;
}

@property(retain, nonatomic) NSObject<PLUserEditableAssetContainer> *destinationStreamingAlbum; // @synthesize destinationStreamingAlbum=_destinationStreamingAlbum;
@property(nonatomic) id <PLAlbumStreamActivityDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) BOOL destinationAlbumWasCreated; // @synthesize destinationAlbumWasCreated=_destinationAlbumWasCreated;
@property(nonatomic) UIViewController *referenceViewController; // @synthesize referenceViewController=_referenceViewController;
- (BOOL)albumPickerController:(id)arg1 shouldEnableAlbum:(id)arg2;
- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(BOOL)arg2;
- (void)_createStreamsPickerContainer;
- (void)_switchToPostCommentController;
- (void)_publishAssets:(id)arg1 toAlbum:(id)arg2 orCreateWithName:(id)arg3 comment:(id)arg4 invitationRecipients:(id)arg5 wantsPublicWebsite:(BOOL)arg6 completion:(id)arg7;
- (void)_createNewStreamContainer;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)_handleCompletionWithStatus:(int)arg1 animated:(BOOL)arg2;
- (BOOL)_sharedAlbumAllowsAdding:(struct NSObject *)arg1;
- (void)_restoreOriginalStatusBar;
- (int)_preferredStatusBarStyle;
- (void)cancelAlbumStreamActivityAnimated:(BOOL)arg1;
- (void)presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (id)_beforeActivity;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;

@end

