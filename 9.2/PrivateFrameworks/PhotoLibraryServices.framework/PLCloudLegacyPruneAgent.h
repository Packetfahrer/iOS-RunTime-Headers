/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLegacyPruneAgent : PLCloudScenarioProducer {
    NSObject<OS_dispatch_queue> * _agentQueue;
    long  _lastPruneRequest;
    PLPhotoLibrary * _localLibrary;
    PLCloudPhotoLibraryManager * _remoteLibrary;
    struct { 
        int retries; 
        int state; 
    }  _walkStatus;
}

@property (retain) PLPhotoLibrary *localLibrary;
@property (retain) PLCloudPhotoLibraryManager *remoteLibrary;

- (void)_beginPruningResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned int)arg3 then:(id /* block */)arg4;
- (void)_runOnAgentQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)_runOnAgentQueueWithTransaction:(id)arg1 delay:(double)arg2 block:(id /* block */)arg3;
- (void)activate;
- (unsigned int)batchSize;
- (void)beginPruningResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 then:(id /* block */)arg3;
- (void)cacheDeleteRequestReceived:(id)arg1;
- (void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned int)arg2 startingAtOffset:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)emergencyPrune;
- (id)init;
- (id)localLibrary;
- (void)pruneOlderMediums;
- (void)pruneOlderOriginals;
- (void)pruneResources;
- (void)pruneResources:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)pruneResourcesOfType:(unsigned int)arg1 createdBeforeDate:(id)arg2 then:(id /* block */)arg3;
- (void)pruneResourcesOfType:(unsigned int)arg1 then:(id /* block */)arg2;
- (BOOL)pruningEnabled;
- (id)remoteLibrary;
- (void)resetWalkStatus;
- (void)runningCloudMaintenance:(id)arg1;
- (void)setLocalLibrary:(id)arg1;
- (void)setRemoteLibrary:(id)arg1;
- (void)settingsChanged:(id)arg1;
- (BOOL)spaceAvailable:(long long*)arg1 totalSpace:(long long*)arg2;
- (void)systemStarted:(id)arg1;
- (int)typeToIndex:(unsigned int)arg1;

@end
