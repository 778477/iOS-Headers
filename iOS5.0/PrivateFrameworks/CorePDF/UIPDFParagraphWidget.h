/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIPDFSelectionWidget-Protocol.h"

@class CALayer, CAShapeLayer, UIPDFPageView;

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget>
{
    CAShapeLayer *_trackingBorder;
    struct CGRect _initialRect;
    BOOL _tracking;
    struct CGRect _currentTrackingRect;
    CALayer *_leftGrabber;
    CALayer *_rightGrabber;
    CALayer *_topGrabber;
    CALayer *_bottomGrabber;
    CALayer *_selectedGrabber;
    struct CGRect _boundsInPDFSpace;
    UIPDFPageView *_pageView;
    struct CGPoint _initialSelectionPointOnPage;
}

- (id)init;
- (void)dealloc;
- (struct CGRect)selectionBoundsInEffectsSpace;
- (void)setSelection:(id)arg1;
- (void)remove;
- (BOOL)hitTest:(struct CGPoint)arg1 fixedPoint:(struct CGPoint *)arg2 preceeds:(char *)arg3;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg1;
- (struct CGPoint)viewOffset;
- (void)layout;
- (void)setSelectedGrabber:(unsigned int)arg1;
- (struct CGRect)adjustRect:(struct CGRect)arg1 toPoint:(struct CGPoint)arg2;
- (void)setSelectedGrabberPosition:(struct CGRect)arg1;
- (void)track:(struct CGPoint)arg1;
- (void)endTracking;
- (struct CGRect)selectionRectangle;
@property(readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;
- (void)hide;
@property(readonly, nonatomic) struct CGPoint initialSelectionPointOnPage; // @synthesize initialSelectionPointOnPage=_initialSelectionPointOnPage;
@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView=_pageView;

@end

