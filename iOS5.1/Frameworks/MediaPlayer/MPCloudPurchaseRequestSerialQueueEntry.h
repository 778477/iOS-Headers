/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MPCloudPurchaseRequestSerialQueueEntry : NSObject
{
    id item;
    id block;
    int identifier;
}

@property(nonatomic) int identifier; // @synthesize identifier;
@property(copy, nonatomic) id block; // @synthesize block;
@property(retain, nonatomic) id item; // @synthesize item;
- (void)dealloc;
@property(readonly, nonatomic) NSString *shortDescription;
- (id)description;
- (id)initWithItem:(id)arg1 block:(id)arg2;

@end

