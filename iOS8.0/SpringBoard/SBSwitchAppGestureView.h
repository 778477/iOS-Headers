//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBAnimationStepper, SBApplication, SBStretchTransformer;

@interface SBSwitchAppGestureView : UIView
{
    long long m_orientation;
    SBApplication *m_startingApp;
    SBApplication *m_endingApp;
    SBApplication *m_leftwardApp;
    SBApplication *m_rightwardApp;
    long long m_startingViewOrientation;
    long long m_leftwardViewOrientation;
    long long m_rightwardViewOrientation;
    UIView *m_startingView;
    UIView *m_leftwardView;
    UIView *m_rightwardView;
    double m_pageWidth;
    double m_percentage;
    double m_contentOffset;
    SBStretchTransformer *m_stretchTransformer;
    _Bool m_finishingPaging;
    _Bool m_underflowing;
    _Bool m_overflowing;
    CDUnknownBlockType m_completion;
    SBAnimationStepper *_wallpaperAnimationStepper;
    long long _startingWallpaperStyle;
    long long _leftwardWallpaperStyle;
    long long _rightwardWallpaperStyle;
}

@property(nonatomic) long long rightwardWallpaperStyle; // @synthesize rightwardWallpaperStyle=_rightwardWallpaperStyle;
@property(nonatomic) long long leftwardWallpaperStyle; // @synthesize leftwardWallpaperStyle=_leftwardWallpaperStyle;
@property(nonatomic) long long startingWallpaperStyle; // @synthesize startingWallpaperStyle=_startingWallpaperStyle;
@property(retain, nonatomic) SBAnimationStepper *wallpaperAnimationStepper; // @synthesize wallpaperAnimationStepper=_wallpaperAnimationStepper;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=m_completion;
@property(nonatomic, getter=isOverflowing) _Bool overflowing; // @synthesize overflowing=m_overflowing;
@property(nonatomic, getter=isUnderflowing) _Bool underflowing; // @synthesize underflowing=m_underflowing;
@property(retain, nonatomic) SBStretchTransformer *stretchTransformer; // @synthesize stretchTransformer=m_stretchTransformer;
@property(nonatomic) double contentOffset; // @synthesize contentOffset=m_contentOffset;
@property(nonatomic) double percentage; // @synthesize percentage=m_percentage;
@property(nonatomic) double pageWidth; // @synthesize pageWidth=m_pageWidth;
@property(nonatomic) long long rightwardViewOrientation; // @synthesize rightwardViewOrientation=m_rightwardViewOrientation;
@property(nonatomic) long long leftwardViewOrientation; // @synthesize leftwardViewOrientation=m_leftwardViewOrientation;
@property(nonatomic) long long startingViewOrientation; // @synthesize startingViewOrientation=m_startingViewOrientation;
@property(retain, nonatomic) UIView *rightwardView; // @synthesize rightwardView=m_rightwardView;
@property(retain, nonatomic) UIView *leftwardView; // @synthesize leftwardView=m_leftwardView;
@property(retain, nonatomic) UIView *startingView; // @synthesize startingView=m_startingView;
@property(retain, nonatomic) SBApplication *rightwardApp; // @synthesize rightwardApp=m_rightwardApp;
@property(retain, nonatomic) SBApplication *leftwardApp; // @synthesize leftwardApp=m_leftwardApp;
@property(retain, nonatomic) SBApplication *endingApp; // @synthesize endingApp=m_endingApp;
@property(retain, nonatomic) SBApplication *startingApp; // @synthesize startingApp=m_startingApp;
@property(nonatomic) long long orientation; // @synthesize orientation=m_orientation;
@property(readonly, nonatomic, getter=isPagingRightward) _Bool pagingRightward;
@property(readonly, nonatomic, getter=isPagingLeftward) _Bool pagingLeftward;
- (_Bool)isPagingOverflowPercentage:(double)arg1;
- (_Bool)isPagingUnderflowPercentage:(double)arg1;
- (void)cleanUpWallpaperAnimation;
- (void)stretchTransformerAnimationDidStop:(_Bool)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)moveToContentOffset:(double)arg1 percentage:(double)arg2 animated:(_Bool)arg3;
- (void)moveToApp:(id)arg1 animated:(_Bool)arg2;
- (void)moveToApp:(id)arg1;
- (double)opacityForPercentage:(double)arg1;
- (double)scaleForPercentage:(double)arg1;
- (double)percentageForApp:(id)arg1;
- (double)contentOffsetForApp:(id)arg1;
- (void)finishBackwardToStartWithCompletion:(CDUnknownBlockType)arg1;
- (void)finishForwardToEndWithPercentage:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePaging:(double)arg1;
- (void)beginPaging;
- (id)viewForApp:(id)arg1;
- (void)transformGestureViewContainer:(id)arg1;
- (void)dealloc;
- (id)initWithInterfaceOrientation:(long long)arg1 startingApp:(id)arg2 leftwardApp:(id)arg3 rightwardApp:(id)arg4;

@end

