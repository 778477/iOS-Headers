/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding-Protocol.h"

@class NSArray, SSAuthenticationContext;

@interface SSRedeemCodesRequest : SSRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;
    NSArray *_redeemCodes;
}

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithRedeemResponseBlock:(id)arg1;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSArray *redeemCodes;
- (void)dealloc;
- (id)initWithRedeemCodes:(id)arg1;

@end

