/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSString, PLPhotoLibrary;

@interface PLBulletinsTestDaemonJob : PLDaemonJob
{
    NSString *_albumUUID;
    NSArray *_addedAssetUUIDs;
    int _bulletinType;
    PLPhotoLibrary *_photoLibrary;
}

+ (void)notifyAssets:(id)arg1 wereAddedToAlbum:(id)arg2;
+ (void)notifyInvitationWasReceivedForAlbum:(id)arg1;
@property(retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property int bulletinType; // @synthesize bulletinType=_bulletinType;
@property(retain, nonatomic) NSArray *addedAssetUUIDs; // @synthesize addedAssetUUIDs=_addedAssetUUIDs;
@property(retain, nonatomic) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
- (void)runDaemonSide;
- (void)run;
- (int)daemonOperation;
- (id)initFromXPCObject:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (void)dealloc;

@end

