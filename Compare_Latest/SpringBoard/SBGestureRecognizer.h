/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SBGestureRecognizer : NSObject
{
    unsigned int m_types;
    int m_state;
    id m_handler;
    unsigned int m_activeTouchesCount;
    CDStruct_5fc3239e m_activeTouches[30];
    unsigned int m_strikes;
    unsigned int m_templateMatches;
    NSMutableArray *m_touchTemplates;
    BOOL m_includedInGestureRecognitionIsPossibleTest;
    BOOL m_sendsTouchesCancelledToApplication;
    id m_canBeginCondition;
}

@property(copy, nonatomic) id canBeginCondition; // @synthesize canBeginCondition=m_canBeginCondition;
@property(nonatomic) BOOL sendsTouchesCancelledToApplication; // @synthesize sendsTouchesCancelledToApplication=m_sendsTouchesCancelledToApplication;
@property(nonatomic) BOOL includedInGestureRecognitionIsPossibleTest; // @synthesize includedInGestureRecognitionIsPossibleTest=m_includedInGestureRecognitionIsPossibleTest;
@property(copy, nonatomic) id handler; // @synthesize handler=m_handler;
@property(nonatomic) int state; // @synthesize state=m_state;
@property(nonatomic) unsigned int types; // @synthesize types=m_types;
- (void)touchesCancelled:(struct __SBGestureContext *)arg1;
- (void)touchesEnded:(struct __SBGestureContext *)arg1;
- (void)touchesMoved:(struct __SBGestureContext *)arg1;
- (void)touchesBegan:(struct __SBGestureContext *)arg1;
- (int)templateMatch;
- (void)addTouchTemplate:(id)arg1;
- (void)sendTouchesCancelledToApplicationIfNeeded;
- (void)reset;
- (BOOL)shouldReceiveTouches;
- (void)dealloc;
- (id)init;

@end

