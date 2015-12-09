/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTStateManagerSingleton : NSObject {
    _VTBatteryPolicy * _batteryPolicy;
    BOOL  _batteryPolicyOverriden;
    _VTFirstUnlockAfterRebootPolicy * _firstUnlockAfterRebootPolicy;
    NSMutableSet * _instances;
    _VTLockscreenPolicy * _lockscreenPolicy;
    _VTLowPowerModePolicy * _lowPowerModePolicy;
    NSObject<OS_dispatch_queue> * _queue;
    _VTSiriAssertionPolicy * _siriAssertionPolicy;
    _VTSiriEnabledPolicy * _siriEnabledPolicy;
    _VTOTASoftwareUpdateCheckingPolicy * _softwareUpdateCheckingPolicy;
    _VTSpringBoardStartedPolicy * _springboardPolicy;
    BOOL  _voiceTriggerIsEnabled;
    _VTVoiceTriggerEnabledPolicy * _vtEnabledPolicy;
}

+ (void)initialize;
+ (id)singleton;

- (void).cxx_destruct;
- (void)_handlePolicyUpdate:(id)arg1;
- (id)_init;
- (void)_powerlog:(id)arg1;
- (void)_stateTransitionDidOccur:(BOOL)arg1;
- (void)dealloc;
- (void)register:(id)arg1;
- (void)unregister:(id)arg1;

@end