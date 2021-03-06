/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKBackgroundView.h>

@class NSArray, UIImage;

@interface GKImageBackgroundView : GKBackgroundView
{
    NSArray *_backgroundTiles;
    UIImage *_backgroundImage;
}

@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSArray *backgroundTiles; // @synthesize backgroundTiles=_backgroundTiles;
- (void)layoutSubviews;
- (id)backgroundImageForCurrentWidth;
- (void)dealloc;

@end

