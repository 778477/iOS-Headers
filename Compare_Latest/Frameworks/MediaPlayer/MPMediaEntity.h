/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCopying, NSCoding>
{
}

+ (BOOL)canFilterByProperty:(id)arg1;
@property(readonly, nonatomic) MPMediaLibrary *mediaLibrary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(id)arg2;
- (id)valuesForProperties:(id)arg1;
- (id)valueForProperty:(id)arg1;
@property(readonly, nonatomic) MPMediaItem *representativeItem;
@property(readonly, nonatomic) unsigned long long persistentID;
@property(readonly, nonatomic) BOOL isPurchasableStoreOffer;
@property(readonly, nonatomic) BOOL isDownloadableStoreOffer;
@property(readonly, nonatomic) int preferredStoreOfferVariant;
- (id)buyOffer;
- (id)completionOfferForVariant:(int)arg1;
- (id)buyOfferForVariant:(int)arg1;
@property(readonly, nonatomic) BOOL isDownloadable;

@end

