/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UILabel, UIProgressView;

@interface _UIDictionaryDownloadProgressView : UIView
{
    UIProgressView *_progressView;
    UILabel *_downloadProgressLabel;
    NSString *_downloadStatusText;
    float _downloadProgress;
}

- (void)layoutSubviews;
@property(copy, nonatomic) NSString *downloadStatusText; // @synthesize downloadStatusText=_downloadStatusText;
@property(nonatomic) float downloadProgress; // @synthesize downloadProgress=_downloadProgress;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

