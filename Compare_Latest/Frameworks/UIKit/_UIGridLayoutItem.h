/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class _UIGridLayoutRow, _UIGridLayoutSection;

@interface _UIGridLayoutItem : NSObject
{
    _UIGridLayoutSection *_section;
    _UIGridLayoutRow *_rowObject;
    struct CGRect _itemFrame;
}

@property(nonatomic) struct CGRect itemFrame; // @synthesize itemFrame=_itemFrame;
@property(nonatomic) _UIGridLayoutRow *rowObject; // @synthesize rowObject=_rowObject;
@property(nonatomic) _UIGridLayoutSection *section; // @synthesize section=_section;
- (id)copy;

@end

