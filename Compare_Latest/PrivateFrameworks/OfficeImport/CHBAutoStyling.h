/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHAutoStyling.h>

#import <OfficeImport/CHAutoStyling-Protocol.h>

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>
{
}

- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(int)arg3;
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(int)arg2;
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(int)arg2;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(int)arg2 isLine:(_Bool)arg3;
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(int)arg2;
- (id)autoAxisStroke;
- (void)resolveLegendGraphicProperties:(id)arg1;
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;
- (void)resolveAxisGraphicProperties:(id)arg1;
- (void)resolvePlotAreaGraphicProperties:(id)arg1;
- (void)resolveFloorGraphicProperties:(id)arg1;
- (void)resolveWallGraphicProperties:(id)arg1;
- (void)resolveChartAreaGraphicProperties:(id)arg1;
- (id)autoStrokeForSeriesIndex:(int)arg1;
- (id)autoSeriesFill:(int)arg1;
- (id)autoSeriesBorderStroke;
- (id)autoFill;
- (id)autoStroke;
- (id)strokeWithColorIndex:(int)arg1;
- (id)fillWithColorIndex:(unsigned int)arg1;
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(BOOL)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(BOOL)arg7;

@end

