/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPObject.h>

@class NSMutableArray;

// Not exported
@interface TSAFunctionBrowserState : TSPObject
{
    NSMutableArray *mRecentFunctions;
    NSMutableArray *mBackFunctions;
    NSMutableArray *mForwardFunctions;
    int mCurrentFunction;
}

- (void)saveToArchiver:(id)arg1;
- (id)recentFunctions;
- (void)recordRecentFunction:(int)arg1;
- (void)recordNavigationTo:(int)arg1;
- (int)currentFunction;
- (id)allForwardFunctions;
- (id)allBackFunctions;
- (int)forwardByAmount:(unsigned long long)arg1;
- (int)backByAmount:(unsigned long long)arg1;
- (int)forward;
- (int)back;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_filterOutUnknownFunctions:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

