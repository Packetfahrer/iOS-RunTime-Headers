/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDaemon : NSObject <HDDataCollectionManagerDelegate, HDDatabaseMigrationDelegate, HDDiagnosticObject, HDHealthDaemon, NSXPCListenerDelegate> {
    HDAchievementDoctorManager * _achievementDoctorManager;
    HDAppLauncher * _appLauncher;
    HDAuthorizationManager * _authorizationManager;
    HDBackgroundTaskScheduler * _backgroundTaskScheduler;
    HDCoachingDiagnosticManager * _coachingDiagnosticManager;
    HDContentProtectionManager * _contentProtectionManager;
    NSMutableArray * _daemonLaunchObservers;
    BOOL  _daemonReady;
    HDDataCollectionManager * _dataCollectMgr;
    HDDataManager * _dataMgr;
    HDDataProvenanceManager * _dataProvenanceManager;
    HDDatabase * _database;
    HDDatabasePruningManager * _databasePruningManager;
    HDHealthDeviceManager * _deviceManager;
    struct MGNotificationTokenStruct { } * _deviceNameChangesToken;
    NSString * _homeDirectoryPath;
    HDMetadataManager * _metadataManager;
    HDMigrationManager * _migrationManager;
    HDNanoSyncManager * _nanoSyncManager;
    <HDPairedWatchBundleIdentifierProvider> * _pairedWatchBundleIDProvider;
    HDPluginManager * _pluginManager;
    HDProcessStateManager * _processStateManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _servers;
    NSXPCListener * _serviceListener;
    HDDeviceManager * _sourceDeviceManager;
    HDSourceManager * _sourceManager;
    HDAppSubscriptionManager * _subscriptionManager;
    HDDaemonSyncEngine * _syncEngine;
    HDUnitPreferencesManager * _unitPreferencesManager;
    HDUserCharacteristicsManager * _userCharacteristicsManager;
    <HDViewOnWakeService> * _viewOnWakeService;
    HDWorkoutManager * _workoutManager;
}

@property (nonatomic, retain) HDAppLauncher *appLauncher;
@property (nonatomic, retain) HDAuthorizationManager *authorizationManager;
@property (readonly) HDBackgroundTaskScheduler *backgroundTaskScheduler;
@property (nonatomic, retain) HDCoachingDiagnosticManager *coachingDiagnosticManager;
@property (readonly) HDContentProtectionManager *contentProtectionManager;
@property (nonatomic, retain) HDDataCollectionManager *dataCollectMgr;
@property (nonatomic, retain) HDDataManager *dataMgr;
@property (readonly) HDDataProvenanceManager *dataProvenanceManager;
@property (nonatomic, retain) HDDatabase *database;
@property (nonatomic, retain) HDDatabasePruningManager *databasePruningManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HDHealthDeviceManager *deviceManager;
@property (readonly) unsigned int hash;
@property (readonly) <HDHealthDataCollectionManager> *healthDataCollectionManager;
@property (readonly) <HDHealthDataManager> *healthDataManager;
@property (readonly) <HDHealthDatabase> *healthDatabase;
@property (readonly) <HDDaemonDeviceManager> *healthDeviceManager;
@property (readonly) <HDHealthMetadataManager> *healthMetadataManager;
@property (readonly) HDDeviceManager *healthSourceDeviceManager;
@property (readonly) HDSourceManager *healthSourceManager;
@property (readonly) NSString *homeDirectoryPath;
@property (readonly) BOOL isAppleWatch;
@property (nonatomic, retain) HDMetadataManager *metadataManager;
@property (nonatomic, retain) HDMigrationManager *migrationManager;
@property (nonatomic, retain) HDNanoSyncManager *nanoSyncManager;
@property (nonatomic) <HDPairedWatchBundleIdentifierProvider> *pairedWatchBundleIDProvider;
@property (readonly) HDPluginManager *pluginManager;
@property (readonly) HDProcessStateManager *processStateManager;
@property (nonatomic, retain) HDDeviceManager *sourceDeviceManager;
@property (nonatomic, retain) HDSourceManager *sourceManager;
@property (nonatomic, retain) HDAppSubscriptionManager *subscriptionManager;
@property (readonly) Class superclass;
@property (readonly) <HDSyncEngine> *syncEngine;
@property (nonatomic, retain) HDUnitPreferencesManager *unitPreferencesManager;
@property (readonly) HDUserCharacteristicsManager *userCharacteristicsManager;
@property (nonatomic, retain) <HDViewOnWakeService> *viewOnWakeService;
@property (nonatomic, retain) HDWorkoutManager *workoutManager;

+ (BOOL)_shouldInitializeDaemon;

