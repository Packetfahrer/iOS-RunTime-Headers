/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoBrowserControllerSpec : NSObject {
    PUAvalancheReviewControllerSpec * _avalancheReviewControllerSpec;
}

@property (nonatomic, readonly) PUAvalancheReviewControllerSpec *avalancheReviewControllerSpec;
@property (nonatomic, readonly) BOOL isInCamera;
@property (nonatomic, readonly) int photoThumbnailFormat;
@property (nonatomic, readonly) BOOL shouldShowAirplayItem;
@property (nonatomic, readonly) BOOL shouldShowBackButtonTitle;
@property (nonatomic, readonly) BOOL shouldShowDeleteItem;
@property (nonatomic, readonly) BOOL shouldShowEditItem;
@property (nonatomic, readonly) BOOL shouldShowPhotoScrubber;
@property (nonatomic, readonly) BOOL shouldShowShareItem;
@property (nonatomic, readonly) BOOL shouldShowSlideshowItem;
@property (nonatomic, readonly) unsigned int supportedInterfaceOrientations;
@property (nonatomic, readonly) BOOL wantsCompactCommentsLayout;
@property (nonatomic, readonly) BOOL wantsSubtitleForPhotobrowserTitleInLandscape;

- (void).cxx_destruct;
- (id)avalancheReviewControllerSpec;
- (BOOL)isInCamera;
- (id)newPhotoBrowserControllerForPhotoAtIndexPath:(id)arg1 assetCollections:(id)arg2 dataSource:(id)arg3;
- (id)newPhotoBrowserZoomTransition;
- (int)photoThumbnailFormat;
- (BOOL)shouldShowAirplayItem;
- (BOOL)shouldShowBackButtonTitle;
- (BOOL)shouldShowDeleteItem;
- (BOOL)shouldShowEditItem;
- (BOOL)shouldShowPhotoScrubber;
- (BOOL)shouldShowShareItem;
- (BOOL)shouldShowSlideshowItem;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)wantsCompactCommentsLayout;
- (BOOL)wantsSubtitleForPhotobrowserTitleInLandscape;

@end
