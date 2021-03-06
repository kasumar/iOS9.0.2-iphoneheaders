/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GAXProfileManagerDelegate;
#import <GAXBackboardServer/GAXBackboardServer-Structs.h>
@class NSMutableDictionary, NSDictionary, NSArray, AXAccessQueueTimer, NSString, NSData;

@interface GAXProfileManager : NSObject {

	NSMutableDictionary* _userAppPropertiesMap;
	NSMutableDictionary* _userGlobalPropertiesMap;
	NSMutableDictionary* _singleAppModeAppPropertiesMap;
	NSMutableDictionary* _singleAppModeGlobalPropertiesMap;
	NSDictionary* _profileKeyToRetrieveSelectorMap;
	NSDictionary* _fallbackPropertyValues;
	NSArray* _appSpecificProfileKeys;
	NSArray* _globalProfileKeys;
	id<GAXProfileManagerDelegate> _delegate;
	AXAccessQueueTimer* _managedConfigurationNotificationCoalesceTimer;
	AXAccessQueueTimer* _profileFeatureChangedNotificationTimer;
	unsigned _configuration;
	NSString* _singleAppModeAppID;

}

@property (assign,nonatomic) id<GAXProfileManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned configuration;                                                          //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) char isUserMode; 
@property (nonatomic,readonly) char isSingleAppMode; 
@property (nonatomic,readonly) char isAppSelfLockMode; 
@property (nonatomic,readonly) char shouldAllowKeyboardTextInput; 
@property (nonatomic,readonly) char shouldAllowTouch; 
@property (nonatomic,readonly) char shouldAllowMotion; 
@property (nonatomic,readonly) char shouldAllowLockButton; 
@property (nonatomic,readonly) char shouldAllowVolumeButtons; 
@property (nonatomic,readonly) char shouldAllowRingerSwitch; 
@property (nonatomic,readonly) char shouldAllowProximity; 
@property (nonatomic,readonly) char shouldAllowAutolock; 
@property (nonatomic,readonly) int appTimeoutDuration; 
@property (nonatomic,readonly) char timeRestrictionsEnabled; 
@property (nonatomic,readonly) char shouldEnableVoiceOver; 
@property (nonatomic,readonly) char shouldEnableZoom; 
@property (nonatomic,readonly) char shouldEnableInvertColors; 
@property (nonatomic,readonly) char shouldEnableGrayscale; 
@property (nonatomic,readonly) char shouldEnableAssistiveTouch; 
@property (nonatomic,readonly) char shouldEnableSpeakSelection; 
@property (nonatomic,readonly) char shouldEnableMonoAudio; 
@property (nonatomic,readonly) char shouldDisableVoiceOver; 
@property (nonatomic,readonly) char shouldDisableZoom; 
@property (nonatomic,readonly) char shouldDisableInvertColors; 
@property (nonatomic,readonly) char shouldDisableGrayscale; 
@property (nonatomic,readonly) char shouldDisableAssistiveTouch; 
@property (nonatomic,readonly) char shouldDisableSpeakSelection; 
@property (nonatomic,readonly) char shouldDisableMonoAudio; 
@property (nonatomic,readonly) char shouldAllowToggleOfVoiceOver; 
@property (nonatomic,readonly) char shouldAllowToggleOfZoom; 
@property (nonatomic,readonly) char shouldAllowToggleOfInvertColors; 
@property (nonatomic,readonly) char shouldAllowToggleOfGrayscale; 
@property (nonatomic,readonly) char shouldAllowToggleOfAssistiveTouch; 
@property (nonatomic,readonly) NSData * ignoredTouchRegionsPortrait; 
@property (nonatomic,readonly) NSData * ignoredTouchRegionsLandscape; 
@property (nonatomic,readonly) NSDictionary * restrictionStates; 
@property (nonatomic,readonly) NSDictionary * unappliedRestrictionStates; 
@property (nonatomic,readonly) char shouldAllowHomeButton; 
@property (nonatomic,readonly) char shouldAutolaunchCrashedApps; 
@property (nonatomic,readonly) char shouldAutolaunchAppsAfterSystemCrash; 
@property (nonatomic,readonly) char shouldAutolaunchAppsAfterLowBatteryPowerDown; 
@property (nonatomic,readonly) char shouldAllowExit; 
@property (nonatomic,retain) NSString * singleAppModeAppID;                                                   //@synthesize singleAppModeAppID=_singleAppModeAppID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userAppPropertiesMap;                                      //@synthesize userAppPropertiesMap=_userAppPropertiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * userGlobalPropertiesMap;                                   //@synthesize userGlobalPropertiesMap=_userGlobalPropertiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * singleAppModeAppPropertiesMap;                             //@synthesize singleAppModeAppPropertiesMap=_singleAppModeAppPropertiesMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * singleAppModeGlobalPropertiesMap;                          //@synthesize singleAppModeGlobalPropertiesMap=_singleAppModeGlobalPropertiesMap - In the implementation block
@property (nonatomic,retain) NSDictionary * profileKeyToRetrieveSelectorMap;                                  //@synthesize profileKeyToRetrieveSelectorMap=_profileKeyToRetrieveSelectorMap - In the implementation block
@property (nonatomic,retain) NSDictionary * fallbackPropertyValues;                                           //@synthesize fallbackPropertyValues=_fallbackPropertyValues - In the implementation block
@property (nonatomic,retain) NSArray * appSpecificProfileKeys;                                                //@synthesize appSpecificProfileKeys=_appSpecificProfileKeys - In the implementation block
@property (nonatomic,retain) NSArray * globalProfileKeys;                                                     //@synthesize globalProfileKeys=_globalProfileKeys - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * managedConfigurationNotificationCoalesceTimer;              //@synthesize managedConfigurationNotificationCoalesceTimer=_managedConfigurationNotificationCoalesceTimer - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * profileFeatureChangedNotificationTimer;                     //@synthesize profileFeatureChangedNotificationTimer=_profileFeatureChangedNotificationTimer - In the implementation block
-(char)isUserMode;
-(char)isSingleAppMode;
-(id)selfLockAppIDs;
-(char)shouldAllowExit;
-(void)_initializeProfileKeyToRetrieveSelectorMap;
-(void)_initializeFallbackPropertyValues;
-(void)_initializeProfileKeys;
-(void)_updateConfigurationAndNotifyDelegate:(char)arg1 ;
-(void)_handleSingleAppModeStateDidChange:(id)arg1 ;
-(char)shouldAllowKeyboardTextInput;
-(char)shouldAllowTouch;
-(char)shouldAllowMotion;
-(char)shouldAllowRingerSwitch;
-(char)shouldAllowProximity;
-(char)shouldAllowLockButton;
-(char)shouldAllowVolumeButtons;
-(char)shouldAllowAutolock;
-(int)appTimeoutDuration;
-(char)timeRestrictionsEnabled;
-(char)shouldEnableVoiceOver;
-(char)shouldEnableZoom;
-(char)shouldEnableInvertColors;
-(char)shouldEnableGrayscale;
-(char)shouldEnableAssistiveTouch;
-(char)shouldEnableSpeakSelection;
-(char)shouldEnableMonoAudio;
-(char)shouldAllowToggleOfVoiceOver;
-(char)shouldAllowToggleOfZoom;
-(char)shouldAllowToggleOfInvertColors;
-(char)shouldAllowToggleOfGrayscale;
-(char)shouldAllowToggleOfAssistiveTouch;
-(NSData *)ignoredTouchRegionsPortrait;
-(NSData *)ignoredTouchRegionsLandscape;
-(NSDictionary *)restrictionStates;
-(NSDictionary *)unappliedRestrictionStates;
-(char)shouldAllowHomeButton;
-(char)shouldAutolaunchCrashedApps;
-(char)shouldAutolaunchAppsAfterSystemCrash;
-(char)shouldAutolaunchAppsAfterLowBatteryPowerDown;
-(void)setProfileKeyToRetrieveSelectorMap:(NSDictionary *)arg1 ;
-(void)setFallbackPropertyValues:(NSDictionary *)arg1 ;
-(void)setAppSpecificProfileKeys:(NSArray *)arg1 ;
-(void)setGlobalProfileKeys:(NSArray *)arg1 ;
-(id)_globalPropertyMapForConfiguration:(unsigned)arg1 ;
-(id)_appPropertyMapForConfiguration:(unsigned)arg1 ;
-(NSDictionary *)fallbackPropertyValues;
-(NSString *)singleAppModeAppID;
-(id)_valueForRetrieveSelector:(SEL)arg1 ;
-(id)_valueForProfileKey:(id)arg1 ;
-(void)updateProperty:(id)arg1 withValue:(id)arg2 ;
-(int)stateForRestrictionWithIdentifier:(id)arg1 ;
-(NSMutableDictionary *)userAppPropertiesMap;
-(NSMutableDictionary *)singleAppModeAppPropertiesMap;
-(NSMutableDictionary *)userGlobalPropertiesMap;
-(NSMutableDictionary *)singleAppModeGlobalPropertiesMap;
-(char)_isProfileKeyGlobal:(id)arg1 ;
-(id)_appIDForConfiguration:(unsigned)arg1 ;
-(id)_fallbackValueForProfieKey:(id)arg1 ;
-(id)_profileKeyForRetrieveSelector:(SEL)arg1 ;
-(NSDictionary *)profileKeyToRetrieveSelectorMap;
-(NSArray *)globalProfileKeys;
-(void)_updateSingleAppModeStateFromManagedConfiguration;
-(id)_singleAppModeAppIDs;
-(void)_updateProperty:(id)arg1 withValue:(id)arg2 saveChanges:(char)arg3 ;
-(void)setSingleAppModeAppID:(NSString *)arg1 ;
-(id)_guidedAccessProfileKeyForManagedConfigKey:(id)arg1 shouldInvertValue:(char*)arg2 ;
-(void)_applyWebTextDefineProperty:(char)arg1 properties:(id)arg2 ;
-(void)setSingleAppModeAppPropertiesMap:(NSMutableDictionary *)arg1 ;
-(AXAccessQueueTimer *)managedConfigurationNotificationCoalesceTimer;
-(void)setManagedConfigurationNotificationCoalesceTimer:(AXAccessQueueTimer *)arg1 ;
-(char)shouldDisableVoiceOver;
-(char)shouldDisableZoom;
-(char)shouldDisableInvertColors;
-(char)shouldDisableGrayscale;
-(char)shouldDisableAssistiveTouch;
-(char)shouldDisableSpeakSelection;
-(char)shouldDisableMonoAudio;
-(char)isAppSelfLockMode;
-(id)ignoredTouchRegionsForOrientation:(int)arg1 ;
-(id)statesForRestrictionsWithIdentifiers:(id)arg1 ;
-(SCD_Struct_GA0)profileAccessibilityFeatureSet;
-(void)setStatesForRestrictions:(id)arg1 ;
-(void)setIgnoredTouchRegions:(id)arg1 forOrientation:(int)arg2 ;
-(char)isAppPrivilagedToSelfLock:(id)arg1 ;
-(void)notifySelfLockStateDidChange;
-(int)isAvailabilityValid:(unsigned)arg1 forSelfLockAppToEnableGuidedAccess:(char)arg2 ;
-(id)unappliedChangedStatesForRestrictions;
-(void)clearUnappliedChangedStatesForRestrictions;
-(SEL)_retrieveSelectorForProfileKey:(id)arg1 ;
-(void)setUserAppPropertiesMap:(NSMutableDictionary *)arg1 ;
-(NSArray *)appSpecificProfileKeys;
-(AXAccessQueueTimer *)profileFeatureChangedNotificationTimer;
-(void)setProfileFeatureChangedNotificationTimer:(AXAccessQueueTimer *)arg1 ;
-(id)_fallbackValueForRetrieveSelector:(SEL)arg1 ;
-(void)setSingleAppModeGlobalPropertiesMap:(NSMutableDictionary *)arg1 ;
-(void)setUserGlobalPropertiesMap:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<GAXProfileManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id<GAXProfileManagerDelegate>)delegate;
-(void)setConfiguration:(unsigned)arg1 ;
-(unsigned)configuration;
@end

