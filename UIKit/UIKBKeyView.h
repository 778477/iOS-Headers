/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

#import "UIKBCacheableView-Protocol.h"

@class CALayer, NSString, UIKBRenderConfig, UIKBTree;

@interface UIKBKeyView : UIView <UIKBCacheableView>
{
    UIKBTree *m_keyplane;
    UIKBTree *m_key;
    struct CGPoint m_drawOrigin;
    struct __CFBoolean *m_allowsCaching;
    UIKBRenderConfig *m_renderConfig;
    CALayer *_keyBorders;
    CALayer *_keyBackgrounds;
    CALayer *_keyCaps;
    BOOL _usesControlOpacities;
    BOOL _renderAsMask;
    struct UIEdgeInsets _displayInsets;
}

@property(nonatomic) struct UIEdgeInsets displayInsets; // @synthesize displayInsets=_displayInsets;
@property(nonatomic) BOOL renderAsMask; // @synthesize renderAsMask=_renderAsMask;
@property(nonatomic) BOOL usesControlOpacities; // @synthesize usesControlOpacities=_usesControlOpacities;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=m_renderConfig;
@property(nonatomic) struct CGPoint drawOrigin; // @synthesize drawOrigin=m_drawOrigin;
@property(readonly, nonatomic) UIKBTree *key; // @synthesize key=m_key;
@property(readonly, nonatomic) UIKBTree *keyplane; // @synthesize keyplane=m_keyplane;
- (id)_generateBackdropMaskImage;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawContentsOfRenderers:(id)arg1;
@property(readonly, nonatomic) BOOL keepNonPersistent;
@property(readonly, nonatomic) float cachedWidth;
@property(readonly, nonatomic) BOOL cacheDeferable;
- (void)displayLayer:(id)arg1;
- (id)_setupLayerIfNoLayer:(id)arg1 withContents:(id)arg2;
@property(readonly) int cachedRenderFlags;
- (id)cacheKeysForRenderFlags:(id)arg1;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)dimKeyCaps:(float)arg1 duration:(float)arg2;
- (void)_applyAppearanceInvocations;
- (int)textEffectsVisibilityLevel;
- (void)dealloc;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end
