/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSString;

@interface NSFileAccessNode : NSObject
{
    NSFileAccessNode *_parent;
    NSString *_name;
    NSString *_normalizedName;
    NSFileAccessNode *_symbolicLinkDestination;
    unsigned int _symbolicLinkReferenceCount;
    NSMapTable *_childrenByNormalizedName;
    id _presenterOrPresenters;
    id _provider;
    id _accessClaimOrClaims;
    BOOL _isArbitrationBoundary;
    BOOL _isFilePackageIsFigured;
    BOOL _isFilePackage;
    NSString *_lastRequestedChildName;
    NSFileAccessNode *_lastRequestedChild;
    id _progressPublisherOrPublishers;
    id _progressSubscriberOrSubscribers;
}

- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (void)assertDescendantsLive;
- (void)assertLive;
- (void)assertDead;
- (id)parent;
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(id)arg1;
- (void)forEachProgressSubscriberOfItemPerformProcedure:(id)arg1;
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachProgressPublisherOfItemPerformProcedure:(id)arg1;
- (void)removeProgressSubscriber:(id)arg1;
- (void)addProgressSubscriber:(id)arg1;
- (void)removeProgressPublisher:(id)arg1;
- (void)addProgressPublisher:(id)arg1;
- (id)standardizedURL;
- (id)pathExceptPrivate;
- (id)url;
- (void)removeAccessClaim:(id)arg1;
- (void)addAccessClaim:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)removePresenter:(id)arg1;
- (void)addPresenter:(id)arg1;
- (BOOL)itemIsInItemAtLocation:(id)arg1;
- (BOOL)itemIsItemAtLocation:(id)arg1;
- (BOOL)itemIsSubarbitrable;
- (void)setArbitrationBoundary;
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainingItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainedItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfItemPerformProcedure:(id)arg1;
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)arg1;
- (id)itemProvider;
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(id)arg1;
- (void)forEachRelevantAccessClaimPerformProcedure:(id)arg1;
- (void)forEachAccessClaimOnItemPerformProcedure:(id)arg1;
- (void)forEachDescendantPerformProcedure:(id)arg1;
- (id)biggestFilePackageLocation;
- (BOOL)isFilePackage;
- (void)setParent:(id)arg1 name:(id)arg2;
- (id)pathFromAncestor:(id)arg1;
- (id)descendantForFileURL:(id)arg1;
- (id)childForRange:(struct _NSRange)arg1 ofPath:(id)arg2;
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 create:(BOOL)arg3;
- (void)removeSelfIfUseless;
- (void)removeChildForNormalizedName:(id)arg1;
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange *)arg2;
- (void)dealloc;
- (void)setSymbolicLinkDestination:(id)arg1;
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;

@end

