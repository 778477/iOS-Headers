/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIActivity.h>

@class SLComposeViewController;

@interface UISocialActivity : UIActivity
{
    SLComposeViewController *_socialComposeViewController;
}

@property(retain, nonatomic) SLComposeViewController *socialComposeViewController; // @synthesize socialComposeViewController=_socialComposeViewController;
- (void)_cleanup;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_serviceType;
- (int)_maxImageDataSize;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;

@end

