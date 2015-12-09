/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacePhotosView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    int  _actualPage;
    UILabel * _authorLabel;
    UIVisualEffectView * _bottomEffectView;
    UIView * _bottomView;
    <MKPlacePhotosViewDelegate> * _delegate;
    UILabel * _descriptionLabel;
    NSArray * _fontConstraints;
    UIImageView * _gradientView;
    UILabel * _licenseLabel;
    UINavigationBar * _navBar;
    NSLayoutConstraint * _navBarHeightConstraint;
    UINavigationItem * _navItem;
    UILabel * _pageInfoLabel;
    NSMutableArray * _photoViews;
    NSArray * _photos;
    UIScrollView * _scrollView;
    NSMutableArray * _singlePhotoArray;
    NSLayoutConstraint * _statusBarHeightConstraint;
    unsigned int  _textDisplayedForPage;
    UIVisualEffectView * _topView;
}

@property (nonatomic) unsigned int currentPage;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPlacePhotosViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)backTapped;
- (void)contentSizeDidChange;
- (unsigned int)currentPage;
- (void)dealloc;
- (id)delegate;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)headerTitleForPage:(unsigned int)arg1;
- (void)hideToView:(id)arg1;
- (unsigned int)indexForPhotoAtXOffset:(float)arg1 pageWidth:(float)arg2 numberOfPhotos:(unsigned int)arg3;
- (id)initWithPhotos:(id)arg1;
- (void)layoutSubviews;
- (void)memoryWarning:(id)arg1;
- (void)photoAttributionTapped;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCurrentPage:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNavBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showPhotoAt:(unsigned int)arg1;
- (void)startActivityIndicator;
- (void)stopActivityIndicator;
- (void)toggleNavBar;
- (void)updateDetails;
- (void)updateStatusBarConstraint;
- (void)updateTextForPage:(unsigned int)arg1;
- (void)willEnterForeground:(id)arg1;
- (float)xPositionForPhotoAtIndex:(unsigned int)arg1 numberOfPhotos:(unsigned int)arg2 pageWidth:(float)arg3;

@end
