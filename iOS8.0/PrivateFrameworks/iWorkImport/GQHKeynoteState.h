//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/GQHState.h>

__attribute__((visibility("hidden")))
@interface GQHKeynoteState : GQHState
{
    int mCurrentSlide;
    struct CGSize mSlideSize;
    int mProgressiveIndex;
}

- (id).cxx_construct;
- (BOOL)shouldStreamContent;
- (void)setProgressiveIndex:(int)arg1;
- (int)progressiveIndex;
- (BOOL)shouldMapLinkWithUrl:(struct __CFString *)arg1;
- (void)setSlideSize:(struct CGSize)arg1;
- (struct CGSize)slideSize;
- (int)currentSlide;
- (void)incrementCurrentSlide;

@end

