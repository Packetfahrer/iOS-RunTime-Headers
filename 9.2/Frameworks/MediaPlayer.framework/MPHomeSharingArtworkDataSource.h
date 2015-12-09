/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    HSHomeSharingLibrary * _library;
}

@property (nonatomic, retain) HSHomeSharingLibrary *library;

- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)library;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)requestForCatalog:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)setLibrary:(id)arg1;
- (BOOL)shouldLookForLargerRepresentationsWhenBestRepresentationIsUnavailable;
- (id)supportedSizesForCatalog:(id)arg1;

@end
