/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ALAssetsLibraryPrivate;

@interface ALAssetsLibrary : NSObject
{
    id _internal;
}

+ (void)disableSharedPhotoStreamsSupport;
+ (int)authorizationStatus;
+ (id)_library;
@property(retain, nonatomic) ALAssetsLibraryPrivate *internal; // @synthesize internal=_internal;
- (void)addAssetsGroupAlbumWithName:(id)arg1 resultBlock:(id)arg2 failureBlock:(void)arg3;
- (void)groupForURL:(id)arg1 resultBlock:(id)arg2 failureBlock:(void)arg3;
- (id)_copyGroupForURL:(id)arg1;
- (void)assetForURL:(id)arg1 resultBlock:(id)arg2 failureBlock:(void)arg3;
- (BOOL)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg1;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg1 internalProperties:(id)arg2 completionBlock:(id)arg3;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 metadata:(id)arg2 completionBlock:(id)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 orientation:(int)arg2 completionBlock:(id)arg3;
- (void)_writeImageToSavedPhotosAlbum:(struct CGImage *)arg1 orientation:(int)arg2 imageData:(id)arg3 metadata:(id)arg4 internalProperties:(id)arg5 completionBlock:(id)arg6;
- (void)enumerateGroupsWithTypes:(unsigned int)arg1 usingBlock:(id)arg2 failureBlock:(void)arg3;
- (void)_addGroupForAlbum:(struct NSObject *)arg1 ofType:(unsigned int)arg2 toArray:(id)arg3;
- (id)publicErrorForPrivateDomain:(id)arg1 withPrivateCode:(int)arg2;
- (id)publicErrorFromPrivateError:(id)arg1;
- (BOOL)_libraryIsAvailable;
- (void)_performBlockAndWait:(id)arg1;
- (void)registerAlbum:(struct NSObject *)arg1 assetGroupPrivate:(id)arg2;
- (BOOL)isValid;
- (void)dealloc;
- (id)init;

@end

