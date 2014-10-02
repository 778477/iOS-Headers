/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPFileDataStorage.h>

@class TSPDocumentResourceInfo, TSPDocumentResourceManager;

// Not exported
@interface TSPDocumentResourceDataStorage : TSPFileDataStorage
{
    TSPDocumentResourceManager *_manager;
    TSPDocumentResourceInfo *_documentResourceInfo;
}

@property(retain, nonatomic) TSPDocumentResourceInfo *documentResourceInfo; // @synthesize documentResourceInfo=_documentResourceInfo;
@property(readonly, nonatomic) TSPDocumentResourceManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2;
- (void)performReadWithAccessor:(id)arg1;
- (id)filenameForPreferredFilename:(id)arg1;
- (id)documentResourceLocator;
- (id)storageForDataCopyFromOtherContext;
- (id)initWithManager:(id)arg1 documentResourceInfo:(id)arg2;

@end
