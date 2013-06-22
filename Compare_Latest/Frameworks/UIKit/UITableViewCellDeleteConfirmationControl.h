/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UITableViewCellDeleteConfirmationGestureRecognizer;

@interface UITableViewCellDeleteConfirmationControl : UIControl
{
    BOOL _visible;
    UITableViewCellDeleteConfirmationGestureRecognizer *_deleteConfirmationGesture;
}

+ (struct CGSize)defaultSizeForTitle:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic, getter=isVisible) BOOL visible;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)defaultSize;
- (void)cancelDeleteConfirmationWithGesture:(id)arg1;
- (void)touchUpOutside:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1;
- (void)_confirmationAnimationDidEnd;

@end

