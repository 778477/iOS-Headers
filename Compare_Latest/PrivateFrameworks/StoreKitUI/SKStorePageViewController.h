/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUStorePageViewController.h"

@class SKProductPageViewController, SUBarButtonItem;

@interface SKStorePageViewController : SUStorePageViewController
{
    SUBarButtonItem *_cancelButtonItem;
    SKProductPageViewController *_productPageViewController;
}

@property(nonatomic) __weak SKProductPageViewController *productPageViewController; // @synthesize productPageViewController=_productPageViewController;
- (void)_storeSheetCancelButtonAction:(id)arg1;
- (id)_cancelButtonItem;
- (void)viewWillAppear:(BOOL)arg1;
- (void)resetNavigationItem:(id)arg1;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (id)newPlaceholderViewController;
- (void)dealloc;

@end

