/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface _PFRoutines : NSObject
{
}

+ (BOOL)isUbiquitousURLDownloaded:(id)arg1 error:(id *)arg2;
+ (BOOL)isUbiquitousURLUploaded:(id)arg1 error:(id *)arg2;
+ (id)_replaceBaseline:(id)arg1 inOrderedSet:(id)arg2 withOrderedSet:(id)arg3;
+ (id)newMutableOrderedSetFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)newMutableArrayFromCollection:(id)arg1 forParentContext:(id)arg2;
+ (id)_newCollectionFromCollection:(id)arg1 forParentContext:(id)arg2 andClass:(Class)arg3;
+ (id)newMutableArrayFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newMutableSetFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newOrderedSetFromCollection:(id)arg1 byRemovingItems:(id)arg2;
+ (id)newOrderedSetFromCollection:(id)arg1 byAddingItems:(id)arg2;
+ (id)newOrderedSetFromCollection:(id)arg1 byInsertingItems:(id)arg2 atIndex:(unsigned int)arg3;
+ (BOOL)_objectsInOrderedCollection:(id)arg1 formSubstringInOrderedCollection:(id)arg2;
+ (id)newOrderedSetOfObjectIDsFromCollection:(id)arg1;
+ (id)newSetOfObjectIDsFromCollection:(id)arg1;
+ (id)newArrayOfObjectIDsFromCollection:(id)arg1;
+ (id)newOrderedSetFromCollection:(id)arg1;
+ (id)newMutableOrderedSetFromCollection:(id)arg1;
+ (void)getIndexes:(unsigned int *)arg1 fromCollection:(id)arg2 forObjectsInCollection:(id)arg3;
+ (id)encodeObjectValue:(id)arg1 forTransformableAttribute:(id)arg2;
+ (id)decodeValue:(id)arg1 forTransformableAttribute:(id)arg2;
+ (id)_createNicksBase64EncodedStringFromData:(id)arg1;
+ (void)attemptToUpdatePermissionsForFileAtPath:(const char *)arg1 toLevel:(int)arg2;
+ (void)cleanupExternalReferenceLink:(const char *)arg1;
+ (BOOL)createExternalReferenceLinkFromPath:(const char *)arg1 toPath:(const char *)arg2 protectionLevel:(int)arg3;
+ (void)deleteFileForPFExternalReferenceData:(id)arg1;
+ (long long)lengthOfFileAtExternalReferenceLocation:(const char *)arg1;
+ (id)newMappedDataForExternalReference:(id)arg1;
+ (void)readBytesForExternalReferenceData:(id)arg1 intoBuffer:(void *)arg2 range:(struct _NSRange)arg3;
+ (void *)readExternalReferenceDataFromFile:(id)arg1;
+ (BOOL)moveInterimFileToPermanentLocation:(id)arg1;
+ (id)writePFExternalReferenceDataToInterimFile:(id)arg1;
+ (id)valueForProcessArgument:(id)arg1;
+ (BOOL)convertCString:(const char *)arg1 toUnsignedInt64:(unsigned long long *)arg2 withBase:(int)arg3;
+ (BOOL)_doNameAndTypeCheck:(id)arg1;
+ (id)_getUUID;
+ (unsigned int)_generateHashForString:(id)arg1;
+ (id)_groupObjectsByRootEntity:(id)arg1;
+ (id)_getPFBundleVersionNumber;
+ (id)_newObjectIDsArrayWithMapping:(id)arg1 andEntries:(id)arg2 andCoordinator:(id)arg3;
+ (BOOL)_generateObjectIDMaptableForArray:(id)arg1 withMapping:(id *)arg2 andEntries:(id *)arg3;
+ (void)initialize;

@end

