/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>
{
}

+ (id)codedPropertyKeys;
+ (id)internalRepresentation;
+ (BOOL)supportsSecureCoding;
- (id)serverRepresentation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

