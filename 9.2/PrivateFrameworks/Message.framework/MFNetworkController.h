/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate> {
    NSMutableSet * _backgroundWifiClients;
    NSMutableSet * _calls;
    BOOL  _data;
    NSString * _dataIndicator;
    BOOL  _dns;
    unsigned int  _flags;
    BOOL  _hasCellDataCapability;
    BOOL  _hasWiFiCapability;
    long  _interface;
    BOOL  _isRoamingAllowed;
    BOOL  _isWiFiEnabled;
    NSLock * _lock;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _prefsQueue;
    RadiosPreferences * _radiosPreferences;
    struct __SCNetworkReachability { } * _reachability;
    struct __CFRunLoop { } * _rl;
    struct __SCDynamicStore { } * _store;
    struct __CFRunLoopSource { } * _store_source;
    int  _symptomsToken;
    struct __CTServerConnection { } * _telephony;
    NSThread * _thread;
    struct __SCPreferences { } * _wiFiPreferences;
    void * _wifiManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) void*wifiManager;

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore { }*)arg2;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection { }*)arg3;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_inititializeWifiManager;
- (BOOL)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (struct { int x1; int x2; })_pollDataAndCallStatus_nts;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability { }*)arg2;
- (void)_setUpTelephony_nts;
- (void)_setupSymptons;
- (BOOL)_simulationOverrideForType:(unsigned int)arg1 actualValue:(BOOL)arg2;
- (void)_tearDownTelephony_nts;
- (void)_updateWifiClientType;
- (void)addBackgroundWifiClient:(id)arg1;
- (id)addNetworkObserverBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)airplaneModeChanged;
- (id)copyDiagnosticInformation;
- (int)dataStatus;
- (void)dealloc;
- (BOOL)inAirplaneMode;
- (id)init;
- (void)invalidate;
- (BOOL)is3GConnection;
- (BOOL)is4GConnection;
- (BOOL)isDataAvailable;
- (BOOL)isFatPipe;
- (BOOL)isNetworkUp;
- (BOOL)isOnWWAN;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)removeNetworkObserver:(id)arg1;
- (void)setWifiManager:(void*)arg1;
- (void*)wifiManager;

@end
