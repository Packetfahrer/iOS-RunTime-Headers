/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, CPLLibraryManagerImplementation, NSXPCConnectionDelegate> {
    NSXPCConnection * _connection;
    BOOL  _diagnosticsEnabled;
    NSCountedSet * _disablingReasons;
    NSMutableDictionary * _downloadTasks;
    unsigned int  _foregroundCalls;
    int  _notifyToken;
    int  _openingStatus;
    NSMutableDictionary * _outstandingInvocations;
    unsigned int  _outstandingInvocationsCount;
    NSMutableArray * _pendingBlocksAfterOpening;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableDictionary * _uploadTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)clientProtocolInterface;
+ (id)daemonProtocolInterface;

- (void).cxx_destruct;
- (void)_dispatchBlockWhenOpen:(id /* block */)arg1;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(BOOL)arg2 withError:(id)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_reallyOpenWithCompletionHandler:(id /* block */)arg1;
- (BOOL)_setStatusFromDictionary:(id)arg1;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)addInfoToLog:(id)arg1;
- (void)backgroundDownloadDidFailForResource:(id)arg1;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)barrier;
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelTask:(id)arg1;
- (void)closeWithCompletionHandler:(id /* block */)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)compactFileCacheWithCompletionHandler:(id /* block */)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)deactivateWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)diagnosticsEnabled;
- (void)disableSynchronizationWithReason:(id)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(id /* block */)arg1;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)getCloudCacheForRecordWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id /* block */)arg1;
- (void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithAbstractObject:(id)arg1;
- (void)libraryManagerDidUpdateSizeOfResourcesToUploadToSize:(unsigned long long)arg1 sizeOfOriginalResourcesToUpload:(unsigned long long)arg2 numberOfImages:(unsigned int)arg3 numberOfVideos:(unsigned int)arg4 numberOfOtherItems:(unsigned int)arg5;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
- (void)publishResource:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (void)removeCloudLibraryWithCompletionHandler:(id /* block */)arg1;
- (void)resetCacheWithOption:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)resetStatus;
- (void)setDiagnosticsEnabled:(BOOL)arg1;
- (void)startSyncSession;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;

@end
