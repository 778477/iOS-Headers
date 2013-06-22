/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DAMailboxFetchMessageRequest.h"

#import "MFDAMailAccountRequest-Protocol.h"

@class MFDAMessageStore, Message, MimePart;

@interface _MFDAMessageStoreFetchRequest : DAMailboxFetchMessageRequest <MFDAMailAccountRequest>
{
    id <MFRequestQueueResponseConsumer><DAMailAccountStreamConsumerFactory> consumer;
    MFDAMessageStore *store;
    Message *message;
    MimePart *part;
    int format;
    BOOL partial;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)deferredOperation;
@property(readonly, nonatomic) BOOL isUserRequested;
@property(readonly, nonatomic) BOOL shouldSend;
- (unsigned long long)generationNumber;

@end

