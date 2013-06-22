/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKResponse.h>

@class GKMatchRequestInternal, NSArray, NSData, NSDictionary, NSObject<OS_dispatch_group>, NSString;

@interface GKMatchResponse : GKResponse
{
    NSObject<OS_dispatch_group> *_matchingGroup;
    NSString *_rid;
    NSData *_cdxTicket;
    NSArray *_relayPushes;
    NSArray *_matches;
    NSData *_sessionToken;
    int _sequence;
    int _state;
    GKMatchRequestInternal *_matchRequest;
    NSDictionary *_serverRequest;
}

+ (id)codedPropertyKeys;
@property(retain) NSDictionary *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(retain) GKMatchRequestInternal *matchRequest; // @synthesize matchRequest=_matchRequest;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly) int sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) NSData *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSArray *matches; // @synthesize matches=_matches;
@property(retain, nonatomic) NSArray *relayPushes; // @synthesize relayPushes=_relayPushes;
@property(retain, nonatomic) NSData *cdxTicket; // @synthesize cdxTicket=_cdxTicket;
@property(retain, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property NSObject<OS_dispatch_group> *matchingGroup; // @synthesize matchingGroup=_matchingGroup;
- (BOOL)transitionToState:(int)arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (int)_incrementSequence;
- (void)dealloc;

@end

