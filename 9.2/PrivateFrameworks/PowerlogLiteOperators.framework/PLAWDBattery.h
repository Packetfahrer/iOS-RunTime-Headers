/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDBattery : PLAWDAuxMetrics {
    PLEntryNotificationOperatorComposition * _batteryEventCallback;
    long  _batterySubmitCnt;
    long  _dispOnOffCnt;
    PLEntryNotificationOperatorComposition * _displayEventCallback;
    double  _prevCapacity;
    BOOL  _prevDeviceCharging;
    double  _prevDispTimeStamp;
    BOOL  _prevDisplayON;
    double  _prevVoltage;
}

@property (retain) PLEntryNotificationOperatorComposition *batteryEventCallback;
@property long batterySubmitCnt;
@property long dispOnOffCnt;
@property (retain) PLEntryNotificationOperatorComposition *displayEventCallback;
@property double prevCapacity;
@property BOOL prevDeviceCharging;
@property double prevDispTimeStamp;
@property BOOL prevDisplayON;
@property double prevVoltage;

+ (id)entryAggregateDefinitionAwdBattery;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToBatteryTable:(id)arg1 withValue:(double)arg2;
- (id)batteryEventCallback;
- (long)batterySubmitCnt;
- (long)dispOnOffCnt;
- (id)displayEventCallback;
- (void)finalizeBatteryTable;
- (void)handleBatteryCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)initBatteryStats;
- (BOOL)isDeviceCharging:(id)arg1;
- (double)prevCapacity;
- (BOOL)prevDeviceCharging;
- (double)prevDispTimeStamp;
- (BOOL)prevDisplayON;
- (double)prevVoltage;
- (void)processEnergyConsumedAndAddEntry:(double)arg1 withVoltage:(double)arg2;
- (void)reInitBatteryStats;
- (void)resetBatteryTable;
- (void)setBatteryEventCallback:(id)arg1;
- (void)setBatterySubmitCnt:(long)arg1;
- (void)setDispOnOffCnt:(long)arg1;
- (void)setDisplayEventCallback:(id)arg1;
- (void)setPrevCapacity:(double)arg1;
- (void)setPrevDeviceCharging:(BOOL)arg1;
- (void)setPrevDispTimeStamp:(double)arg1;
- (void)setPrevDisplayON:(BOOL)arg1;
- (void)setPrevVoltage:(double)arg1;
- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;

@end
