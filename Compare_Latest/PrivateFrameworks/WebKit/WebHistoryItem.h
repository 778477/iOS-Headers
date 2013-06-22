/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying>
{
    WebHistoryItemPrivate *_private;
}

+ (void)initialize;
+ (void)initWindowWatcherIfNecessary;
+ (id)entryWithURL:(id)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (double)lastVisitedTimeInterval;
- (id)alternateTitle;
- (void)setAlternateTitle:(id)arg1;
- (id)title;
- (id)originalURLString;
- (id)URLString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithURLString:(id)arg1 title:(id)arg2 lastVisitedTimeInterval:(double)arg3;
- (id)init;
- (void)_recordInitialVisit;
- (void)_visitedWithTitle:(id)arg1 increaseVisitCount:(BOOL)arg2;
- (struct CGPoint)scrollPoint;
- (id)initFromDictionaryRepresentation:(id)arg1;
- (void)_mergeAutoCompleteHints:(id)arg1;
- (void)setViewState:(id)arg1;
- (void)setVisitCount:(int)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithWebCoreHistoryItem:(PassRefPtr_b1663a8c)arg1;
- (id)initWithURLString:(id)arg1 title:(id)arg2 displayTitle:(id)arg3 lastVisitedTimeInterval:(double)arg4;
- (id)initWithURL:(id)arg1 target:(id)arg2 parent:(id)arg3 title:(id)arg4;
- (void)_setScrollPoint:(struct CGPoint)arg1;
- (struct CGPoint)_scrollPoint;
- (void)_setViewportArguments:(id)arg1;
- (id)_viewportArguments;
- (BOOL)_scaleIsInitial;
- (float)_scale;
- (void)_setScale:(float)arg1 isInitial:(BOOL)arg2;
- (unsigned long)_getWeeklyVisitCounts:(const int **)arg1;
- (unsigned long)_getDailyVisitCounts:(const int **)arg1;
- (id)_redirectURLs;
- (BOOL)_lastVisitWasHTTPNonGet;
- (void)_setLastVisitWasFailure:(BOOL)arg1;
- (BOOL)lastVisitWasFailure;
- (void)_setTransientProperty:(id)arg1 forKey:(id)arg2;
- (id)_transientPropertyForKey:(id)arg1;
- (id)targetItem;
- (id)_lastVisitedDate;
- (void)_setLastVisitedTimeInterval:(double)arg1;
- (id)URL;
- (void)setAlwaysAttemptToUsePageCache:(BOOL)arg1;
- (id)children;
- (void)setRSSFeedReferrer:(id)arg1;
- (id)RSSFeedReferrer;
- (int)visitCount;
- (BOOL)isTargetItem;
- (id)target;
- (id)dictionaryRepresentationIncludingChildren:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)initWithURL:(id)arg1 title:(id)arg2;

@end

