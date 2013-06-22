/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "UIAlertViewDelegate-Protocol.h"

@interface GKUIAlertView : UIAlertView <UIAlertViewDelegate>
{
    id _dismissHandler;
}

+ (id)_gkAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4 dismissHandler:(id)arg5;
@property(copy, nonatomic) id dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (void)show;

@end

