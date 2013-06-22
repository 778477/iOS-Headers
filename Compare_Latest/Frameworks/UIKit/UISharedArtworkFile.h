/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UISharedArtworkFile : NSObject
{
    int _scale;
    int _device;
    struct UISharedArtworkFileHeader *_data;
    unsigned long _length;
}

@property(readonly, nonatomic) int device; // @synthesize device=_device;
@property(readonly, nonatomic) int scale; // @synthesize scale=_scale;
- (id)nameAtIndex:(unsigned int)arg1;
- (id)imageAtIndex:(unsigned int)arg1;
- (unsigned int)indexForImageNamed:(id)arg1;
- (void)enumerateImageInfoWithBlock:(id)arg1;
- (BOOL)hasImagesForScale:(int)arg1 device:(int)arg2;
- (unsigned int)count;
- (void)dealloc;
- (id)initWithBasePath:(id)arg1 info:(const CDStruct_04eade4e *)arg2;

@end

