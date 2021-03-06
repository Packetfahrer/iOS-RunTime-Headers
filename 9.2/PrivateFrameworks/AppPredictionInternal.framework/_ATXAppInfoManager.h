/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppInfoManager : NSObject {
    NSMutableDictionary * _appInfo;
    _ATXDataStore * _dataStore;
    NSMutableDictionary * _infoMap;
    _ATXAppInstallMonitor * _installMonitor;
    NSDate * _lastLaunch;
    int  _launchCount;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  _rwlock;
    int  _spotlightLaunchCount;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addLaunchInfoForBundle:(id)arg1 withDate:(id)arg2 updateLaunchBlock:(id /* block */)arg3;
- (id)_getInfoOrCreateForBundleId:(id)arg1;
- (BOOL)_hasBeenLaunchedForBundleId:(id)arg1;
- (void)addInstallForBundleId:(id)arg1 withDate:(id)arg2;
- (void)addLaunchForBundleId:(id)arg1 withDate:(id)arg2;
- (void)addSpotlightLaunchForBundleId:(id)arg1 withDate:(id)arg2;
- (id)allAppsWithInstallDate;
- (id)appInfoForBundleId:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDataStore:(id)arg1;
- (id)initWithInMemoryStore;
- (id)installMonitor;
- (id)lastAppLaunch;
- (int)launchedAppCount;
- (void)receivedDataStoreResetNotification:(id)arg1;
- (void)registerForRestoreNotificationsFrom:(id)arg1;
- (void)removeAppInfoForBundleId:(id)arg1;
- (void)setupInMemoryCache;
- (void)train;
- (void)unregisterFromRestoreNotificationsFrom:(id)arg1;

@end
