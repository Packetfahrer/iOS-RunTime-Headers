/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLegacyDownloadAgent : PLCloudScenarioProducer {
    NSDate * __lastRunDate;
    NSObject<OS_dispatch_queue> * _agentQueue;
    BOOL  _initialDownloadDone;
    PLPhotoLibrary * _localLibrary;
    PLCloudPhotoLibraryManager * _remoteLibrary;
    BOOL  _running;
    BOOL  _shouldRunAgainWhenFinished;
    BOOL  _waitingForInitialDownloadDone;
    struct { 
        int retries; 
        int state; 
    }  _walkStatus;
}

@property (copy) NSDate *_lastRunDate;
@property (nonatomic, retain) PLPhotoLibrary *localLibrary;
@property (retain) PLCloudPhotoLibraryManager *remoteLibrary;
@property (getter=isRunning) BOOL running;
@property BOOL shouldRunAgainWhenFinished;

- (void)_beginPopulatingResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 startingAtOffset:(unsigned int)arg3 then:(id /* block */)arg4;
- (void)_checkWalkStatusIfNeeded;
- (void)_handlePrefetchFinished;
- (id)_lastRunDate;
- (void)_monitorForCompletion;
- (void)_prefetchAllThumbnailsAndLastWeeksFullAndOriginals;
- (void)_prefetchLastWeeksFullAndOriginals;
- (void)_prefetchLastWeeksOriginals;
- (void)_prefetchResources;
- (void)_regulatedPrefetch;
- (void)_resetWalkStatus;
- (void)_runOnAgentQueueWithTransaction:(id)arg1 block:(id /* block */)arg2;
- (void)_runOnAgentQueueWithTransaction:(id)arg1 delay:(double)arg2 block:(id /* block */)arg3;
- (void)_tryAgainLater;
- (void)_waitForDownloadDoneIfNeeded;
- (void)activate;
- (unsigned int)batchSize;
- (void)beginPopulatingResourcesOfType:(unsigned int)arg1 withFetchRequest:(id)arg2 then:(id /* block */)arg3;
- (void)cplResourcesForFetchRequest:(id)arg1 ofType:(unsigned int)arg2 startingAtOffset:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (void)downloadResources:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;
- (BOOL)isRunning;
- (id)localLibrary;
- (void)metadataStable:(id)arg1;
- (id)remoteLibrary;
- (void)setLocalLibrary:(id)arg1;
- (void)setRemoteLibrary:(id)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)setShouldRunAgainWhenFinished:(BOOL)arg1;
- (void)set_lastRunDate:(id)arg1;
- (BOOL)shouldRunAgainWhenFinished;
- (void)systemStarted:(id)arg1;
- (int)typeToIndex:(unsigned int)arg1;

@end