- (void).cxx_destruct;
- (void)_localeChanged:(id)arg1;
- (BOOL)_motionTrackingAvailable;
- (id)_newProcessStateManager;
- (id)_newUserCharacteristicsManager;
- (void)_notifyDaemonLaunchObservers;
- (void)_periodicUpdates;
- (BOOL)_persistDataAndNotify:(id)arg1 provenance:(id)arg2 error:(id*)arg3;
- (void)_registerForDeviceNameChanges;
- (void)_registerLaunchEventDynamicallyForNotification:(const char *)arg1;
- (void)_resetPrivacySettings;
- (void)_setUpDistnotedEventHandler;
- (void)_setUpLaunchEventHandler;
- (void)_setUpLaunchEventHandlerCompanion;
- (void)_setUpLaunchEventHandlers;
- (void)_setUpNotifydEventHandler;
- (void)_setUpSignalHandlers;
- (void)_setupMemoryWarningHandler;
- (id)_setupSignal:(int)arg1 handler:(id /* block */)arg2;
- (void)_terminating;
- (void)_terminationCleanup;
- (void)_unregisterLaunchEventDynamicallyForNotification:(const char *)arg1;
- (id)appLauncher;
- (id)authorizationManager;
- (id)backgroundTaskScheduler;
- (void)beginTransaction:(id)arg1;
- (id)coachingDiagnosticManager;
- (id)contentProtectionManager;
- (id)currentlyPairedWatchIdentifier;
- (id)dataCollectMgr;
- (id)dataMgr;
- (id)dataProvenanceManager;
- (id)database;
- (id)databaseMigratorWithDatabase:(id)arg1;
- (id)databasePruningManager;
- (void)dealloc;
- (id)deviceManager;
- (id)diagnosticDescription;
- (void)didUpdateActiveWorkoutServers;
- (void)endTransaction:(id)arg1;
- (BOOL)hasAnyActiveWorkouts;
- (id)healthDataCollectionManager;
- (id)healthDataManager;
- (BOOL)healthDataReceived:(id)arg1 provenance:(id)arg2 error:(id*)arg3;
- (id)healthDatabase;
- (id)healthDeviceManager;
- (id)healthMetadataManager;
- (id)healthSourceDeviceManager;
- (id)healthSourceManager;
- (id)homeDirectoryPath;
- (id)init;
- (id)initWithHomeDirectoryPath:(id)arg1;
- (id)initWithHomeDirectoryPath:(id)arg1 contentProtectionManager:(id)arg2 queue:(id)arg3;
- (void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1;
- (void)invalidateAndWait;
- (BOOL)isAppleWatch;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)metadataManager;
- (id)migrationManager;
- (id)nanoSyncManager;
- (id)newClientWithConnection:(id)arg1;
- (void)nukeAllWorkoutServers;
- (id)pairedWatchBundleIDProvider;
- (void)pauseAllActiveWorkoutsWithCompletion:(id /* block */)arg1;
- (void)performBlockWithPowerAssertionIdentifier:(id)arg1 transactionName:(id)arg2 powerAssertionInterval:(double)arg3 block:(id /* block */)arg4;
- (BOOL)persistAndNotifyDataObject:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (BOOL)persistAndNotifyDataObjects:(id)arg1 device:(id)arg2 error:(id*)arg3;
- (id)pluginDataCollectorsForCollectionManager:(id)arg1;
- (id)pluginManager;
- (id)processStateManager;
- (void)registerForDaemonReady:(id)arg1;
- (void)registerForLaunchNotification:(const char *)arg1;
- (void)runDaemon;
- (void)setAppLauncher:(id)arg1;
- (void)setAuthorizationManager:(id)arg1;
- (void)setCoachingDiagnosticManager:(id)arg1;
- (void)setDataCollectMgr:(id)arg1;
- (void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
- (void)setDataMgr:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setDatabasePruningManager:(id)arg1;
- (void)setDeviceManager:(id)arg1;
- (void)setMetadataManager:(id)arg1;
- (void)setMigrationManager:(id)arg1;
- (void)setNanoSyncManager:(id)arg1;
- (void)setPairedWatchBundleIDProvider:(id)arg1;
- (void)setPairedWatchBundleIdentifierProvider:(id)arg1;
- (void)setSourceDeviceManager:(id)arg1;
- (void)setSourceManager:(id)arg1;
- (void)setSubscriptionManager:(id)arg1;
- (void)setUnitPreferencesManager:(id)arg1;
- (void)setViewOnWakeService:(id)arg1;
- (void)setWorkoutManager:(id)arg1;
- (id)sourceDeviceManager;
- (id)sourceManager;
- (id)subscriptionManager;
- (void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(int)arg2 timeoutUntilDate:(id)arg3;
- (id)syncEngine;
- (void)syncImmediatelyWithReason:(id)arg1;
- (void)terminate;
- (id)unitPreferencesManager;
- (void)unregisterForLaunchNotification:(const char *)arg1;
- (void)updateActivityCacheForNewWorkoutSamples;
- (id)userCharacteristicsManager;
- (id)viewOnWakeService;
- (id)workoutManager;

@end
