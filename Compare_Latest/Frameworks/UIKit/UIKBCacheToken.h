/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying>
{
    NSMutableArray *_components;
    NSString *_name;
    int _emptyFields;
}

+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize)arg4;
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize)arg3;
+ (id)tokenForKey:(id)arg1 style:(int)arg2 state:(int)arg3 clipCorners:(int)arg4;
+ (id)tokenForKey:(id)arg1 style:(int)arg2 state:(int)arg3;
+ (id)tokenForKeyplane:(id)arg1;
@property(nonatomic) int emptyFields; // @synthesize emptyFields=_emptyFields;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)stringForSplitState:(BOOL)arg1;
- (id)stringForState:(int)arg1;
- (id)stringForKey:(id)arg1 state:(int)arg2;
@property(readonly, nonatomic) BOOL hasKey;
@property(nonatomic) int displayHint;
@property(nonatomic) int rowHint;
@property(nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSString *string;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithComponents:(id)arg1 name:(id)arg2 emptyFields:(int)arg3;
- (id)initWithComponents:(id)arg1 name:(id)arg2;

@end

