/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController {
    SUBarButtonItem * _cancelButtonItem;
    NSString * _cancelButtonTitle;
    SKProductPageViewController * _productPageViewController;
    BOOL  _showsCancelButton;
}

@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (nonatomic) SKProductPageViewController *productPageViewController;
@property (nonatomic) BOOL showsCancelButton;

- (void).cxx_destruct;
- (void)_addCancelButtonToNavigationItem:(id)arg1;
- (id)_cancelButtonItem;
- (void)_storeSheetCancelButtonAction:(id)arg1;
- (id)cancelButtonTitle;
- (void)dealloc;
- (void)handleFailureWithError:(id)arg1;
- (BOOL)presentDialogForError:(id)arg1 pendUntilVisible:(BOOL)arg2;
- (id)productPageViewController;
- (void)resetNavigationItem:(id)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setProductPageViewController:(id)arg1;
- (void)setShowsCancelButton:(BOOL)arg1;
- (BOOL)showsCancelButton;
- (void)viewWillLayoutSubviews;

@end
