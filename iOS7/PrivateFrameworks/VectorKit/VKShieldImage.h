/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKImage.h>

@interface VKShieldImage : VKImage
{
    struct CGPoint _center;
}

@property(readonly) struct CGPoint center; // @synthesize center=_center;
- (id).cxx_construct;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(float)arg2 usedAsTextureAndImage:(BOOL)arg3 centerPoint:(struct CGPoint)arg4;

@end
