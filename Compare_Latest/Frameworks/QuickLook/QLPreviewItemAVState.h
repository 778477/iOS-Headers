/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface QLPreviewItemAVState : NSObject
{
    double position;
    double duration;
    BOOL playing;
}

+ (id)avStateWithPosition:(double)arg1 duration:(double)arg2 playing:(BOOL)arg3;
@property(getter=isPlaying) BOOL playing; // @synthesize playing;
@property double duration; // @synthesize duration;
@property double position; // @synthesize position;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

