/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol IMServiceSessionProtocol

@optional
- (void)validateProfile;
- (void)refreshVettedAliases;
- (void)unvalidateAliases:(id)arg1;
- (void)validateAliases:(id)arg1;
- (void)removeAliases:(id)arg1;
- (void)addAliases:(id)arg1;
- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;
- (void)sendVCUpdate:(id)arg1 toPerson:(id)arg2 conference:(id)arg3;
- (void)sendCounterProposalToPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)sendCommand:(id)arg1 withProperties:(id)arg2 toPerson:(id)arg3;
- (void)sendData:(id)arg1 toPerson:(id)arg2;
- (void)sendFileTransfer:(id)arg1 toPerson:(id)arg2;
- (void)passwordUpdated;
- (void)setBlockIdleStatus:(BOOL)arg1;
- (void)setBlockList:(id)arg1;
- (void)setAllowList:(id)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setProperties:(id)arg1 ofParticipant:(id)arg2 inChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)noteMessagesMarkedAsReadForChatWithGUID:(id)arg1;
- (void)sendReadReceiptForMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)sendMessage:(id)arg1 toChatID:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4;
- (void)declineInvitationToChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)invitePersonInfo:(id)arg1 withMessage:(id)arg2 toChatID:(id)arg3 identifier:(id)arg4 style:(unsigned char)arg5;
- (void)leaveChatID:(id)arg1 identifier:(id)arg2 style:(unsigned char)arg3;
- (void)joinChatID:(id)arg1 handleInfo:(id)arg2 identifier:(id)arg3 style:(unsigned char)arg4 joinProperties:(id)arg5;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)setValue:(id)arg1 ofProperty:(id)arg2 ofPerson:(id)arg3;
- (void)requestProperty:(id)arg1 ofPerson:(id)arg2;
- (void)stopWatchingBuddy:(id)arg1;
- (void)startWatchingBuddy:(id)arg1;
- (void)requestSubscriptionTo:(id)arg1;
- (void)acceptSubscriptionRequest:(BOOL)arg1 from:(id)arg2;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)changeGroup:(id)arg1 changes:(id)arg2;
- (void)changeGroups:(id)arg1;
- (void)requestGroups;
- (void)unregisterAccount;
- (void)registerAccount;
- (void)authenticateAccount;
- (void)resumeBuddyUpdates;
- (void)holdBuddyUpdates;
- (void)logout;
- (void)login;
- (void)autoReconnect;
- (void)autoLogin;
@end

