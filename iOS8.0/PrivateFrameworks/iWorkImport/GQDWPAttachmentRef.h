//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/GQDWPAttachment.h>

@class GQDRoot;

__attribute__((visibility("hidden")))
@interface GQDWPAttachmentRef : GQDWPAttachment
{
    GQDRoot *mRoot;
    char *mUID;
}

- (id)drawable;
- (void)dealloc;
- (id)initWithUID:(char *)arg1 root:(id)arg2;

@end
