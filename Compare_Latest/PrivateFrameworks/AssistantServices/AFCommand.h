/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSString;

@interface AFCommand : NSObject
{
    NSString *_name;
    NSDictionary *_commandInfo;
    id _context;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)context;
@property(readonly, nonatomic) BOOL needsReply;
- (id)aceDictionary;
- (id)commandValueForKey:(id)arg1;
@property(readonly, nonatomic) NSString *domain;
- (id)initWithMessage:(id)arg1;

@end

