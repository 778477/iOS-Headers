/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPNondurableMediaItem.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class MPStoreOfferContentRating, NSDictionary;

@interface MPStoreOfferMediaItem : MPNondurableMediaItem <NSCoding, NSCopying>
{
    NSDictionary *_lookupCollectionPropertyValues;
    unsigned int _indexInCollectionItems;
    int _preferredStoreOfferVariant;
    MPStoreOfferContentRating *_contentRating;
}

+ (id)mediaitemsByRemovingRestrictedContentFromMediaItems:(id)arg1;
+ (id)mediaItemsByMergingStoreOfferMediaItems:(id)arg1 localItems:(id)arg2;
+ (BOOL)canMergeStoreOfferMediaItemsLocalItems:(id)arg1;
+ (BOOL)canFilterByProperty:(id)arg1;
+ (id)mediaItemsWithStoreLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2;
+ (id)fallbackPropertyValues;
+ (id)preferredAssetDictionaryInOfferDictionary:(id)arg1;
+ (id)offerDictionaryWithPreferredAssetDictionaryInItemResponseDictionary:(id)arg1;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2 mediaProperty:(id)arg3;
+ (BOOL)hasMediaItemValuesForStoreLookupCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1 itemIndex:(unsigned int)arg2;
+ (id)localRepresentativeItemPropertyForMediaProperty:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)itemLookupKeyForMediaProperty:(id)arg1;
+ (id)offerLookupKeyForItemMediaProperty:(id)arg1;
+ (id)assetLookupKeyForItemMediaProperty:(id)arg1;
- (id)_lookupOfferDictionaries;
- (int)preferredStoreOfferVariant;
- (id)buyOfferForVariant:(int)arg1;
- (BOOL)isDownloadable;
- (BOOL)_offeredItemAlreadyExists;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mediaLibrary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithLookupLookupCollectionPropertyValues:(id)arg1 preferredStoreOfferVariant:(int)arg2 itemID:(id)arg3 itemIndex:(unsigned int)arg4;

@end

