/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject
{
    NSArray *facesInfo;
    NSURL *originalAssetURL;
    BOOL isVideo;
    NSString *uuid;
    NSDate *creationDate;
    NSDate *modificationDate;
    NSSet *albumURIs;
    CLLocation *location;
    NSNumber *sortToken;
    BOOL isSyncComplete;
}

@property(nonatomic) BOOL isSyncComplete; // @synthesize isSyncComplete;
@property(retain, nonatomic) NSNumber *sortToken; // @synthesize sortToken;
@property(copy, nonatomic) CLLocation *location; // @synthesize location;
@property(copy, nonatomic) NSSet *albumURIs; // @synthesize albumURIs;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid;
@property(nonatomic) BOOL isVideo; // @synthesize isVideo;
@property(retain, nonatomic) NSURL *originalAssetURL; // @synthesize originalAssetURL;
@property(retain, nonatomic) NSArray *facesInfo; // @synthesize facesInfo;
- (id)description;
- (void)processFacesWithBlock:(id)arg1;
- (id)serializedData;
- (id)initFromSerializedData:(id)arg1;
- (void)dealloc;

@end

