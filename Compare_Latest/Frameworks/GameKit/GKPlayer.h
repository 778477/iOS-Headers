/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GKGame, GKPlayerInternal, NSArray, NSDate, NSString;

@interface GKPlayer : NSObject
{
    GKPlayerInternal *_internal;
    NSArray *_friends;
    GKGame *_lastPlayedGame;
}

+ (int)sizeForPhotoSize:(int)arg1;
+ (void)declineFriendRequestsFromPlayerIDs:(id)arg1 handler:(id)arg2;
+ (void)acceptFriendRequestsFromPlayerIDs:(id)arg1 withHandles:(id)arg2 handler:(id)arg3;
+ (void)loadPlayersForIdentifiers:(id)arg1 withPieces:(unsigned int)arg2 withCompletionHandler:(id)arg3;
+ (void)loadPlayersForIdentifiers:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)cacheKeyForPlayerID:(id)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)unknownPlayer;
+ (id)anonymousPlayer;
@property(retain, nonatomic) GKGame *lastPlayedGame; // @synthesize lastPlayedGame=_lastPlayedGame;
@property(retain, nonatomic) NSArray *friends; // @synthesize friends=_friends;
@property(retain) GKPlayerInternal *internal; // @synthesize internal=_internal;
- (id)identifiableNameIncludingSurname:(BOOL)arg1;
- (id)sortName;
@property(readonly, nonatomic) NSString *displayName;
- (id)displayNameWithIdentifiableName:(BOOL)arg1 quoteAlias:(BOOL)arg2;
- (id)attributedDisplayName;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1 withFont:(id)arg2;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1;
- (id)attributedIdentifiableName:(id)arg1 withFont:(id)arg2 foreColor:(id)arg3 shadowColor:(id)arg4;
- (id)quotedAlias:(id)arg1 withFont:(id)arg2 foreColor:(id)arg3 shadowColor:(id)arg4;
- (void)photoCountWithCompletionHandler:(id)arg1;
@property(readonly, nonatomic) BOOL hasPhoto;
- (id)photoURLForSize:(int)arg1;
- (void)loadProfilePieces:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(id)arg1;
- (void)loadGamesPlayedIncludingInstalledGames:(BOOL)arg1 completionHandler:(id)arg2;
- (void)loadGamesPlayed:(id)arg1;
- (void)loadRecentMatchesForGame:(id)arg1 block:(id)arg2;
- (void)loadCommonFriends:(BOOL)arg1 profilePieces:(unsigned int)arg2 asPlayersWithCompletionHandler:(id)arg3;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id)arg1;
- (void)loadFriendIDsWithCompletionHandler:(id)arg1;
- (void)declineFriendRequestWithCompletionHandler:(id)arg1;
- (void)acceptFriendRequestWithCompletionHandler:(id)arg1;
- (void)updateNamesFromAddressBook;
- (void)postChangeNotification;
- (void)_postChangeNotification;
- (BOOL)isUnknownPlayer;
- (BOOL)isAnonymousPlayer;
- (BOOL)isLocalPlayer;
- (void)loadPhotoForSize:(int)arg1 withCompletionHandler:(id)arg2;
- (id)imageURLForPhotoSizeList;
- (id)emails;
- (id)email;
@property(readonly, nonatomic) unsigned int detailPieces;
@property(readonly, nonatomic) NSString *cacheKey;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
@property(readonly, nonatomic) BOOL isFriend;
@property(readonly, nonatomic) CDStruct_4aceb884 stats;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *alias; // @dynamic alias;
@property(readonly, nonatomic) NSString *firstName; // @dynamic firstName;
@property(readonly, nonatomic) NSString *lastName; // @dynamic lastName;
@property(readonly, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(readonly, nonatomic) NSDate *lastSeenDate; // @dynamic lastSeenDate;
@property(nonatomic) unsigned int numberOfFriends; // @dynamic numberOfFriends;
@property(retain, nonatomic) NSString *playerID; // @dynamic playerID;
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(readonly, nonatomic) unsigned int validPieces; // @dynamic validPieces;

@end

