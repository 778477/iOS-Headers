/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WXSection : NSObject
{
}

+ (float)scaleFromPrinterSettings:(id)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (void)initialize;
+ (void)mapProperties:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapPrinterSettings:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapFooter:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapHeader:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;

@end

