/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

#import "SBUIControlCenterButtonDelegate-Protocol.h"

@class SBUIControlCenterButton, SBUIControlCenterLabel, UIFont, UIView;

@interface SBCCButtonLikeSectionView : UIControl <SBUIControlCenterButtonDelegate>
{
    UIView *_darken;
    SBUIControlCenterButton *_button;
    SBUIControlCenterLabel *_label;
}

- (void)button:(id)arg1 didChangeState:(long long)arg2;
- (void)buttonTapped:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setNumberOfLines:(long long)arg1;
@property(retain, nonatomic) UIFont *font;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

