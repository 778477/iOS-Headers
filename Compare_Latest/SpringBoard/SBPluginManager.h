/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface SBPluginManager : NSObject
{
    NSString *_pluginsDirectory;
    NSMutableDictionary *_plugins;
}

+ (id)sharedInstance;
- (Class)loadPluginBundle:(id)arg1;
- (Class)loadPluginNamed:(id)arg1;
- (void)loadAllLaunchPlugins;
- (id)springBoardPluginsDirectory;
- (void)dealloc;
- (id)init;

@end

