/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURL;

@interface TIPersistentQueue : NSObject
{
    NSURL *_presentedItemURL;
}

- (void)dequeueObjects:(id)arg1;
- (void)enqueueObjects:(id)arg1;
- (void)readObjects:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end
