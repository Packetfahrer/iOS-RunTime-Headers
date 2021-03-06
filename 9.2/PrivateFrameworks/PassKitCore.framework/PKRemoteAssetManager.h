/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteAssetManager : NSObject {
    NSURL * _directoryURL;
    NSMutableDictionary * _manifestItemsByRelativeURL;
    NSObject<OS_dispatch_queue> * _queue;
    NSURLSession * _urlSession;
}

- (void)_flushBundleCaches;
- (BOOL)addRemoteAssetData:(id)arg1 forManifestItem:(id)arg2 error:(id*)arg3;
- (BOOL)assetExistsLocally:(id)arg1;
- (void)cancelDownloads;
- (void)dealloc;
- (id)deviceSpecificItems;
- (id)deviceSpecificItemsForScreenScale:(float)arg1 suffix:(id)arg2;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)downloadRemoteAssetsWithScreenScale:(float)arg1 suffix:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithFileURL:(id)arg1 queue:(id)arg2;
- (id)itemWithRelativePath:(id)arg1;
- (id)remoteAssetManifests;

@end
