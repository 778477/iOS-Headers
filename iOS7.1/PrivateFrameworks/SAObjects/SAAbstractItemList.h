//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSNumber;

@interface SAAbstractItemList : SADomainObject
{
}

+ (id)abstractItemListWithDictionary:(id)arg1 context:(id)arg2;
+ (id)abstractItemList;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSNumber *selectedIndex;
@property(copy, nonatomic) NSArray *domainObjects;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

