/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "_MFComposeRecipientView.h"

@class IMService, NSMutableDictionary, UIActionSheet;

@interface CKComposeRecipientView : _MFComposeRecipientView
{
    IMService *_preferredService;
    id _sendBlock;
    BOOL _autoSendUponResolving;
    BOOL _atomizedForAutoSend;
    BOOL _resolvedForAutoSend;
    BOOL _canSend;
    int _serviceError;
    BOOL _alreadyShowedAlertForTooManyRecipientsError;
    NSMutableDictionary *_recipientAvailabilityTimeoutTimers;
    UIActionSheet *_actionSheet;
}

@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) int serviceError; // @synthesize serviceError=_serviceError;
@property(nonatomic) BOOL canSend; // @synthesize canSend=_canSend;
@property(retain, nonatomic) IMService *preferredService; // @synthesize preferredService=_preferredService;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_showErrorAlertForTooManyRecipientsUponSend;
- (void)showErrorAlertForTooManyRecipientsUponSendIfNecessary;
- (void)_showErrorAlertForTooManyRecipientsUponAdd;
- (void)_showOneTimeErrorAlertForTooManyRecipientsUponAddIfNecessary;
- (id)_recipientCausingTooManyRecipientsError;
- (BOOL)canInsertMoreRecipients;
- (void)updateRecipientLimit;
- (int)_calculateRecipientLimit;
- (void)_stopCheckingRecipientAvailability;
- (void)reset;
- (void)stopCheckingRecipientAvailabilityAndRemoveAllTimers;
- (void)handleRecipientAvailabilityTimeout:(id)arg1;
- (void)removeAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)startAvailabilityTimeoutTimerForRecipient:(id)arg1;
- (void)_showActionSheetForAtom:(id)arg1 animated:(BOOL)arg2;
- (void)_refreshActionSheet;
- (int)iMessageAvailabilityForRecipient:(id)arg1;
- (void)_checkAvailabilityOfAlternateAddressesForMFComposeRecipient:(id)arg1;
- (id)_alternateAddressesForMFComposeRecipient:(id)arg1 onlyIMessageAble:(BOOL)arg2;
- (BOOL)hasPendingAtoms;
- (BOOL)hasFailedAtoms;
- (BOOL)_hasAddressWithAvailability:(int)arg1;
- (BOOL)finishedComposingRecipients;
- (void)handlePreferredServiceChangedNotification:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)addRecipient:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addRecipient:(id)arg1;
- (BOOL)_serviceErrorIsForTooManyRecipients;
- (void)_addRecipient:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_addRecipient:(id)arg1;
- (void)removeAddresses;
- (void)removeAddressAtIndex:(int)arg1;
- (void)removeRecipient:(id)arg1;
- (BOOL)_addable;
- (int)atomStyleForRecipient:(id)arg1;
- (void)_reallyAutoSendIfReady;
- (void)_autoSendIfReady;
- (void)textFieldDidResignFirstResponder:(id)arg1;
- (void)atomizeAndInvokeBlock:(id)arg1;
- (void)reflow;
- (void)selectComposeRecipientAtom:(id)arg1;
- (id)customOverlayContainer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

