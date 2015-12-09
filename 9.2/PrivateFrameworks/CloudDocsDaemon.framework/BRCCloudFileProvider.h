/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCloudFileProvider : BRCFileProvider <BRCReachabilityDelegate, BRItemNotificationReceiving> {
    NSMutableDictionary * _downloadTrackersByDocID;
    NSMutableDictionary * _pipeByKey;
    NSMutableDictionary * _readersURLAndIDToDocID;
    NSMutableDictionary * _recursiveReadsByURLAndID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 session:(id)arg3 recursively:(BOOL)arg4 completionHandler:(id /* block */)arg5;
- (void)_cancelCallBackForDocID:(id)arg1 key:(id)arg2;
- (void)_cancelProvidingItemAtURL:(id)arg1 toReaderWithID:(id)arg2;
- (id)_fileReactorID;
- (BOOL)_hasFilePresenterForURL:(id)arg1;
- (BOOL)_hasPendingReaderForDocumentID:(id)arg1;
- (id)_physicalURLForURL:(id)arg1;
- (void)_provideItemAtURL:(id)arg1 toReaderWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_registerPresenterForItemAtURL:(id)arg1 key:(id)arg2 session:(id)arg3;
- (unsigned long long)_spaceRequiredForReaders;
- (void)_unregisterPresenterForKey:(id)arg1;
- (void)_waitForDownloadOfDirectory:(id)arg1 key:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_waitForDownloadOfDocument:(id)arg1 key:(id)arg2 requireCurrent:(BOOL)arg3 completionHandler:(id /* block */)arg4;
- (void)cancelAllCoordinationProviders;
- (void)document:(id)arg1 didCompleteDownloadWithError:(id)arg2;
- (void)documentWasMadeLive:(id)arg1;
- (void)dumpToContext:(id)arg1;
- (id)initWithURL:(id)arg1;
- (oneway void)invalidate;
- (void)networkReachabilityChanged:(BOOL)arg1;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id /* block */)arg4;

@end
