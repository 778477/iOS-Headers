/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStore/ISOperation.h>

@class ISDataProvider, ISURLRequestPerformance, NSCountedSet, NSMutableData, NSURLConnection, NSURLRequest, NSURLResponse, SSAuthenticationContext, SSMutableURLRequestProperties, SSURLRequestProperties;

@interface ISURLOperation : ISOperation
{
    NSURLRequest *_activeURLRequest;
    SSAuthenticationContext *_authenticationContext;
    NSURLConnection *_connection;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    int _networkRetryCount;
    NSCountedSet *_redirectURLs;
    SSMutableURLRequestProperties *_requestProperties;
    NSURLResponse *_response;
    BOOL _shouldSetCookies;
    BOOL _usesPrivateCookieStore;
    ISURLRequestPerformance *_performanceMetrics;
}

+ (id)copyUserAgent;
@property(getter=_usesPrivateCookieStore, setter=_setUsesPrivateCookieStore:) BOOL _usesPrivateCookieStore; // @synthesize _usesPrivateCookieStore;
@property(getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies; // @synthesize _shouldSetCookies;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(retain) ISDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (BOOL)_validateContentLength:(long long)arg1 error:(id *)arg2;
- (void)_updateProgress;
- (void)_stopIfCancelled;
- (void)_stopConnection;
- (void)_setActiveURLRequest:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (BOOL)_runRequestWithURL:(id)arg1;
- (void)_run;
- (void)_retry;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (void)_logRequest:(id)arg1;
- (BOOL)_isTrustExtendedValidation:(struct __SecTrust *)arg1;
- (id)_errorWithDomain:(id)arg1 code:(int)arg2;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_copyConnectionProperties;
- (id)_copyAcceptLanguageString;
- (id)_activeURL;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (void)_handleReceivedResponse:(id)arg1;
- (void)_handleReceivedData:(id)arg1;
- (void)_handleFinishedLoading;
- (id)_sanitizedURLForURL:(id)arg1;
- (id)_sanitizedStringForString:(id)arg1;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_requestProperties;
- (id)_copyAuthenticationContext;
- (id)_accountIdentifier;
@property BOOL tracksPerformanceMetrics;
@property(readonly) ISURLRequestPerformance *performanceMetrics;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id *)arg2;
- (id)newRequestWithURL:(id)arg1;
- (void)handleResponse:(id)arg1;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id *)arg2;
- (void)run;
@property(copy) SSURLRequestProperties *requestProperties;
- (void)setRequest:(id)arg1;
- (id)request;
- (void)dealloc;
- (id)init;

// Remaining properties
@property id <ISURLOperationDelegate> delegate; // @dynamic delegate;

@end

