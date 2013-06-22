/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKFriendPickerViewController.h>

@class GKChallenge, NSString;

@interface GKChallengeFriendPickerViewController : GKFriendPickerViewController
{
    id _handler;
    GKChallenge *_challenge;
    NSString *_goalText;
}

@property(retain, nonatomic) NSString *goalText; // @synthesize goalText=_goalText;
@property(retain, nonatomic) GKChallenge *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) id handler; // @synthesize handler=_handler;
- (void)dismissPicker;
- (void)loadView;
- (void)dealloc;
- (void)showMessageViewController;
- (id)initWithTheme:(id)arg1 forChallenge:(id)arg2 challengeText:(id)arg3;
- (void)setPlayerRangeText;
- (id)initWithTheme:(id)arg1;

@end

