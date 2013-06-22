/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKScore, NSArray, NSObject<GKLeaderboardDelegate>, NSString;

@interface GKLeaderboard : NSObject
{
    int _timeScope;
    int _playerScope;
    struct _NSRange _range;
    NSString *_category;
    NSString *_title;
    NSArray *_scores;
    NSArray *_playerIDs;
    unsigned int _maxRange;
    GKScore *_localPlayerScore;
    int _loadingCount;
    NSObject<GKLeaderboardDelegate> *_weakDelegate;
    NSString *_groupIdentifier;
}

+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadCategoriesForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadCategoryWithID:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadCategoriesForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadLeaderboardsWithCompletionHandler:(id)arg1;
+ (void)loadCategoriesWithCompletionHandler:(id)arg1;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(nonatomic) int loadingCount; // @synthesize loadingCount=_loadingCount;
@property(retain, nonatomic) GKScore *localPlayerScore; // @synthesize localPlayerScore=_localPlayerScore;
@property(nonatomic) unsigned int maxRange; // @synthesize maxRange=_maxRange;
@property(retain, nonatomic) NSArray *playerIDs; // @synthesize playerIDs=_playerIDs;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) int playerScope; // @synthesize playerScope=_playerScope;
@property(nonatomic) int timeScope; // @synthesize timeScope=_timeScope;
- (void)decrementLoadingCountAtomically;
- (void)incrementLoadingCountAtomically;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadScoresWithCompletionHandler:(id)arg1;
@property(readonly, getter=isLoading) BOOL loading;
@property(nonatomic) NSObject<GKLeaderboardDelegate> *delegate; // @synthesize delegate=_weakDelegate;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerIDs:(id)arg1;
- (id)init;

@end

