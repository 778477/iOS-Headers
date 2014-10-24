//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOComposedRoute, NSDate;

@interface GEORouteMatch : NSObject
{
    GEOComposedRoute *_route;
    struct PolylineCoordinate _routeCoordinate;
    CDStruct_2c43369c _locationCoordinate;
    unsigned int _stepIndex;
    double _matchedCourse;
    double _distanceFromRoute;
    double _modifiedHorizontalAccuracy;
    double _modifiedCourseAccuracy;
    unsigned int _consecutiveProgressionsOffRoute;
    double _distanceTraveledOffRoute;
    BOOL _isGoodMatch;
    CDStruct_153464bf *_road;
    double _roadWidth;
    GEORouteMatch *_projectedFrom;
    NSDate *_timestamp;
}

@property(nonatomic) double distanceTraveledOffRoute; // @synthesize distanceTraveledOffRoute=_distanceTraveledOffRoute;
@property(nonatomic) unsigned int consecutiveProgressionsOffRoute; // @synthesize consecutiveProgressionsOffRoute=_consecutiveProgressionsOffRoute;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) BOOL isGoodMatch; // @synthesize isGoodMatch=_isGoodMatch;
@property(retain, nonatomic) GEORouteMatch *projectedFrom; // @synthesize projectedFrom=_projectedFrom;
@property(nonatomic) double modifiedCourseAccuracy; // @synthesize modifiedCourseAccuracy=_modifiedCourseAccuracy;
@property(nonatomic) double modifiedHorizontalAccuracy; // @synthesize modifiedHorizontalAccuracy=_modifiedHorizontalAccuracy;
@property(nonatomic) double distanceFromRoute; // @synthesize distanceFromRoute=_distanceFromRoute;
@property(readonly, nonatomic) double roadWidth; // @synthesize roadWidth=_roadWidth;
@property(nonatomic) CDStruct_153464bf *road; // @synthesize road=_road;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) double matchedCourse; // @synthesize matchedCourse=_matchedCourse;
@property(nonatomic) unsigned int stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) CDStruct_c3b9c2ee locationCoordinate; // @synthesize locationCoordinate=_locationCoordinate;
@property(readonly, nonatomic) struct PolylineCoordinate routeCoordinate; // @synthesize routeCoordinate=_routeCoordinate;
- (id).cxx_construct;
- (id)description;
- (id)step;
@property(readonly, nonatomic) BOOL projectedPastEndOfLeg;
@property(readonly, nonatomic) BOOL routeMatchedToEnd;
- (BOOL)routeMatchBehind:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqualIgnoringScore:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateOffRouteProgress:(id)arg1 minDistanceToGetOnRoute:(double)arg2;
- (void)dealloc;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 locationCoordinate:(CDStruct_c3b9c2ee)arg3 stepIndex:(unsigned int)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;

@end
