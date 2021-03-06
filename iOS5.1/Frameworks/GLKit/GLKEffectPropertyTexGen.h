/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyTexGen : GLKEffectProperty
{
    int _mode;
    float *_plane;
    int _coord;
    float *_eyePlaneByInvModelview;
    int _modeLoc;
    int _planeLoc;
    int _eyePlaneByInvModelviewLoc;
    char *_modeNameString;
    char *_planeNameString;
    unsigned int _textureIndex;
}

@property(nonatomic) unsigned int textureIndex; // @synthesize textureIndex=_textureIndex;
@property(nonatomic) char *planeNameString; // @synthesize planeNameString=_planeNameString;
@property(nonatomic) char *modeNameString; // @synthesize modeNameString=_modeNameString;
@property(nonatomic) int eyePlaneByInvModelviewLoc; // @synthesize eyePlaneByInvModelviewLoc=_eyePlaneByInvModelviewLoc;
@property(nonatomic) int planeLoc; // @synthesize planeLoc=_planeLoc;
@property(nonatomic) int modeLoc; // @synthesize modeLoc=_modeLoc;
@property(nonatomic) float *eyePlaneByInvModelview; // @synthesize eyePlaneByInvModelview=_eyePlaneByInvModelview;
@property(readonly, nonatomic) int coord; // @synthesize coord=_coord;
@property(nonatomic) float *plane; // @synthesize plane=_plane;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)dealloc;
- (char **)fshMaskStr;
- (char **)vshMaskStr;
- (unsigned int)fshMaskCt;
- (unsigned int)vshMaskCt;
- (struct GLKBigInt_s *)fshMasks;
- (struct GLKBigInt_s *)vshMasks;
- (void)bind;
- (void)initializeMasks;
- (void)setShaderBindings;
- (void)dirtyAllUniforms;
- (id)initWithMode:(int)arg1 coord:(int)arg2;
- (id)init;

@end

