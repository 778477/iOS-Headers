/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKPlayerCellContentView.h>

@class GKTurnBasedMatch, GKTurnBasedParticipant, NSMutableDictionary;

@interface GKTurnBasedParticipantCellContents : GKPlayerCellContentView
{
    GKTurnBasedParticipant *_participant;
    GKTurnBasedMatch *_match;
    NSMutableDictionary *_players;
}

+ (id)turnBasedParticipantCellContentWithTheme:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *players; // @synthesize players=_players;
@property(retain, nonatomic) GKTurnBasedMatch *match; // @synthesize match=_match;
@property(retain, nonatomic) GKTurnBasedParticipant *participant; // @synthesize participant=_participant;
- (BOOL)shouldShowPhoto;
- (void)prepareForReuse;
- (void)updateLines;
- (void)dealloc;

@end

