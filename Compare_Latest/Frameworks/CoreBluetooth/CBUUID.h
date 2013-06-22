/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSData;

@interface CBUUID : NSObject <NSCopying>
{
    NSData *_data;
    struct _NSRange _range;
}

+ (id)UUIDWithCFUUID:(struct __CFUUID *)arg1;
+ (id)UUIDWithData:(id)arg1;
+ (id)UUIDWithString:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSData *data; // @dynamic data;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCFUUID:(struct __CFUUID *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithString:(id)arg1;

@end

