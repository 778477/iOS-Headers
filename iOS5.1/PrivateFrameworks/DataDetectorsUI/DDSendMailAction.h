/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DataDetectorsUI/DDAction.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>
{
}

- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)viewController;
- (void)perform;
- (int)interactionType;
- (id)localizedName;
- (id)initWithURL:(id)arg1 result:(struct __DDResult *)arg2 context:(id)arg3;

@end
