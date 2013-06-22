/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSString;

@interface GEOSource : PBCodable
{
    NSString *_sourceId;
    NSString *_sourceName;
    NSString *_sourceVersion;
}

@property(retain, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(retain, nonatomic) NSString *sourceName; // @synthesize sourceName=_sourceName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSourceVersion;
- (void)dealloc;

@end

