/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iAdCore/ADAlertView.h>

@class NSString;

@interface ADGeoAlertView : ADAlertView
{
    NSString *_guid;
    id _block;
}

@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(copy, nonatomic) id locationBlock; // @synthesize locationBlock=_block;
- (void)dealloc;

@end
