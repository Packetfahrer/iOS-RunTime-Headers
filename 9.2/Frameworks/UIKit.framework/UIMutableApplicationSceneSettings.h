/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (nonatomic) BOOL canShowAlerts;
@property (nonatomic) unsigned int deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL deviceOrientationEventsEnabled;
@property (nonatomic, retain) NSNumber *forcedStatusBarHidden;
@property (nonatomic, retain) NSNumber *forcedStatusBarStyle;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL idleModeEnabled;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic) BOOL underLock;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (BOOL)canShowAlerts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)deactivationReasons;
- (BOOL)deviceOrientationEventsEnabled;
- (id)forcedStatusBarHidden;
- (id)forcedStatusBarStyle;
- (BOOL)idleModeEnabled;
- (BOOL)isUISubclass;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (void)setCanShowAlerts:(BOOL)arg1;
- (void)setDeactivationReasons:(unsigned int)arg1;
- (void)setDeviceOrientationEventsEnabled:(BOOL)arg1;
- (void)setForcedStatusBarHidden:(id)arg1;
- (void)setForcedStatusBarStyle:(id)arg1;
- (void)setIdleModeEnabled:(BOOL)arg1;
- (void)setStatusBarStyleOverridesToSuppress:(int)arg1;
- (void)setUnderLock:(BOOL)arg1;
- (int)statusBarStyleOverridesToSuppress;
- (BOOL)underLock;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

// Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard

- (BOOL)isEffectivelyBackgrounded;

@end
