/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIDelayedAction;

@interface UIKeyboardPreferencesController : NSObject
{
    UIDelayedAction *m_synchronizePreferencesAction;
    BOOL dontSynchronizePreferences;
}

+ (void)handleSpecificHardwareKeyboard;
+ (void)preferencesChangedCallback:(id)arg1;
+ (id)sharedPreferencesController;
@property(nonatomic) BOOL dontSynchronizePreferences; // @synthesize dontSynchronizePreferences;
- (BOOL)spaceConfirmationEnabled;
- (float)rivenSizeFactor:(float)arg1;
- (BOOL)costlyCapture;
- (BOOL)typologyEnabled;
- (void)setInputModeLastUsed:(id)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (void)clearSynchronizePreferencesTimer;
- (BOOL)boolForKey:(int)arg1;
- (id)valueForKey:(int)arg1;
@property(readonly) BOOL isInternalInstall;
- (id)defaultForKey:(int)arg1;
- (CDStruct_59875e80 *)domainForType:(int)arg1;
- (void)dealloc;
- (id)init;
- (CDStruct_982099be *)preferences;
- (CDStruct_59875e80 *)domains;

@end

