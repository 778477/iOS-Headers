/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/GQDGraphic.h>

#import "GQDNameMappable-Protocol.h"

@class GQDSStyle, GQDTTableModel;

@interface GQDTTable : GQDGraphic <GQDNameMappable>
{
    GQDTTableModel *mModel;
    GQDSStyle *mStyle;
    BOOL mIsStreamed;
}

+ (const struct StateSpec *)stateForReading;
- (int)walkTableWithGenerator:(Class)arg1 state:(id)arg2;
- (id)defaultVectorStyleForVectorType:(int)arg1;
- (BOOL)isStreamed;
- (void)setTableStyle:(id)arg1;
- (id)tableStyle;
- (void)setModel:(id)arg1;
- (id)model;
- (void)dealloc;

@end

