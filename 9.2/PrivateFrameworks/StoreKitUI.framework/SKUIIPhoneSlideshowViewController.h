/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIIPhoneSlideshowViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {
    SKUIClientContext * _clientContext;
    SKUIGiftThemeCollectionView * _collectionView;
    <SKUISlideshowViewControllerDataSource> * _dataSource;
    <SKUISlideshowViewControllerDelegate> * _delegate;
    NSMutableArray * _images;
    int  _indexToScrollToOnLoadView;
    NSOperationQueue * _operationQueue;
    UIPageControl * _pageControl;
    NSMutableDictionary * _placeholderImages;
    NSOperationQueue * _placeholderQueue;
    BOOL  _respondsToCount;
    BOOL  _respondsToImage;
    BOOL  _respondsToURL;
    SKUIScreenshotDataConsumer * _screenshotConsumer;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) int currentIndex;
@property (nonatomic) <SKUISlideshowViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUISlideshowViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneAction:(id)arg1;
- (id)_imageAtIndex:(int)arg1;
- (id)_placeholderImageAtIndex:(int)arg1;
- (void)_reloadPageControl;
- (void)_reloadSize;
- (void)_setImage:(id)arg1 atIndex:(int)arg2;
- (void)_setLowResImage:(id)arg1 atIndex:(int)arg2;
- (id)clientContext;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)currentIndex;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setCurrentIndex:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;

@end
