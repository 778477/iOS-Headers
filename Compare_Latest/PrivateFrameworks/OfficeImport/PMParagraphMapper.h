/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMMapper.h>

@class OADParagraph;

@interface PMParagraphMapper : CMMapper
{
    OADParagraph *mParagraph;
}

- (void)mapAt:(id)arg1 withState:(id)arg2 isFirstParagraph:(BOOL)arg3;
- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;
- (void)addEndCharacterStyleToStyle:(id)arg1;
- (id)fontScheme;
- (id)copyParagraphStyleWithState:(id)arg1 isFirstParagraph:(BOOL)arg2;
- (int)firstTextRunFontSize;

@end

