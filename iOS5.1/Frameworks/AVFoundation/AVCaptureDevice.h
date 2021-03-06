/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureDeviceInternal, NSString;

@interface AVCaptureDevice : NSObject
{
    AVCaptureDeviceInternal *_internal;
}

+ (id)_devices;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)doesHandleNotification:(id)arg1;
- (void)setContrast:(float)arg1;
- (float)contrast;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (void)setImageControlMode:(int)arg1;
- (int)imageControlMode;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isAudioLevelMeteringSupported;
- (BOOL)isAdjustingWhiteBalance;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (void)setWhiteBalanceMode:(int)arg1;
- (int)whiteBalanceMode;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (BOOL)isAdjustingExposure;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)exposurePointOfInterest;
- (void)setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (BOOL)isManualExposureSupportEnabled;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)exposureDuration;
- (void)setExposureMode:(int)arg1;
- (int)exposureMode;
- (BOOL)isExposureModeSupported:(int)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setFocusMode:(int)arg1;
- (int)focusMode;
- (BOOL)isFocusModeSupported:(int)arg1;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (float)torchLevel;
- (BOOL)hasTorch;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)hasFlash;
- (int)position;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (void)_stopUsingDevice;
- (BOOL)_startUsingDevice:(id *)arg1;
- (void)_forceClosed;
- (void)deviceConnectionDidChange;
- (void)deviceConnectionWillChange;
- (void)close;
- (BOOL)open:(id *)arg1;
- (BOOL)isOpen;
- (void)unlockForConfiguration;
- (BOOL)lockForConfiguration:(id *)arg1;
- (BOOL)isLockedForConfiguration;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
- (BOOL)isInUseByAnotherApplication;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)setSession:(id)arg1;
- (id)session;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)description;
- (void)dealloc;
- (id)init;

@end

