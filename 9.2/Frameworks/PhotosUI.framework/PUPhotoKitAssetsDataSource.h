/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitAssetsDataSource : PUAssetsDataSource {
    NSCache * __assetReferenceByIndexPathCache;
    PUPhotosDataSourceChange * _change;
    NSString * _changeFromDataSourceIdentifier;
    PUPhotosDataSource * _photosDataSource;
}

@property (nonatomic, readonly) NSCache *_assetReferenceByIndexPathCache;
@property (nonatomic, readonly) PUPhotosDataSourceChange *change;
@property (nonatomic, readonly) NSString *changeFromDataSourceIdentifier;
@property (nonatomic, readonly) PUPhotosDataSource *photosDataSource;

- (void).cxx_destruct;
- (id)_assetReferenceByIndexPathCache;
- (id)assetAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (id)badgeInfoForAssetAtIndexPath:(id)arg1;
- (id)change;
- (id)changeFromDataSourceIdentifier;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (BOOL)couldAssetReferenceAppear:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)indexPathForAssetReference:(id)arg1;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3;
- (BOOL)isEmpty;
- (int)numberOfAssetsWithMaximum:(int)arg1;
- (int)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)photosDataSource;
- (id)startingAssetReference;

@end
