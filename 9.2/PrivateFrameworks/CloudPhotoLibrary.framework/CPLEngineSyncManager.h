/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineSyncManager : NSObject <CPLAbstractObject, CPLBackgroundDownloadsTaskDelegate, CPLBackgroundUploadsTaskDelegate, CPLEngineComponent, CPLEngineSyncEmergencyTaskDelegate, CPLMinglePulledChangesTaskDelegate, CPLPullFromTransportTaskDelegate, CPLPushToTransportTaskDelegate> {
    NSMutableArray * _archivedManagementTasks;
    CPLBackgroundDownloadsTask * _backgroundDownloadsTask;
    CPLBackgroundUploadsTask * _backgroundUploadsTask;
    id /* block */  _closingCompletionHandler;
    NSMutableDictionary * _completionHandlerPerTaskIdentifier;
    CPLEngineLibrary * _engineLibrary;
    BOOL  _foreground;
    BOOL  _hasTransactionForSyncSession;
    NSError * _lastError;
    NSMutableArray * _lastErrors;
    NSString * _libraryZoneName;
    NSObject<OS_dispatch_queue> * _lock;
    CPLEngineSyncEmergencyTask * _managementTask;
    CPLMinglePulledChangesTask * _mingleTask;
    CPLPlatformObject * _platformObject;
    CPLPullFromTransportTask * _prePullTask;
    CPLPullFromTransportTask * _pullTask;
    CPLPushToTransportTask * _pushTask;
    NSMutableArray * _setupBarriers;
    BOOL  _setupIsDone;
    <CPLEngineTransportSetupTask> * _setupTask;
    unsigned int  _shouldRestartSessionFromState;
    BOOL  _shouldTryToMingleImmediately;
    unsigned int  _state;
    <CPLEngineStoreUserIdentifier> * _transportUserIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (nonatomic) BOOL shouldTryToMingleImmediately;
@property (setter=_setState:, nonatomic) unsigned int state;
@property (readonly) Class superclass;

+ (id)descriptionForState:(unsigned int)arg1;
+ (id)platformImplementationProtocol;
+ (id)shortDescriptionForState:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_advanceToNextStateLocked;
- (void)_cancelAllTasksForBackgroundDownloads;
- (void)_cancelAllTasksForBackgroundUploads;
- (void)_cancelAllTasksForManagement;
- (void)_cancelAllTasksForPrePull;
- (void)_cancelAllTasksForPull;
- (void)_cancelAllTasksForPush:(BOOL)arg1;
- (void)_cancelAllTasksForSetup;
- (void)_cancelAllTasksLocked;
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg1;
- (id)_descriptionForBackgroundDownloadsTasks;
- (id)_descriptionForBackgroundUploadsTasks;
- (id)_descriptionForCurrentState;
- (id)_descriptionForLaunchedTasks;
- (id)_descriptionForManagementTasks;
- (id)_descriptionForPrePullTasks;
- (id)_descriptionForPullTasks;
- (id)_descriptionForPushTasks;
- (id)_descriptionForSetupTasks;
- (BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3;
- (BOOL)_didFinishBackgroundUploadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3;
- (BOOL)_didFinishManagementTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3;
- (BOOL)_didFinishPrePullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3;
- (BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3;
- (BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3;
- (BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(BOOL*)arg2;
- (BOOL)_launchManagementTask;
- (BOOL)_launchNecessaryTasksForBackgroundDownloads;
- (BOOL)_launchNecessaryTasksForBackgroundUploads;
- (BOOL)_launchNecessaryTasksForCurrentStateLocked;
- (BOOL)_launchNecessaryTasksForPrePull;
- (BOOL)_launchNecessaryTasksForPull;
- (BOOL)_launchNecessaryTasksForPush;
- (BOOL)_launchSetupTask;
- (void)_loadManagementTasks;
- (void)_moveAllTasksToBackgroundLocked;
- (void)_notifyEndOfSyncSession;
- (BOOL)_prepareAndLaunchSyncTask:(id*)arg1;
- (float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2;
- (float)_progressForBackgroundUploadsTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPrePullTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPullTask:(id)arg1 progress:(float)arg2;
- (float)_progressForPushTask:(id)arg1 progress:(float)arg2;
- (void)_releasePowerAssertionForMingleTaskIfNecessary;
- (void)_resetErrorForSyncSession;
- (void)_restartSyncSessionFromStateLocked:(unsigned int)arg1 cancelIfNecessary:(BOOL)arg2;
- (void)_retainPowerAssertionForMingleTaskIfNecessary;
- (void)_saveManagementTasks;
- (void)_setErrorForSyncSession:(id)arg1;
- (void)_setState:(unsigned int)arg1;
- (void)addSetupBarrier:(id /* block */)arg1;
- (void)beginClientWork:(id)arg1;
- (void)cancelCurrentSyncSession;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id /* block */)arg2;
- (id)componentName;
- (void)endClientWork:(id)arg1;
- (id)engineLibrary;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)arg1;
- (void)getStatusWithCompletionHandler:(id /* block */)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)kickOffSyncSession;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)platformObject;
- (void)resetTransportUserIdentifierAndRestartSync:(BOOL)arg1;
- (void)setShouldTryToMingleImmediately:(BOOL)arg1;
- (void)setSyncSessionShouldBeForeground:(BOOL)arg1;
- (BOOL)shouldTryToMingleImmediately;
- (void)startEmergencyTask:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)startSyncSessionWithMinimalPhase:(unsigned int)arg1;
- (unsigned int)state;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3;
- (id)task:(id)arg1 wantsToDownloadBatchesFromSyncAnchor:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)task:(id)arg1 wantsToPushBatch:(id)arg2 progressBlock:(id /* block */)arg3 continuationBlock:(id /* block */)arg4;

@end
