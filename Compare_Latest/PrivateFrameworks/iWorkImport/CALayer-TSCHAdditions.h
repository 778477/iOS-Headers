//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface CALayer (TSCHAdditions)
- (void)removeCDEEditorFlipOutAnimation;
- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint)arg1 toLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)removeCDEEditorFlipInAnimation;
- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint)arg1 fromLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)removeCDEChartFlipAnimationFromPosition;
- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint)arg1 toLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)removeCDEChartFlipAnimationToFinalPosition;
- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint)arg1 fromLeft:(BOOL)arg2 cameraDistance:(float)arg3;
- (void)removeCDEShieldOutAnimation;
- (void)addCDEShieldOutAnimation;
- (void)removeCDEShieldInAnimation;
- (void)addCDEShieldInAnimation;
- (void)addPerspectiveProjectionWithDistance:(float)arg1;
- (void)removeCallbackAnimationWithName:(id)arg1;
- (void)addCallbackAnimationWithName:(id)arg1 duration:(float)arg2 target:(id)arg3 selector:(SEL)arg4;
- (void)removeZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 speed:(float)arg2;
@end

