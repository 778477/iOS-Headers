/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSNumber, NSString;

@interface SLFacebookRegistrationInfo : NSObject
{
    NSString *_lastName;
    NSString *_gender;
    NSString *_email;
    NSDate *_birthday;
    NSNumber *_phone;
    NSString *_firstName;
    NSString *_password;
}

@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSNumber *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)hasAllRequiredValues;

@end

