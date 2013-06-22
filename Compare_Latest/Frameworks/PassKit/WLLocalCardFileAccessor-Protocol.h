/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WLLocalCardFileAccessor <NSObject>
- (id)localizedString:(id)arg1 forCardAtURL:(id)arg2;
- (id)displayProfileWithCardDictionary:(id)arg1 cardURL:(id)arg2;
- (id)serializedFileWrapperAtURL:(id)arg1;
- (id)manifestHashAtURL:(id)arg1;
- (BOOL)getCardAtURL:(id)arg1 resourceValue:(id *)arg2 forKey:(id)arg3 error:(id *)arg4;
- (BOOL)removeCardAtURL:(id)arg1 error:(id *)arg2;
- (BOOL)moveCardAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)copyCardAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)loadImageSet:(int)arg1 fromCardURL:(id)arg2 displayProfile:(id)arg3;
- (id)loadContentFromCardURL:(id)arg1;
- (id)loadDictionaryFromCardURL:(id)arg1;
- (id)validateCardURL:(id)arg1;
@end

