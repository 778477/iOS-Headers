/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSMutableArray;

@interface CKTranscriptBubbleData : NSObject
{
    NSMutableArray *_bubbleDataArray;
    float _balloonWidth;
    NSDate *_nextEligibleTimestamp;
}

@property(nonatomic) float balloonWidth; // @synthesize balloonWidth=_balloonWidth;
- (BOOL)_shouldShowTimestampForDate:(id)arg1;
- (void)_setupNextEligibleTimestamp:(id)arg1;
- (int)_appendEntityForMessageIfNeeded:(id)arg1;
- (int)appendTypingIndicatorForEntity:(id)arg1;
- (int)removeTypingIndicator;
- (BOOL)isShowingTypingIndicator;
- (int)typingIndicatorRow;
- (id)removeMessageStatus:(int)arg1 forMessage:(id)arg2 andThisStatusForEverythingElse:(int)arg3;
- (id)indexesToRemoveMessageStatusFlags:(int)arg1 forMessage:(id)arg2 removeFlagForEverythingElse:(int)arg3;
- (int)insertMessageStatus:(int)arg1 forMessage:(id)arg2 date:(id)arg3;
- (int)_appendService:(id)arg1;
- (int)_appendDate:(id)arg1;
- (int)_appendEntity:(id)arg1;
- (int)_appendMessageStatusForMessageIfNeeded:(id)arg1;
- (int)_appendServiceForMessageIfNeeded:(id)arg1;
- (int)_appendDateForMessageIfNeeded:(id)arg1;
- (void)_createBubbleInfoForTextMessage:(id)arg1 part:(id)arg2 subject:(id)arg3 appendedRows:(id)arg4;
- (struct CGSize)_balloonViewSizeAtIndex:(int)arg1;
- (int)_appendTextMessage:(id)arg1 part:(id)arg2 text:(id)arg3 subject:(id)arg4;
- (void)_createBubbleInfoForImage:(id)arg1 part:(id)arg2 subject:(id)arg3 appendedRows:(id)arg4;
- (int)_appendStandaloneSubject:(id)arg1 forMessage:(id)arg2;
- (unsigned int)_lastIndexExcludingTypingIndicator;
- (void)_createArrayIfNeeded;
- (id)updateRestoringAttachments;
- (void)clearBubbleData;
- (id)appendBubbleDataForMessage:(id)arg1;
- (void)_addRow:(unsigned int)arg1 toIndexes:(id)arg2;
- (id)deleteMessageAtIndex:(unsigned int)arg1;
- (id)indexesToDeleteMessage:(id)arg1;
- (id)_indexesToDeleteMessageAtIndex:(unsigned int)arg1 allParts:(BOOL)arg2;
- (void)removeDataAtIndexes:(id)arg1;
- (id)logSafeBubbleDataForIndex:(unsigned int)arg1;
- (id)logSafeDescription;
- (id)_data:(id)arg1 forIndex:(int)arg2;
- (id)bubbleDataForIndex:(int)arg1;
- (int)count;
- (void)dealloc;
- (id)previousMessage:(id)arg1;
- (id)lastMessageWithStatus:(int)arg1;
- (int)indexForMediaObjectWithTransferGUID:(id)arg1;
- (int)indexForMediaObject:(id)arg1;
- (int)indexForPart:(id)arg1;
- (int)indexForMessage:(id)arg1;
- (unsigned int)lastIndexForMessage:(id)arg1;
- (unsigned int)indexForMessageWithGUID:(id)arg1;
- (BOOL)isStandaloneSubjectAtIndex:(int)arg1;
- (void)reuseBalloonView:(id)arg1;
- (id)balloonViewForIndex:(int)arg1;
- (int)balloonOrientationAtIndex:(int)arg1;
- (struct CGSize)sizeAtIndex:(int)arg1;
- (int)heightAtIndex:(int)arg1;
- (id)subjectAtIndex:(int)arg1;
- (BOOL)restoringAttachmentAtIndex:(int)arg1;
- (BOOL)textContainsHyperlinkAtIndex:(int)arg1;
- (id)textAtIndex:(int)arg1;
- (id)partAtIndex:(int)arg1;
- (id)dateAtIndex:(int)arg1;
- (id)messageAtIndex:(int)arg1;
- (id)messageStatusTimestampAtIndex:(int)arg1;
- (id)messageStatusStringAtIndex:(int)arg1;
- (id)messageStatusMessageAtIndex:(int)arg1;
- (int)messageStatusAtIndex:(int)arg1;
- (id)serviceAtIndex:(int)arg1;
- (id)entityAtIndex:(int)arg1;
- (int)typeAtIndex:(int)arg1;

@end

