/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableView.h"

#import "SBBulletinFadeOverlayOwner-Protocol.h"
#import "SBBulletinHeaderViewDelegate-Protocol.h"

@class NSMutableSet, SBBulletinLinenFadeView;

@interface SBBulletinTableView : UITableView <SBBulletinHeaderViewDelegate, SBBulletinFadeOverlayOwner>
{
    NSMutableSet *_visibleSectionHeaders;
    SBBulletinLinenFadeView *_fadeContainer;
    BOOL _suppressUpdates;
    BOOL _hasReloadedOnce;
    unsigned int _animatingUpdateCount;
}

@property(nonatomic) BOOL suppressUpdates; // @synthesize suppressUpdates=_suppressUpdates;
- (void)headerViewWillDisappear:(id)arg1;
- (void)headerViewWillAppear:(id)arg1;
- (BOOL)hasReloadedOnce;
- (void)reloadData;
- (void)endUpdates;
- (void)beginUpdates;
- (void)_decrementAnimatingCount;
- (void)_incrementAnimatingCount;
- (BOOL)isAnimatingUpdates;
- (void)layoutSubviews;
- (void)_orderHeierarchyAndAdjustLinenViewBackingAsNecessary;
- (void)setLinenGradientAlpha:(float)arg1;
- (void)setRasterizesFadeOverlay:(BOOL)arg1;
- (id)visibleSectionHeaders;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 linenView:(id)arg2;

@end

