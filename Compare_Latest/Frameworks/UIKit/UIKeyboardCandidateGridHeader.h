/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface UIKeyboardCandidateGridHeader : UIView
{
    UILabel *_inlineTextLabel;
    float _inlineTextRightMargin;
    UIButton *_toggleButton;
}

@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(nonatomic) float inlineTextRightMargin; // @synthesize inlineTextRightMargin=_inlineTextRightMargin;
@property(retain, nonatomic) UILabel *inlineTextLabel; // @synthesize inlineTextLabel=_inlineTextLabel;
@property(copy, nonatomic) NSString *inlineText;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

