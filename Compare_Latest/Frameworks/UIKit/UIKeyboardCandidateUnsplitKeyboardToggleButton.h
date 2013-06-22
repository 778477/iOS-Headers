/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKeyboardCandidateToggleButton.h>

@class UIImage, UIView;

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton
{
    UIView *_pocketShadow;
    UIView *_borderLine;
    UIImage *_backgroundNormal;
    UIImage *_backgroundHighlighted;
    BOOL _drawsBackground;
    BOOL _drawsPocketShadow;
}

@property(nonatomic) BOOL drawsPocketShadow; // @synthesize drawsPocketShadow=_drawsPocketShadow;
@property(nonatomic) BOOL drawsBackground; // @synthesize drawsBackground=_drawsBackground;
- (id)toggleButtonBackgroundImageWithHighlight:(BOOL)arg1;
- (void)updateBackgroundImages;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

