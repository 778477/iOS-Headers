/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class OADDrawable<OADDrawableContainer>, OADDrawableProperties;

@interface OADDrawable : NSObject
{
    BOOL mHidden;
    long mId;
    OADDrawableProperties *mDrawableProperties;
    id <OADClient> mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}

- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)ensureClientDataOfClass:(Class)arg1;
- (id)clientData;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (id)drawableProperties;
- (void)setId:(long)arg1;
- (long)id;
- (void)setHidden:(BOOL)arg1;
- (BOOL)hidden;
- (void)dealloc;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)createWordClientDataWithTextType:(int)arg1;

@end

