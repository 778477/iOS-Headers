/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MIME/MessageBody.h>

@class MimePart;

@interface MimeBody : MessageBody
{
    MimePart *_topLevelPart;
    unsigned int _preferredAlternative:16;
    unsigned int _numAlternatives:16;
}

+ (id)copyNewMimeBoundary;
+ (id)versionString;
- (id)textHtmlPart;
- (id)preferredBodyPart;
- (int)preferredAlternative;
- (void)setPreferredAlternative:(int)arg1;
- (int)numberOfAlternatives;
- (unsigned int)totalTextSize;
- (id)contentToOffset:(unsigned int)arg1 resultOffset:(unsigned int *)arg2 asHTML:(BOOL)arg3 isComplete:(char *)arg4;
- (BOOL)isRich;
- (BOOL)isHTML;
- (id)attachments;
- (unsigned int)numberOfAttachmentsSigned:(char *)arg1 encrypted:(char *)arg2;
- (id)firstPartPassingTest:(id)arg1;
- (id)partWithNumber:(id)arg1;
- (id)mimeSubtype;
- (id)mimeType;
- (void)setTopLevelPart:(id)arg1;
- (id)topLevelPart;
- (void)dealloc;
- (id)init;

@end

