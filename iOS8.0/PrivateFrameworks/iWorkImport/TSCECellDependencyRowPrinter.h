//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TSCEEdgeListPrinter;

__attribute__((visibility("hidden")))
@interface TSCECellDependencyRowPrinter : NSObject
{
    NSString *_cellID;
    unsigned int _dirtyPrecedentCount;
    BOOL _isFormula;
    BOOL _isInCycle;
    TSCEEdgeListPrinter *_precedentsList;
    TSCEEdgeListPrinter *_dependentsList;
}

@property(nonatomic) BOOL isInCycle; // @synthesize isInCycle=_isInCycle;
@property(nonatomic) BOOL isFormula; // @synthesize isFormula=_isFormula;
@property(nonatomic) unsigned int dirtyPrecedentCount; // @synthesize dirtyPrecedentCount=_dirtyPrecedentCount;
@property(retain, nonatomic) NSString *cellID; // @synthesize cellID=_cellID;
- (id)stringForDependencyRow;
- (void)addDependentWithCellID:(id)arg1 forOwner:(id)arg2;
- (void)addPrecedentWithCellID:(id)arg1 forOwner:(id)arg2;
- (int)numericCompare:(id)arg1;
- (void)dealloc;
- (id)initWithCellID:(id)arg1 dirtyPrecedentCount:(unsigned int)arg2;

@end

