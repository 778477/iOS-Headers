/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface MPMediaPickerControllerInternal : NSObject
{
    id <MPMediaPickerControllerDelegate> _delegate;
    int _mediaTypes;
    id _modalContext;
    NSString *_prompt;
    int _prevStatusBarStyle;
    unsigned int _allowsPickingMultipleItems:1;
    unsigned int _showsCloudItems:1;
}

@end

