/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUWebViewController : SUViewController <SUWebViewDelegate, SUWebViewManagerDelegate> {
    SSMutableAuthenticationContext * _authenticationContext;
    SUDelayedNavigationItem * _delayedNavigationItem;
    NSURL * _displayedURL;
    BOOL  _hasEverAppeared;
    int  _lastKnownOrientation;
    id /* block */  _loadBlock;
    SUMescalSession * _mescalSession;
    SUObjectPool * _objectPool;
    ISURLRequestPerformance * _performanceMetrics;
    int  _scheduledOrientation;
    SUStorePageProtocol * _storePageProtocol;
    int  _style;
    NSURL * _url;
    BOOL  _viewIsReady;
    SUWebView * _webView;
    SUWebViewManager * _webViewManager;
}

@property (getter=_mescalSession, setter=_setMescalSession:, nonatomic, retain) SUMescalSession *_mescalSession;
@property (getter=_performanceMetrics, setter=_setPerformanceMetrics:, nonatomic, retain) ISURLRequestPerformance *_performanceMetrics;
@property (nonatomic, copy) SSAuthenticationContext *authenticationContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) int style;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewIsReady;
@property (nonatomic, readonly) SUWebView *webView;

- (void)_addPlaceholderBackgroundView;
- (void)_applySavedScrollOffsetIfPossible;
- (void)_applyScriptProperties:(id)arg1;
- (id)_defaultBackgroundColor;
- (void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_getURLRequestForOperation:(id)arg1 block:(id /* block */)arg2;
- (void)_loadURLRequest:(id)arg1;
- (void)_loadWithURLOperation:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)_mescalSession;
- (id)_performanceMetrics;
- (id)_placeholderBackgroundView;
- (void)_prepareToLoadURL:(id)arg1;
- (void)_reloadBackgroundViewPropertiesWithScriptProperties:(id)arg1;
- (void)_reloadObjectPool;
- (void)_reloadPlaceholderBackgroundView;
- (void)_reloadUI;
- (void)_removePlaceholderBackgroundView;
- (void)_sendOrientationWillChangeToInterfaceOrientation:(int)arg1;
- (void)_setExistingNavigationItem:(id)arg1;
- (void)_setLastKnownOrientation:(int)arg1;
- (void)_setMescalSession:(id)arg1;
- (void)_setPerformanceMetrics:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (id)authenticationContext;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (id)copyScriptProperties;
- (void)dealloc;
- (id)displayedURL;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentBounds;
- (void)invalidate;
- (void)keyboardDidHideWithInfo:(id)arg1;
- (void)keyboardWillShowWithInfo:(id)arg1;
- (void)loadView;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (id)navigationItemForScriptInterface;
- (id)newRotationController;
- (id)newScriptInterface;
- (id)newScriptInterfaceForWebViewManager:(id)arg1;
- (void)parentViewControllerHierarchyDidChange;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (void)setAuthenticationContext:(id)arg1;
- (void)setScriptProperties:(id)arg1;
- (void)setStorePageProtocol:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setViewIsReady:(BOOL)arg1;
- (void)storePageCleanupBeforeTearDown;
- (id)storePageProtocol;
- (void)storePageProtocolDidChange;
- (int)style;
- (id)viewControllerForWebViewManager:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)viewIsReady;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)webView;
- (void)webViewManager:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewManager:(id)arg1 didReceivePrimaryResponse:(id)arg2;
- (void)webViewManager:(id)arg1 didReceiveTitle:(id)arg2;
- (void)webViewManager:(id)arg1 didRejectInvalidRequest:(id)arg2;
- (void)webViewManager:(id)arg1 webDocumentViewDidSetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)webViewManager:(id)arg1 willInjectScriptInterface:(id)arg2;
- (void)webViewManagerDidFinishLoad:(id)arg1;
- (void)webViewManagerDidStartLoad:(id)arg1;

@end
