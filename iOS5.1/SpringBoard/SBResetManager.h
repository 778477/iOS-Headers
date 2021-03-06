/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock;

@interface SBResetManager : NSObject
{
    BOOL _threadRunning;
    NSLock *_lock;
    int _mode;
    NSLock *_progressLock;
    float _progress;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (void)setMode:(int)arg1;
- (void)setProgress:(float)arg1;
- (float)progress;
- (void)beginReset;
- (void)_beginReset:(id)arg1;
- (void)_resetThread;
- (void)_postResetEnded;
- (void)_resetFinished;

@end

