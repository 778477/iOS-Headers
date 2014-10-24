//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface CUIPSDGradientStop : NSObject <NSCoding, NSCopying>
{
    float location;
}

+ (void)initialize;
- (BOOL)isOpacityStop;
- (BOOL)isColorStop;
- (BOOL)isDoubleStop;
- (void)setLocation:(float)arg1;
- (float)location;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(float)arg1;

@end
