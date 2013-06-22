/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SFUOutputStream-Protocol.h"

@class SFUCryptor;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream>
{
    id <SFUOutputStream> mBaseStream;
    SFUCryptor *mCryptor;
    BOOL mIsClosed;
    BOOL mComputeCrc32;
    unsigned int mCrc32;
}

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)arg1 key:(id)arg2;
- (id)closeLocalStream;
- (void)close;
- (unsigned int)crc32;
- (id)inputStream;
- (BOOL)canCreateInputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;
- (BOOL)canSeek;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;
- (void)dealloc;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2 computeCrc32:(BOOL)arg3;
- (id)initForEncryptionWithOutputStream:(id)arg1 key:(id)arg2;

@end

