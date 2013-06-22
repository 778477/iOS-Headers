/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSNetServiceBrowser : NSObject
{
    id _netServiceBrowser;
    id _delegate;
    void *_reserved;
}

- (void)finalize;
- (void)dealloc;
- (void)_dispatchCallBack:(void *)arg1 flags:(unsigned long)arg2 error:(CDStruct_1ef3fb1f)arg3;
- (struct __CFNetServiceBrowser *)_internalNetServiceBrowser;
- (void)stop;
- (void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2;
- (void)searchForRegistrationDomains;
- (void)searchForBrowsableDomains;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)init;
- (void)searchForAllDomains;

@end

