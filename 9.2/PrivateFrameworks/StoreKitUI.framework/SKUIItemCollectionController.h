/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItemCollectionController : NSObject <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIResourceLoaderDelegate> {
    SKUIItemArtworkContext * _artworkContext;
    SKUIResourceLoader * _artworkLoader;
    SKUIClientContext * _clientContext;
    <SKUIItemCollectionDelegate> * _delegate;
    BOOL  _delegateProvidesScreenshots;
    NSMutableDictionary * _iconArtworkRequestIDs;
    SKUIStyledImageDataConsumer * _iconDataConsumer;
    NSArray * _items;
    SKUIScreenshotDataConsumer * _landscapeScreenshotDataConsumer;
    UIImage * _landscapeScreenshotPlaceholderImage;
    int  _numberOfItemsPerPage;
    float  _numberOfPagesToCacheAhead;
    UIImage * _placeholderImage;
    SKUIScreenshotDataConsumer * _portraitScreenshotDataConsumer;
    UIImage * _portraitScreenshotPlaceholderImage;
    NSMutableDictionary * _screenshotArtworkRequestIDs;
}

@property (nonatomic, retain) SKUIItemArtworkContext *artworkContext;
@property (nonatomic, retain) SKUIResourceLoader *artworkLoader;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIItemCollectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SKUIStyledImageDataConsumer *iconDataConsumer;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, retain) SKUIScreenshotDataConsumer *landscapeScreenshotDataConsumer;
@property (nonatomic) int numberOfItemsPerPage;
@property (nonatomic) float numberOfPagesToCacheAhead;
@property (nonatomic, retain) SKUIScreenshotDataConsumer *portraitScreenshotDataConsumer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_artworkLoader;
- (void)_enumerateVisibleCellLayoutsWithBlock:(id /* block */)arg1;
- (id)_iconArtworkRequestWithItem:(id)arg1;
- (id)_initSKUIItemCollectionController;
- (BOOL)_loadArtworkForItem:(id)arg1 reason:(int)arg2;
- (void)_memoryWarningNotification:(id)arg1;
- (id)_placeholderImageForItem:(id)arg1;
- (id)_placeholderImageForScreenshot:(id)arg1;
- (void)_reloadForItemStateChange:(id)arg1;
- (void)_reloadForRestrictionsChange;
- (void)_reloadScreenshotForCellLayout:(id)arg1 item:(id)arg2 isRestricted:(BOOL)arg3;
- (id)_screenshotArtworkRequestWithItem:(id)arg1;
- (id)_screenshotForItem:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleItemRange;
- (id)artworkContext;
- (id)artworkLoader;
- (void)artworkLoaderDidIdle:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)cancelArtworkLoadForItemIndex:(int)arg1;
- (void)configureCellLayout:(id)arg1 forIndex:(int)arg2;
- (void)dealloc;
- (id)delegate;
- (id)iconDataConsumer;
- (id)init;
- (id)initWithClientContext:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (id)items;
- (id)landscapeScreenshotDataConsumer;
- (void)loadNextPageOfArtworkWithReason:(int)arg1;
- (int)numberOfItemsPerPage;
- (float)numberOfPagesToCacheAhead;
- (id)performActionForItemAtIndex:(int)arg1;
- (id)portraitScreenshotDataConsumer;
- (void)precacheNextPageArtworkForOffset:(struct CGPoint { float x1; float x2; })arg1 direction:(float)arg2;
- (void)removeAllCachedResources;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { float x1; float x2; })arg2 targetContentOffset:(inout struct CGPoint { float x1; float x2; }*)arg3;
- (void)setArtworkContext:(id)arg1;
- (void)setArtworkLoader:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIconDataConsumer:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setLandscapeScreenshotDataConsumer:(id)arg1;
- (void)setNumberOfItemsPerPage:(int)arg1;
- (void)setNumberOfPagesToCacheAhead:(float)arg1;
- (void)setPortraitScreenshotDataConsumer:(id)arg1;

@end
