/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBarsSwipeTransition : CIFilter
{
    CIImage *inputImage;
    CIImage *inputTargetImage;
    NSNumber *inputAngle;
    NSNumber *inputWidth;
    NSNumber *inputBarOffset;
    NSNumber *inputTime;
}

+ (id)customAttributes;
@property(retain) NSNumber *inputTime; // @synthesize inputTime;
@property(retain) NSNumber *inputBarOffset; // @synthesize inputBarOffset;
@property(retain) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (void)setDefaults;

@end

