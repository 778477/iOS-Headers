//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DChartAllSceneObjectDelegate.h"

@class TSCH3DSceneObject;

__attribute__((visibility("hidden")))
@interface TSCH3DRayPickPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate>
{
    TSCH3DSceneObject *mCurrentSceneObject;
    tvec2_3b141483 mCurrentElement;
}

@property(nonatomic) tvec2_3b141483 currentElement; // @synthesize currentElement=mCurrentElement;
@property(retain, nonatomic) TSCH3DSceneObject *currentSceneObject; // @synthesize currentSceneObject=mCurrentSceneObject;
- (id).cxx_construct;
- (BOOL)willSubmitElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willRenderElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didTransformElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willUpdateElementEffectsStatesForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (struct ElementRenderPass)renderPassForElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (BOOL)willProcessElement:(const struct RenderElementInfo *)arg1 sceneObject:(id)arg2;
- (void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)updateExternalLabelAttribute:(struct ExternalLabelAttribute *)arg1 sceneObject:(id)arg2 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg3;
- (BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const struct ChartLabelsContainingLabelRenderInfo *)arg2;
- (BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(int)arg2 alignment:(unsigned int)arg3 elementIndex:(unsigned int)arg4 forSceneObject:(id)arg5;
- (void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)setOffset:(const tvec3_17f03ce0 *)arg1 labelType:(int)arg2 boundsIndex:(int)arg3 forSceneObject:(id)arg4;
- (void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2_3b141483 *)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4;
- (BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3;
- (struct ElementRenderPass)renderPassForSceneObject:(id)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2;
- (void)didEndProcessingSceneObject:(id)arg1;
- (BOOL)willBeginProcessingSceneObject:(id)arg1;
- (void)dealloc;

@end

