/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MSTimerGate : NSObject
{
    BOOL _enabled;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)enable;
- (void)disable;
- (id)init;

@end

