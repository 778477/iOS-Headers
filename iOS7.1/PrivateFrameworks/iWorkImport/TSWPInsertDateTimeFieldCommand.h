//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSWPTextCommand.h>

@class TSWPDateTimeSmartField;

__attribute__((visibility("hidden")))
@interface TSWPInsertDateTimeFieldCommand : TSWPTextCommand
{
    TSWPDateTimeSmartField *_dateTimeField;
}

- (int)persistenceKind;
- (void)doCommit;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 dateTimeField:(id)arg3;

@end

