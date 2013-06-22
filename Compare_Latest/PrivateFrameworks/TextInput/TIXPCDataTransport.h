/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableDictionary, NSXPCListener;

@interface TIXPCDataTransport : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_server;
    NSMutableDictionary *_dataSources;
    NSMutableDictionary *_readyDescriptors;
    id <TIUserDictionaryServer> _userDictionaryServer;
}

+ (id)_cachePath;
+ (id)transportInterface;
+ (id)sharedInstance;
@property(retain, nonatomic) id <TIUserDictionaryServer> userDictionaryServer; // @synthesize userDictionaryServer=_userDictionaryServer;
- (oneway void)_userDictionarySaveChanges;
- (oneway void)_userDictionaryLoad;
- (id)fileHandleWithData:(id)arg1;
- (oneway void)_handleForPurpose:(id)arg1 withReplyBlock:(id)arg2;
- (void)_createCachePathIfNeeded;
- (id)connectToServer;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setupListener;
- (void)dealloc;
- (id)init;
- (void)setCachedData:(id)arg1 forPurpose:(id)arg2;
- (id)cachedDataForPurpose:(id)arg1;
- (void)setDataSource:(id)arg1 forPurpose:(id)arg2;
- (id)dataSourceForPurpose:(id)arg1;

@end

