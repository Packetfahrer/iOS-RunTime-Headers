/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudDataSyncStateFilter : HMDMessageFilter <HAPTimerDelegate, HMMessageReceiver> {
    int  _circleNotificationToken;
    BOOL  _cloudDataSyncCompleted;
    HAPTimer * _cloudDataSyncInProgressTimer;
    NSDate * _dataSyncTimerStartTimestamp;
    BOOL  _decryptionFailed;
    BOOL  _iCloudAccountActive;
    BOOL  _keychainSyncEnabled;
    BOOL  _keychainSyncRequiredPopShown;
    HMMessageDispatcher * _msgDispatcher;
    BOOL  _networkConnectivityAvailable;
    NSObject<OS_dispatch_source> * _popupTimer;
    double  _remainingDataSyncPeriod;
    BOOL  _serverTokenAvailable;
    int  _totalHomes;
    int  _totalTransientPeerDevices;
    NSUUID * _uuid;
}

@property (nonatomic) int circleNotificationToken;
@property (nonatomic) BOOL cloudDataSyncCompleted;
@property (nonatomic, retain) HAPTimer *cloudDataSyncInProgressTimer;
@property (nonatomic, retain) NSDate *dataSyncTimerStartTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL decryptionFailed;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL iCloudAccountActive;
@property (nonatomic) BOOL keychainSyncEnabled;
@property (nonatomic) BOOL keychainSyncRequiredPopShown;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic) BOOL networkConnectivityAvailable;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *popupTimer;
@property (nonatomic) double remainingDataSyncPeriod;
@property (nonatomic) BOOL serverTokenAvailable;
@property (readonly) Class superclass;
@property (nonatomic) int totalHomes;
@property (nonatomic) int totalTransientPeerDevices;
@property (nonatomic, retain) NSUUID *uuid;

+ (BOOL)isWhitelistedRemoteTransportMessage:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_cloudSyncinProgressCheck;
- (void)_handleAccountStatusChanged:(id)arg1;
- (void)_handleCircleChangedNotification;
- (void)_handleRemoteAccessPeersFoundNotification:(id)arg1;
- (void)_registerForCircleChangeNotifications;
- (void)_resetCloudDataSyncTimer;
- (void)_stallCloudDataSyncTimer;
- (void)_startCloudDataSyncTimer;
- (void)_startPopupTimer;
- (void)_stopCloudDataSyncTimer;
- (void)_stopPopupTimer;
- (void)_updateCloudDataSyncState:(BOOL)arg1;
- (BOOL)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (int)circleNotificationToken;
- (BOOL)cloudDataSyncCompleted;
- (id)cloudDataSyncInProgressTimer;
- (id)dataSyncTimerStartTimestamp;
- (void)dealloc;
- (BOOL)decryptionFailed;
- (BOOL)iCloudAccountActive;
- (id)initWithName:(id)arg1 messageDispatcher:(id)arg2 totalTransientPeerDevices:(unsigned int)arg3 serverTokenAvailable:(BOOL)arg4 totalHomes:(int)arg5;
- (BOOL)keychainSyncEnabled;
- (BOOL)keychainSyncRequiredPopShown;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (BOOL)networkConnectivityAvailable;
- (id)popupTimer;
- (double)remainingDataSyncPeriod;
- (void)resetConfiguration;
- (BOOL)serverTokenAvailable;
- (void)setCircleNotificationToken:(int)arg1;
- (void)setCloudDataSyncCompleted:(BOOL)arg1;
- (void)setCloudDataSyncInProgressTimer:(id)arg1;
- (void)setDataSyncTimerStartTimestamp:(id)arg1;
- (void)setDecryptionFailed:(BOOL)arg1;
- (void)setICloudAccountActive:(BOOL)arg1;
- (void)setKeychainSyncEnabled:(BOOL)arg1;
- (void)setKeychainSyncRequiredPopShown:(BOOL)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setNetworkConnectivityAvailable:(BOOL)arg1;
- (void)setPopupTimer:(id)arg1;
- (void)setRemainingDataSyncPeriod:(double)arg1;
- (void)setServerTokenAvailable:(BOOL)arg1;
- (void)setTotalHomes:(int)arg1;
- (void)setTotalTransientPeerDevices:(int)arg1;
- (void)setUuid:(id)arg1;
- (BOOL)shouldCloudSyncData;
- (void)timerDidFire:(id)arg1;
- (int)totalHomes;
- (int)totalTransientPeerDevices;
- (void)updateCloudDataSyncState:(BOOL)arg1;
- (void)updateDecryptionFailed:(BOOL)arg1;
- (void)updateNetworkConnectivity:(BOOL)arg1;
- (void)updateServerTokenAvailable:(BOOL)arg1;
- (void)updateTotalHomes:(int)arg1;
- (id)uuid;

@end
