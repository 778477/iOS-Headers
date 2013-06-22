/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOTileKeyList, NSString, NSThread;

@interface GEOTileRequester : NSObject
{
    GEOTileKeyList *_keyList;
    id <GEOTileRequesterDelegate> _delegate;
    id _context;
    NSThread *_thread;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
}

+ (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (CDStruct_e4886f83 *)expiringTilesets;
+ (unsigned int)expiringTilesetsCount;
+ (unsigned char)tileProviderIdentifier;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) GEOTileKeyList *keyList; // @synthesize keyList=_keyList;
@property(retain, nonatomic) id <GEOTileRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)cancel;
- (void)start;
- (id)initWithKeyList:(id)arg1;

@end

