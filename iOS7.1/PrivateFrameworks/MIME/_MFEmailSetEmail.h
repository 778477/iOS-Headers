//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _MFEmailSetEmail : NSObject
{
    unsigned long _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}

@property(readonly, nonatomic) NSString *commentedAddress;
@property(retain, nonatomic) NSString *address;
- (BOOL)isEqualToEmail:(id)arg1;
@property(readonly, nonatomic) unsigned long hash;
- (id)description;
- (void)dealloc;
- (id)initWithAddress:(id)arg1;

@end
