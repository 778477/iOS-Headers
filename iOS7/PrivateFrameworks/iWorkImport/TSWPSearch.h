/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSKSearch.h>

@class NSString, TSWPFilteredString, TSWPStorage;

// Not exported
@interface TSWPSearch : TSKSearch
{
    NSString *_searchedString;
    TSWPFilteredString *_filteredString;
    TSWPStorage *_storage;
    struct _NSRange _range;
}

@property(readonly, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) TSWPFilteredString *filteredString; // @synthesize filteredString=_filteredString;
@property(readonly, nonatomic) NSString *searchedString; // @synthesize searchedString=_searchedString;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
- (id).cxx_construct;
- (void)foundHitWithRange:(struct _NSRange)arg1;
- (_Bool)isComplete;
- (void)dealloc;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(id)arg3 storage:(void)arg4 range:(id)arg5;

@end

