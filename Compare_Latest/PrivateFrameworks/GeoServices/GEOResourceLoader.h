/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface GEOResourceLoader : NSObject
{
    unsigned int _tileGroupIdentifier;
    NSString *_uniqueTileGroupIdentifier;
    NSString *_directory;
    NSMutableArray *_resourcesToLoad;
    id _completionHandler;
    id _progressHandler;
    int _numberOfDownloadsInProgress;
    NSMutableArray *_loadedResources;
    BOOL _canceled;
    NSString *_baseURLString;
    unsigned int _maxConcurrentLoads;
    id <GEOResourceLoaderDelegate> _delegate;
}

@property(readonly, nonatomic) NSArray *loadedResources; // @synthesize loadedResources=_loadedResources;
@property(nonatomic) id <GEOResourceLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *uniqueTileGroupIdentifier; // @synthesize uniqueTileGroupIdentifier=_uniqueTileGroupIdentifier;
@property(readonly, nonatomic) unsigned int tileGroupIdentifier; // @synthesize tileGroupIdentifier=_tileGroupIdentifier;
- (void)cancel;
- (BOOL)_writeResourceToDisk:(id)arg1;
- (void)_loadNextResource;
- (void)startWithProgressHandler:(id)arg1 completionHandler:(void)arg2;
- (void)_addNecessaryResourcesForType:(int)arg1;
- (void)_cleanup;
- (void)dealloc;
- (id)initWithTileGroupIdentifier:(unsigned int)arg1 uniqueIdentifier:(id)arg2 targetDirectory:(id)arg3 baseURLString:(id)arg4 isFirstLoad:(BOOL)arg5;

@end

