/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSUFlushingManager;

@interface TSUMemoryWatcher : NSObject
{
    TSUFlushingManager *_flushingManager;
    BOOL _going;
    BOOL _stop;
    int _warningRsizeMb;
    int _urgentRsizeMb;
}

- (void)_simulateMemoryWarning:(id)arg1;
- (void)_periodicallySimulateMemoryWarning:(id)arg1;
- (void)stopObserving;
- (void)beginObserving;
- (void)dealloc;
- (id)initWithFlushingManager:(id)arg1;

@end

