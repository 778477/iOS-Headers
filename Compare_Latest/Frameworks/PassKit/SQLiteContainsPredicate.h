/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SQLitePropertyPredicate.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SQLiteQuery;

@interface SQLiteContainsPredicate : SQLitePropertyPredicate <NSCopying>
{
    BOOL _negative;
    SQLiteQuery *_query;
    NSString *_queryProperty;
    id _values;
}

+ (id)doesNotContainPredicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)containsPredicateWithProperty:(id)arg1 query:(id)arg2 queryProperty:(id)arg3;
+ (id)containsPredicateWithProperty:(id)arg1 values:(id)arg2;
@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSString *queryProperty; // @synthesize queryProperty=_queryProperty;
@property(readonly, nonatomic) SQLiteQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic, getter=isNegative) BOOL negative; // @synthesize negative=_negative;
- (id)SQLForEntityClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

