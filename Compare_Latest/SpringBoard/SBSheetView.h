/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SBApplication, SBFakeStatusBarView, SBProxyRemoteView;

@interface SBSheetView : UIView
{
    SBProxyRemoteView *_remoteProxyView;
    SBApplication *_app;
    SBFakeStatusBarView *_fakeStatusBarView;
    BOOL _wasPresentedAnimated;
}

- (void)dealloc;
- (void)noteSheetDidEnd;
- (BOOL)wasPresentedAnimated;
- (id)fakeStatusBarView;
- (id)application;
- (id)remoteViewIdentifier;
- (id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 shouldFakeStatusBar:(BOOL)arg3 wasPresentedAnimated:(BOOL)arg4;

@end

