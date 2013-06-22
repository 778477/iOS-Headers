/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UILabel.h"

#import "CKInteractionProxiedView-Protocol.h"
#import "CKTextBalloonContentView-Protocol.h"

@class NSAttributedString, UIColor, UIFont;

@interface CKInteractiveLabel : UILabel <CKInteractionProxiedView, CKTextBalloonContentView>
{
    BOOL _containsHyperlink;
    BOOL _interactionViewAttached;
    id <CKTextInteractionDelegate> _interactionDelegate;
}

@property(nonatomic) id <CKTextInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic, getter=isInteractionViewAttached) BOOL interactionViewAttached; // @synthesize interactionViewAttached=_interactionViewAttached;
@property(nonatomic) BOOL containsHyperlink; // @synthesize containsHyperlink=_containsHyperlink;
- (void)willDetachInteractionView:(id)arg1;
- (void)willAttachInteractionView:(id)arg1;
- (void)prepareForReuse;
- (id)_synthesizedAttributedText;
- (BOOL)_shouldDrawUnderlinesLikeWebKit;
- (BOOL)_allowAscentRounding;
@property(copy, nonatomic) NSAttributedString *attributedText;
- (BOOL)isUserInteractionEnabled;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)description;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *shadowColor;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) int textAlignment;
@property(retain, nonatomic) UIColor *textColor;

@end

