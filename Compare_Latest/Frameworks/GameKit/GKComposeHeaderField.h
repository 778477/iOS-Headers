/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class GKComposeHeaderFieldBackgroundView, NSString, UILabel;

@interface GKComposeHeaderField : UIImageView
{
    UILabel *_valueLabel;
    UILabel *_nameLabel;
    struct UIEdgeInsets _contentInsets;
    SEL _actionWhenTouched;
    unsigned int _maxLineCount;
    float _baselineNudge;
    float _verticalMargin;
    GKComposeHeaderFieldBackgroundView *_backgroundView;
}

@property(retain, nonatomic) GKComposeHeaderFieldBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) float verticalMargin; // @synthesize verticalMargin=_verticalMargin;
@property(nonatomic) float baselineNudge; // @synthesize baselineNudge=_baselineNudge;
@property(nonatomic) unsigned int maxLineCount; // @synthesize maxLineCount=_maxLineCount;
@property(nonatomic) SEL actionWhenTouched; // @synthesize actionWhenTouched=_actionWhenTouched;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutForSize:(struct CGSize)arg1 contentBounds:(struct CGRect *)arg2 nameFrame:(struct CGRect *)arg3 valueFrame:(struct CGRect *)arg4;
- (struct CGRect)adjustValueFrameIfNeeded:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect valueFrame;
- (id)viewForBaselineLayout;
@property(retain, nonatomic) NSString *valueText;
- (id)attributesForValueText;
@property(retain, nonatomic) NSString *nameText;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

