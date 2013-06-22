/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSMutableSet, NSSet, NSString, PKDiff;

@interface PDBulletinRecord : NSObject <NSSecureCoding>
{
    NSMutableSet *_diffs;
    PKDiff *_seedDiff;
    NSDate *_date;
    NSString *_recordID;
    NSString *_passTypeIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)recordWithDiff:(id)arg1 passTypeIdentifier:(id)arg2;
@property(readonly, nonatomic) NSSet *diffs; // @synthesize diffs=_diffs;
@property(readonly, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) PKDiff *seedDiff; // @synthesize seedDiff=_seedDiff;
- (void)_removeDiffs:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedBulletinSectionInfoWithSeedCard:(id)arg1;
- (id)localizedBulletinInfoWithSeedCard:(id)arg1;
- (id)description;
- (BOOL)hasDiffs;
- (BOOL)removeDiffsForCardUniqueID:(id)arg1;
- (BOOL)removeDiffsConflictingWithDiff:(id)arg1;
- (BOOL)addDiff:(id)arg1 forPassTypeIdentifier:(id)arg2;
- (void)dealloc;
- (id)init;

@end

