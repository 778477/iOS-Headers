/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, WLCardImages;

@interface PKImageSetCacheItem : NSObject
{
    WLCardImages *_images;
    NSMutableSet *_cardUniqueIDs;
}

@property(retain, nonatomic) NSMutableSet *cardUniqueIDs; // @synthesize cardUniqueIDs=_cardUniqueIDs;
@property(retain, nonatomic) WLCardImages *images; // @synthesize images=_images;
- (void)dealloc;
- (id)initWithImages:(id)arg1 cardUniqueID:(id)arg2;

@end

