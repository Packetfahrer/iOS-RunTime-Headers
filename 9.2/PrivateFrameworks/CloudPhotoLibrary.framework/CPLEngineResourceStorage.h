/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {
    CPLEngineFileStorage * _fileStorage;
    NSMutableSet * _identitiesToCommit;
    NSMutableSet * _identitiesToDelete;
    NSURL * _tempFolderURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CPLEngineFileStorage *fileStorage;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)compactWithError:(id*)arg1;
- (id)createFileURLForUploadForResource:(id)arg1 error:(id*)arg2;
- (id)createTempDestinationURLForResource:(id)arg1 error:(id*)arg2;
- (id)fileStorage;
- (BOOL)hasResource:(id)arg1;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (BOOL)markResourceAsUploaded:(id)arg1 fromURL:(id)arg2 error:(id*)arg3;
- (BOOL)markResourceDoesNotNeedToBeUploaded:(id)arg1 error:(id*)arg2;
- (BOOL)markResourceFailedToUpload:(id)arg1 fromURL:(id)arg2 error:(id*)arg3;
- (BOOL)openWithError:(id*)arg1;
- (BOOL)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id*)arg3;
- (BOOL)resetWithError:(id*)arg1;
- (id)retainFileURLForResource:(id)arg1 error:(id*)arg2;
- (unsigned long long)sizeOfOriginalResourcesToUpload;
- (unsigned long long)sizeOfResourcesToUpload;
- (BOOL)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id*)arg3;
- (BOOL)storeResource:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (BOOL)storeResourceForUpload:(id)arg1 error:(id*)arg2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
