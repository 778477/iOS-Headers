/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSLocale, NSString;

@interface AVMetadataItemInternal : NSObject
{
    struct OpaqueFigMetadataReader *reader;
    long itemIndex;
    NSString *keySpace;
    id key;
    NSString *commonKey;
    NSLocale *locale;
    id value;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    NSDictionary *extras;
}

@end

