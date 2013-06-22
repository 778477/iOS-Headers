/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface PFUbiquityPeerSnapshotCollection : NSObject
{
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_kvToSnapshot;
    NSMutableArray *_peerSnapshots;
    BOOL _needSort;
}

- (BOOL)calculateSnapshotDiffsWithError:(id *)arg1;
- (id)snapshotForPeerID:(id)arg1 andTransactionNumber:(id)arg2;
- (id)knowledgeVectorsForTransactionNumber:(id)arg1 exportedByPeerWithID:(id)arg2;
- (id)snapshotForKnowledgeVector:(id)arg1;
- (void)addSnapshot:(id)arg1;
- (id)allPeerIDs;
- (void)dealloc;
- (id)init;

@end

