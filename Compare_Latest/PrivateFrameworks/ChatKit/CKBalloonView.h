/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CKMessagePart, UILongPressGestureRecognizer, UITapGestureRecognizer;

@interface CKBalloonView : UIImageView <UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_oneFingerDoubleTapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    unsigned int _isIgnoringSingleTap:1;
    unsigned int _calloutRegistered:1;
    id <CKBalloonViewDelegate> _delegate;
    id <CKBalloonViewActionDelegate> _actionDelegate;
    int _orientation;
    CKMessagePart *_messagePart;
    BOOL _tapEnabled;
    BOOL _restoring;
}

+ (struct UIEdgeInsets)contentInsetsForBalloonOrientation:(int)arg1;
+ (float)entryFieldBalloonAdditionalHeight;
+ (struct CGPoint)entryFieldBalloonOffset;
+ (BOOL)fixedWidth;
+ (BOOL)needsSingleTapGestureRecognizer;
@property(nonatomic, getter=isRestoring) BOOL restoring; // @synthesize restoring=_restoring;
@property(nonatomic, getter=isTapEnabled) BOOL tapEnabled; // @synthesize tapEnabled=_tapEnabled;
@property(retain, nonatomic) CKMessagePart *messagePart; // @synthesize messagePart=_messagePart;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) id <CKBalloonViewActionDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(nonatomic) id <CKBalloonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupGestureRecognizers;
- (void)singleTap:(id)arg1;
- (void)longPressGesture:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)_showCopyCallout;
- (void)sendAsTextMessage:(id)arg1;
- (void)_hideCopyCallout;
- (void)_toggleCopyCallout;
- (void)calloutWillHide:(id)arg1;
- (void)_temporarilyIgnoreSingleTapGesture;
- (void)_stopIgnoringSingleTapGesture;
- (void)setupSingleTapRecognizerOnView:(id)arg1;
- (void)flashHighlight;
- (void)copyToPasteboard;
- (void)restoreBalloonStateAfterRotation;
- (void)hideCopyCallout;
- (void)prepareForReuse;
- (struct CGRect)contentBounds;
- (struct UIEdgeInsets)contentInsets;
- (void)setEnableSingleTap:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_windowResignedKey;
- (void)_windowBecameKey;
- (BOOL)_becomeFirstResponderWhenPossible;
- (BOOL)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (id)description;
- (void)dealloc;

@end

