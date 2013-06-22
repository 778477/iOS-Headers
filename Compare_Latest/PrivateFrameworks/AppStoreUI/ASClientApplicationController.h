/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUClientApplicationController.h"

#import "SSDownloadManagerObserver-Protocol.h"

@class ISOperation, NSObject<OS_dispatch_source>, SSDownloadManager;

@interface ASClientApplicationController : SUClientApplicationController <SSDownloadManagerObserver>
{
    SSDownloadManager *_downloadManager;
    ISOperation *_geniusStatisticsOperation;
    int _libraryURLType;
    NSObject<OS_dispatch_source> *_reloadFromServerTimer;
    BOOL _usingNetwork;
}

- (void)_stopDownloadManager;
- (id)_startDownloadManager;
- (void)_showAccessoryLookupForURL:(id)arg1;
- (void)_setUsingNetwork:(BOOL)arg1;
- (void)_reloadDownloadManagerFromServer;
- (void)_cancelReloadFromServerTimer;
- (void)_cancelGeniusStatisticsOperation;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithDisplayID:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithPurchase:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithDownload:(id)arg1;
- (id)tabBarController:(id)arg1 viewControllerForContext:(id)arg2;
- (id)tabBarController:(id)arg1 rootViewControllerForSection:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (BOOL)wasLaunchedFromLibrary;
- (void)returnToLibrary;
- (void)resignActive;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (BOOL)displayClientURL:(id)arg1;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)becomeActive;
- (void)dealloc;
- (id)initWithClientInterface:(id)arg1;
- (id)initWithClientIdentifier:(id)arg1;
- (id)init;

@end

