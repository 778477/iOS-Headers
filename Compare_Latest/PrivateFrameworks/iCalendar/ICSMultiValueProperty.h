/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
{
}

- (void)setValues:(id)arg1 valueType:(int)arg2;
- (id)values;
- (void)setValue:(id)arg1 type:(int)arg2;
- (id)value;
- (BOOL)isMultiValued;
- (id)initWithValue:(id)arg1 type:(unsigned int)arg2;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (void)_setParsedValues:(id)arg1 type:(unsigned int)arg2;

@end

