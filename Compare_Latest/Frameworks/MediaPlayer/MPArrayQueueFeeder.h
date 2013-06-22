/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPQueueFeeder.h>

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder
{
    NSArray *_queueItems;
}

@property(readonly, nonatomic) NSArray *items;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (id)pathAtIndex:(unsigned int)arg1;
- (unsigned int)itemCount;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithItems:(id)arg1;

@end

