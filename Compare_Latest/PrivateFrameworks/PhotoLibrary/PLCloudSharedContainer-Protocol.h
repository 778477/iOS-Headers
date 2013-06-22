/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PLAssetContainer-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSOrderedSet, NSString;

@protocol PLCloudSharedContainer <PLAssetContainer>
@property(readonly, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property(readonly, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property(readonly, nonatomic) NSString *localizedSharedWithLabel;
@property(readonly) int cloudRelationshipStateLocalValue;
@property(readonly) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSString *cloudPersonID;
@property(retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property unsigned int unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber *unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet *invitationRecords;
@property(retain, nonatomic) NSString *publicURL;
@property(retain, nonatomic) NSString *cloudOwnerEmail;
@property(retain, nonatomic) NSString *cloudOwnerLastName;
@property(retain, nonatomic) NSString *cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary *cloudMetadata;
@property(retain, nonatomic) NSString *cloudGUID;
- (void)userDeleteSubscriberRecord:(id)arg1;
- (void)getUnseenStartMarkerIndex:(unsigned int *)arg1 count:(unsigned int *)arg2 showsProgress:(char *)arg3;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
@end

