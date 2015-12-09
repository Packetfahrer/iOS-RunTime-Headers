/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLBatteryAgent : PLAgent {
    PLTimer * _EABatteryTimer;
    double  _EAEnergyDrained;
    BOOL  _allowGasGaugeRead;
    PLXPCResponderOperatorComposition * _batteryInfoResponder;
    double  _batteryLevelPercent;
    PLEntryNotificationOperatorComposition * _canSleepEntryNotifications;
    PLSemaphore * _canSleepSemaphore;
    BOOL  _deviceIsPluggedIn;
    NSString * _entryKeyEABattery;
    struct ggcontext { } * _gasGagueConnection;
    int  _gasGaugeConsecutiveEmptyEntriesCount;
    PLTimer * _gasGaugeTimer;
    PLIOKitOperatorComposition * _iokit;
    BOOL  _isEABatteryConnected;
    NSNumber * _lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
    double  _rawBatteryVoltageVolt;
    PLMonotonicTimer * _significantBatteryChangeTimer;
    PLEntryNotificationOperatorComposition * _wakeEntryNotifications;
}

@property (retain) PLTimer *EABatteryTimer;
@property double EAEnergyDrained;
@property BOOL allowGasGaugeRead;
@property (retain) PLXPCResponderOperatorComposition *batteryInfoResponder;
@property double batteryLevelPercent;
@property (readonly) PLEntryNotificationOperatorComposition *canSleepEntryNotifications;
@property (retain) PLSemaphore *canSleepSemaphore;
@property BOOL deviceIsPluggedIn;
@property (readonly) NSString *entryKeyEABattery;
@property struct ggcontext { }*gasGagueConnection;
@property int gasGaugeConsecutiveEmptyEntriesCount;
@property (retain) PLTimer *gasGaugeTimer;
@property (readonly) PLIOKitOperatorComposition *iokit;
@property BOOL isEABatteryConnected;
@property (retain) NSNumber *lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
@property double rawBatteryVoltageVolt;
@property (retain) PLMonotonicTimer *significantBatteryChangeTimer;
@property (readonly) PLEntryNotificationOperatorComposition *wakeEntryNotifications;

+ (id)defaults;
+ (id)entryEventBackwardDefinitionBattery;
+ (id)entryEventBackwardDefinitionBatteryUI;
+ (id)entryEventBackwardDefinitionEABattery;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventIntervalDefinitionGasGauge;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointDefinitionGasGaugeReconnect;
+ (id)entryEventPointDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)EABatteryTimer;
- (double)EAEnergyDrained;
- (void)accessoryConnected:(id)arg1;
- (void)accessoryDisconnected:(id)arg1;
- (BOOL)allowGasGaugeRead;
- (id)batteryInfoResponder;
- (double)batteryLevelPercent;
- (id)canSleepEntryNotifications;
- (id)canSleepSemaphore;
- (void)cancelEALogging;
- (void)dealloc;
- (BOOL)deviceIsPluggedIn;
- (BOOL)didEABatteryIDMatchInPowerSources:(id)arg1;
- (id)entryKeyEABattery;
- (void)fakeLogEntry:(id)arg1;
- (struct ggcontext { }*)gasGagueConnection;
- (int)gasGaugeConsecutiveEmptyEntriesCount;
- (BOOL)gasGaugeOpenAndStartLogging;
- (void)gasGaugeRead;
- (BOOL)gasGaugeStopLoggingAndClose;
- (id)gasGaugeTimer;
- (BOOL)givePluggedInFreePass;
- (id)init;
- (void)initOperatorDependancies;
- (id)iokit;
- (BOOL)isEABatteryConnected;
- (BOOL)isEABatteryConnectedNow;
- (id)lastkIOPSAppleBatteryCaseCumulativeCurrentKey;
- (void)log;
- (void)logEABatteryStatistics;
- (void)logEventBackwardBattery;
- (void)logEventIntervalGasGauge;
- (double)rawBatteryVoltageVolt;
- (void)refreshEABatteryStatus;
- (void)setAllowGasGaugeRead:(BOOL)arg1;
- (void)setBatteryInfoResponder:(id)arg1;
- (void)setBatteryLevelPercent:(double)arg1;
- (void)setCanSleepSemaphore:(id)arg1;
- (void)setDeviceIsPluggedIn:(BOOL)arg1;
- (void)setEABatteryTimer:(id)arg1;
- (void)setEAEnergyDrained:(double)arg1;
- (void)setGasGagueConnection:(struct ggcontext { }*)arg1;
- (void)setGasGaugeConsecutiveEmptyEntriesCount:(int)arg1;
- (void)setGasGaugeTimer:(id)arg1;
- (void)setIsEABatteryConnected:(BOOL)arg1;
- (void)setLastkIOPSAppleBatteryCaseCumulativeCurrentKey:(id)arg1;
- (void)setRawBatteryVoltageVolt:(double)arg1;
- (void)setSignificantBatteryChangeTimer:(id)arg1;
- (void)setupEALogging;
- (id)significantBatteryChangeTimer;
- (id)wakeEntryNotifications;

@end