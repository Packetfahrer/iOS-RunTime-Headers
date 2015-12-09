/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
 */

@interface MBSDevice : NSObject {
    NSMutableDictionary * _deviceInfoDictionary;
    NSData * _logData;
    NSString * _logFileName;
}

@property (retain) NSMutableDictionary *deviceInfoDictionary;
@property (retain) NSData *logData;
@property (retain) NSString *logFileName;

- (BOOL)archiveLogFile:(id)arg1 toFile:(id)arg2 atDir:(id)arg3;
- (id)collectAggdData;
- (BOOL)collectAllDeviceInformation;
- (id)collectBasicDeviceData;
- (id)collectGasGaugeData;
- (BOOL)collectLogs:(unsigned int)arg1;
- (BOOL)copyLogsToTempDirectory:(unsigned int)arg1;
- (BOOL)copyPowerLogsToDir:(id)arg1;
- (BOOL)createTempDirectory:(unsigned int)arg1;
- (void)dealloc;
- (BOOL)deviceHasStockholmChip;
- (id)deviceInfoDictionary;
- (id)getMaxMinAvgCapacityOfPowerLog;
- (id)logData;
- (id)logFileName;
- (void)setDeviceInfoDictionary:(id)arg1;
- (void)setLogData:(id)arg1;
- (void)setLogFileName:(id)arg1;

@end
