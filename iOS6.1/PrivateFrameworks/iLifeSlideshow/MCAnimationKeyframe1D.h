/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe1D : MCAnimationKeyframe
{
    float mValue;
}

+ (id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3;
+ (id)keyframeWithScalar:(float)arg1 atTime:(double)arg2;
@property(nonatomic) float value; // @synthesize value=mValue;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)description;
- (id)imprint;
- (id)initWithImprint:(id)arg1;

@end

