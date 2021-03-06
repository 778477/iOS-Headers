/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WLCardGroupViewDelegate <NSObject>

@optional
- (id)groupViewReusableCardViewQueue:(id)arg1;
- (BOOL)groupViewPassesSuppressedContent:(id)arg1;
- (BOOL)groupViewPassesGrowCenteredWhenFlipped:(id)arg1;
- (BOOL)groupViewPassesGrowWhenFlipped:(id)arg1;
- (void)groupView:(id)arg1 flipButtonPressedForCard:(id)arg2;
- (void)groupView:(id)arg1 deleteButtonPressedForCard:(id)arg2;
- (void)groupViewFrontCardDidFlip:(id)arg1;
- (BOOL)groupViewShouldShowFullFrontCardInStack:(id)arg1;
- (BOOL)groupViewShouldAllowCardFlip:(id)arg1;
- (void)groupViewTapped:(id)arg1;
@end

