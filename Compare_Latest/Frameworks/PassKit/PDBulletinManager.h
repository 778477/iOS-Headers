/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface PDBulletinManager : NSObject
{
    NSMutableDictionary *_bulletinRecords;
}

- (void)_cullRecords;
- (void)_sendRemove:(id)arg1 recordID:(id)arg2;
- (void)_sendModify:(id)arg1 recordID:(id)arg2;
- (void)_sendAdd:(id)arg1 recordID:(id)arg2;
- (void)_sendInvalidate:(id)arg1;
- (void)_sendNotification:(id)arg1 forPassTypeIdentifier:(id)arg2 recordID:(id)arg3;
- (void)_persistBulletinRecords;
- (void)deleteBulletinRecordsForPassUniqueID:(id)arg1 notifyBulletinBoard:(BOOL)arg2;
- (void)deleteBulletinRecordsForPassTypeIdentifier:(id)arg1 beforeDate:(id)arg2 notifyBulletinBoard:(BOOL)arg3;
- (void)updateBulletinRecordsWithDiff:(id)arg1 passTypeIdentifier:(id)arg2;
- (id)bulletinRecordWithID:(id)arg1;
- (id)allBulletinRecords;
- (void)nukeBulletins;
- (void)dealloc;
- (id)init;

@end

