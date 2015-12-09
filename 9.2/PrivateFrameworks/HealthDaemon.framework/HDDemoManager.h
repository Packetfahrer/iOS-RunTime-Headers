/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoManager : NSObject {
    _HDDataFaker * _faker;
    _HDDataRecorder * _recorder;
    _HDDataReplayer * _replayer;
}

- (void).cxx_destruct;
- (void)generateFakeDataForActivityType:(int)arg1 minutes:(double)arg2 objectHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (BOOL)isProvidingData;
- (void)recordData:(id)arg1;
- (void)startFakingDataForActivityType:(int)arg1 speed:(id)arg2 objectHandler:(id /* block */)arg3;
- (void)startRecordingDataToFile:(id)arg1;
- (void)startReplayingDataFromFile:(id)arg1 repeat:(BOOL)arg2 withHandler:(id /* block */)arg3;
- (void)stopFakingData;
- (void)stopRecordingData;
- (void)stopReplayingData;

@end
