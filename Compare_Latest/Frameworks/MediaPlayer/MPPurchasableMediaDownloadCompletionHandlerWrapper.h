/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPPurchasableMediaDownloadObserver-Protocol.h"

@class MPPurchasableMediaDownload;

@interface MPPurchasableMediaDownloadCompletionHandlerWrapper : NSObject <MPPurchasableMediaDownloadObserver>
{
    BOOL _hasCalledPurchaseHandler;
    BOOL _hasCalledCompletionHandlerAndCleanedUp;
    id _completionHandler;
    id _purchaseHandler;
    MPPurchasableMediaDownload *_purchasableMediaDownload;
}

@property(readonly, nonatomic) MPPurchasableMediaDownload *purchasableMediaDownload; // @synthesize purchasableMediaDownload=_purchasableMediaDownload;
@property(copy, nonatomic) id purchaseHandler; // @synthesize purchaseHandler=_purchaseHandler;
@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)purchasableMediaDownload:(id)arg1 didPurchase:(id)arg2;
- (void)purchasableMediaDownload:(id)arg1 didFinishWithError:(id)arg2;
- (void)purchasableMediaDownloadDidCancel:(id)arg1;
- (void)dealloc;
- (id)initWithPurchasableMediaDownload:(id)arg1 purchaseHandler:(id)arg2 completionHandler:(void)arg3;

@end

