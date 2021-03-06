//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSShare, NSArray, NSString;

@protocol MSSharingManager <NSObject>
@property(retain, nonatomic) NSArray *shares;
@property(readonly, nonatomic) NSString *personID;
@property(nonatomic) id <MSSharingManagerDelegate> delegate;
- (void)removeShare:(MSShare *)arg1;
- (void)modifyShare:(MSShare *)arg1;
- (void)refreshCurrentShareState;
- (void)respondToInvitation:(MSShare *)arg1 accept:(BOOL)arg2;
- (void)sendInvitationsForShares:(NSArray *)arg1;
@end

