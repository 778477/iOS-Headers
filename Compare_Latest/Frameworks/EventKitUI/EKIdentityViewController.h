/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ABPersonViewController.h"

#import "ABPersonViewControllerDelegate-Protocol.h"
#import "EKEditItemViewControllerProtocol-Protocol.h"

@interface EKIdentityViewController : ABPersonViewController <ABPersonViewControllerDelegate, EKEditItemViewControllerProtocol>
{
    id <EKIdentityProtocol> _identity;
}

- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setIdentity:(id)arg1;
- (void)dealloc;
- (id)initWithIdentity:(id)arg1;

// Remaining properties
@property(nonatomic) id <EKEditItemViewControllerDelegate> editDelegate;

@end

