/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CAGradientLayer, UIImageView;

@interface SLFacebookSheetCardView : UIView
{
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_paperBG;
    UIView *_paperTexture;
    CAGradientLayer *_gradientLayer;
    UIImageView *_bevel;
    UIView *_headerView;
    BOOL _hidesBottom;
    BOOL _useLightShadow;
    BOOL _usedLocally;
}

+ (struct CGRect)keyboardFrameForInterfaceOrientation:(int)arg1;
+ (struct CGRect)cardRectForOrientation:(int)arg1 options:(int)arg2 parentBounds:(struct CGRect)arg3 keyboardFrame:(struct CGRect)arg4 usedLocally:(BOOL)arg5;
@property(nonatomic) BOOL usedLocally; // @synthesize usedLocally=_usedLocally;
@property(nonatomic) BOOL useLightShadow; // @synthesize useLightShadow=_useLightShadow;
- (void).cxx_destruct;
- (void)updateCardRectForOrientation:(int)arg1 options:(int)arg2;
- (void)restoreKeyboard;
- (void)updateKeyboardForOrientation:(int)arg1;
- (struct CGRect)headerFrame;
- (void)layoutSubviews;
- (void)_setHeaderBackgroundImage:(id)arg1;
- (void)_updateHeader;
- (struct CGRect)_bevelRect;
- (struct CGRect)paperBounds;
- (id)imageWithName:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)setupSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

