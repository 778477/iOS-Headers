//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLatLng, NSData, NSString;

@interface GEODirectionsEvent : PBCodable <NSCopying>
{
    long long _errorCode;
    NSString *_errorDomain;
    GEOLatLng *_occurrenceLatLng;
    unsigned int _occurrenceResponseIndex;
    NSData *_occurrenceRouteID;
    unsigned int _occurrenceStepIndex;
    unsigned int _switchedToResponseIndex;
    NSData *_switchedToRouteID;
    NSString *_synthesizedStepInstructions;
    int _synthesizedStepManeuverType;
    int _type;
    CDStruct_c516b0c7 _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(retain, nonatomic) NSString *synthesizedStepInstructions; // @synthesize synthesizedStepInstructions=_synthesizedStepInstructions;
@property(nonatomic) int synthesizedStepManeuverType; // @synthesize synthesizedStepManeuverType=_synthesizedStepManeuverType;
@property(retain, nonatomic) NSData *switchedToRouteID; // @synthesize switchedToRouteID=_switchedToRouteID;
@property(nonatomic) unsigned int switchedToResponseIndex; // @synthesize switchedToResponseIndex=_switchedToResponseIndex;
@property(retain, nonatomic) GEOLatLng *occurrenceLatLng; // @synthesize occurrenceLatLng=_occurrenceLatLng;
@property(nonatomic) unsigned int occurrenceStepIndex; // @synthesize occurrenceStepIndex=_occurrenceStepIndex;
@property(retain, nonatomic) NSData *occurrenceRouteID; // @synthesize occurrenceRouteID=_occurrenceRouteID;
@property(nonatomic) unsigned int occurrenceResponseIndex; // @synthesize occurrenceResponseIndex=_occurrenceResponseIndex;
@property(nonatomic) int type; // @synthesize type=_type;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(readonly, nonatomic) BOOL hasSynthesizedStepInstructions;
@property(nonatomic) BOOL hasSynthesizedStepManeuverType;
@property(readonly, nonatomic) BOOL hasSwitchedToRouteID;
@property(nonatomic) BOOL hasSwitchedToResponseIndex;
@property(readonly, nonatomic) BOOL hasOccurrenceLatLng;
@property(nonatomic) BOOL hasOccurrenceStepIndex;
@property(readonly, nonatomic) BOOL hasOccurrenceRouteID;
@property(nonatomic) BOOL hasOccurrenceResponseIndex;
@property(nonatomic) BOOL hasType;
- (void)dealloc;

@end
