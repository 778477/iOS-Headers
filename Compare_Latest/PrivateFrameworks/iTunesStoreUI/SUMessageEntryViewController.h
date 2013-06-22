/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUViewController.h>

#import "SUMessageEntryViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSArray, NSString, SUMessageEntryView, UIImagePickerController;

@interface SUMessageEntryViewController : SUViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SUMessageEntryViewDelegate>
{
    id <SUMessageEntryViewControllerDelegate> _delegate;
    UIImagePickerController *_imagePicker;
    NSArray *_imagePickerMediaTypes;
    SUMessageEntryView *_messageEntryView;
}

@property(copy, nonatomic) NSArray *imagePickerMediaTypes; // @synthesize imagePickerMediaTypes=_imagePickerMediaTypes;
@property(nonatomic) id <SUMessageEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showImagePickerForSourceType:(int)arg1;
- (void)_reloadMessageEntryView;
- (void)_promptForSourceType;
- (id)_messageEntryView;
- (void)_dismissImagePickerAnimated:(BOOL)arg1;
- (BOOL)_allowsVideoCamera;
- (BOOL)_allowsCamera;
- (void)messageEntryViewSendButtonAction:(id)arg1;
- (void)messageEntryViewPhotoButtonAction:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)copyScriptViewController;
@property(copy, nonatomic) NSString *sendButtonTitle;
@property(nonatomic, getter=isSendButtonEnabled) BOOL sendButtonEnabled;
@property(nonatomic, getter=isPhotoButtonEnabled) BOOL photoButtonEnabled;
- (void)focusMessageField;
- (id)copyMessagePartsWithUTI:(id)arg1;
- (void)clearMessage;
- (void)dealloc;
- (id)init;

@end

