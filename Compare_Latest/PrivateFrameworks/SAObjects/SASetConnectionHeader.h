/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASetConnectionHeader : SABaseClientBoundCommand
{
}

+ (id)setConnectionHeaderWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setConnectionHeader;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL reconnectNow;
@property(copy, nonatomic) NSString *aceHostHeader;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

