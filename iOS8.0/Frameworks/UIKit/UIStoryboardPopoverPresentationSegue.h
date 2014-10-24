//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIStoryboardSegue.h>

#import "UIPopoverPresentationControllerDelegate.h"

@class NSArray, NSString, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIStoryboardPopoverPresentationSegue : UIStoryboardSegue <UIPopoverPresentationControllerDelegate>
{
    NSArray *_passthroughViews;
    unsigned int _permittedArrowDirections;
    UIBarButtonItem *_anchorBarButtonItem;
    UIView *_anchorView;
    struct CGRect _anchorRect;
}

@property(nonatomic) struct CGRect anchorRect; // @synthesize anchorRect=_anchorRect;
@property(retain, nonatomic) UIView *anchorView; // @synthesize anchorView=_anchorView;
@property(retain, nonatomic) UIBarButtonItem *anchorBarButtonItem; // @synthesize anchorBarButtonItem=_anchorBarButtonItem;
@property(nonatomic) unsigned int permittedArrowDirections; // @synthesize permittedArrowDirections=_permittedArrowDirections;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
- (void)perform;
- (void)_prepare;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
