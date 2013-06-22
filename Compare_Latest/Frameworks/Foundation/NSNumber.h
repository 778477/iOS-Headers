/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSValue.h>

@interface NSNumber : NSValue
{
}

+ (BOOL)supportsSecureCoding;
+ (id)numberWithBool:(BOOL)arg1;
+ (id)numberWithDouble:(double)arg1;
+ (id)numberWithFloat:(float)arg1;
+ (id)numberWithUnsignedLongLong:(unsigned long long)arg1;
+ (id)numberWithLongLong:(long long)arg1;
+ (id)numberWithUnsignedLong:(unsigned long)arg1;
+ (id)numberWithLong:(long)arg1;
+ (id)numberWithUnsignedInteger:(unsigned int)arg1;
+ (id)numberWithInteger:(int)arg1;
+ (id)numberWithUnsignedInt:(unsigned int)arg1;
+ (id)numberWithInt:(int)arg1;
+ (id)numberWithUnsignedShort:(unsigned short)arg1;
+ (id)numberWithShort:(short)arg1;
+ (id)numberWithUnsignedChar:(unsigned char)arg1;
+ (id)numberWithChar:(BOOL)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (_Bool)_getCString:(char *)arg1 length:(int)arg2 multiplier:(double)arg3;
- (id)initWithBool:(BOOL)arg1;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat:(float)arg1;
- (id)initWithUnsignedLongLong:(unsigned long long)arg1;
- (id)initWithLongLong:(long long)arg1;
- (id)initWithUnsignedLong:(unsigned long)arg1;
- (id)initWithLong:(long)arg1;
- (id)initWithUnsignedInteger:(unsigned int)arg1;
- (id)initWithInteger:(int)arg1;
- (id)initWithUnsignedInt:(unsigned int)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithUnsignedShort:(unsigned short)arg1;
- (id)initWithShort:(short)arg1;
- (id)initWithUnsignedChar:(unsigned char)arg1;
- (id)initWithChar:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_allowsDirectEncoding;
- (Class)classForCoder;
- (id)stringValue;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNumber:(id)arg1;
- (int)compare:(id)arg1;
- (unsigned long long)unsignedLongLongValue;
- (long long)longLongValue;
- (float)floatValue;
- (double)doubleValue;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (unsigned int)unsignedIntValue;
- (int)intValue;
- (unsigned short)unsignedShortValue;
- (short)shortValue;
- (unsigned char)unsignedCharValue;
- (BOOL)charValue;
- (unsigned int)unsignedIntegerValue;
- (int)integerValue;
- (BOOL)boolValue;
- (int)_reverseCompare:(id)arg1;
- (unsigned char)_getValue:(void *)arg1 forType:(long)arg2;
- (long)_cfNumberType;
- (unsigned long)_cfTypeID;
- (BOOL)isNSNumber__;
- (CDStruct_5fe7aead)decimalValue;

@end

