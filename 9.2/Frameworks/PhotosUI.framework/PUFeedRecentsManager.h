/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUFeedRecentsManager : NSObject <PLAssetChangeObserver, PLCloudFeedEntriesObserver, PLPhotoLibraryShouldReloadObserver> {
    NSOrderedSet * __cachedRecentAssets;
    NSArray * __cachedRecentPHAssets;
    int  _count;
    <PUFeedRecentsManagerDelegate> * _delegate;
    NSMutableArray * _pendingAssetsChangeNotifications;
    NSMutableArray * _pendingFeedEntriesChangeNotifications;
    PLPhotoLibrary * _photoLibrary;
}

@property (setter=_setCachedRecentAssets:, nonatomic, copy) NSOrderedSet *_cachedRecentAssets;
@property (setter=_setCachedRecentPHAssets:, nonatomic, copy) NSArray *_cachedRecentPHAssets;
@property (nonatomic) int count;
@property (nonatomic) <PUFeedRecentsManagerDelegate> *delegate;
@property (nonatomic, retain) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly, copy) NSOrderedSet *recentAssets;
@property (nonatomic, readonly, copy) NSArray *recentPHAssets;

- (void).cxx_destruct;
- (id)_cachedRecentAssets;
- (id)_cachedRecentPHAssets;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_invalidateCachedRecentAssets;
- (void)_setCachedRecentAssets:(id)arg1;
- (void)_setCachedRecentPHAssets:(id)arg1;
- (void)_setCount:(int)arg1;
- (void)_setPhotoLibrary:(id)arg1;
- (BOOL)_updateCachedRecentAssets;
- (void)assetsDidChange:(id)arg1;
- (void)cloudFeedEntriesDidChange:(id)arg1;
- (int)count;
- (void)dealloc;
- (id)delegate;
- (id)initWithPhotoLibrary:(id)arg1 count:(int)arg2;
- (id)photoLibrary;
- (id)recentAssets;
- (id)recentPHAssets;
- (void)setDelegate:(id)arg1;
- (void)shouldReload:(id)arg1;

@end
