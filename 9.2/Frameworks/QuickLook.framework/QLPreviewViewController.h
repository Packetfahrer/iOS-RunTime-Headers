/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewViewController : UIViewController <QLPreviewItemInteractionDelegate, QLSwippableItemProtocol, UIDocumentPasswordViewDelegate> {
    UIView * _accessoryContainerView;
    QLGenericView * _airPlayPasswordView;
    float  _aspectRatio;
    NSLayoutConstraint * _bundleTopConstraint;
    struct { 
        int pid; 
        struct { 
            unsigned int val[8]; 
        } audit_token; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } contentFrame; 
    }  _clientContext;
    UIView * _contentContainerView;
    NSString * _contentType;
    QLDisplayBundle * _displayBundle;
    <QLPreviewItemInteractionDelegate> * _displayBundleDelegate;
    UIDocumentPasswordView * _documentPasswordView;
    NSLayoutConstraint * _documentPasswordViewKeyboardConstraint;
    int  _index;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _initialFrame;
    BOOL  _loadedWithPassword;
    NSString * _loadingTextForMissingFiles;
    float  _navigationBarVerticalOffset;
    BOOL  _needsReload;
    QLDisplayBundle * _newDisplayBundle;
    unsigned int  _orbMode;
    BOOL  _overlayHidden;
    <QLPreviewItem> * _previewItem;
    int  _previewMode;
    NSTimer * _progressTimer;
    QLProgressView * _progressView;
    float  _scaleFactor;
    UIView * _scalingView;
    BOOL  _shouldSwapDisplayBundles;
    BOOL  _swiping;
    BOOL  _visible;
}

@property (readonly) int airPlayMode;
@property (readonly) UIView *airPlayView;
@property struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; } clientContext;
@property (nonatomic, retain) NSString *contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) QLDisplayBundle *displayBundle;
@property <QLPreviewItemInteractionDelegate> *displayBundleDelegate;
@property (readonly) unsigned int hash;
@property int index;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } initialFrame;
@property (nonatomic) unsigned int orbMode;
@property (retain) <QLPreviewItem> *previewItem;
@property int previewMode;
@property (readonly) UIView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible;

- (void)_cancelScheduledShowProgressiveUI;
- (void)_hidePasswordView;
- (void)_hideProgressiveUI;
- (void)_keyboardVisibilityChanged:(id)arg1;
- (void)_layoutViews;
- (void)_prepareDisplayBundle:(id)arg1 preload:(BOOL)arg2 withHints:(id)arg3;
- (void)_refreshPreviewItem:(BOOL)arg1 withPassword:(id)arg2;
- (void)_removeDisplayBundles;
- (void)_scheduleShowProgressiveUI;
- (void)_showGenericDisplayBundleForPreviewItem:(id)arg1;
- (void)_showPasswordView;
- (void)_showProgressUI;
- (void)_swapDisplayBundles;
- (void)_updateProgressUIWithDuration:(double)arg1;
- (void)_updateTopConstraintWithDuration:(float)arg1;
- (int)airPlayMode;
- (id)airPlayView;
- (void)beginTrackingViewUpdates;
- (BOOL)canHideOverlay;
- (void)cancelLoadIfNeeded;
- (struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })clientContext;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (id)contentType;
- (void)dealloc;
- (id)description;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didFinishSwiping;
- (void)discardAirPlayView;
- (id)displayBundle;
- (id)displayBundleDelegate;
- (void)endTrackingViewUpdates;
- (int)index;
- (id)init;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })initialFrame;
- (void)loadView;
- (unsigned int)orbMode;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (void)preloadIfNeeded;
- (id)previewItem;
- (void)previewItem:(id)arg1 atIndex:(int)arg2 didFailPresentingWithError:(id)arg3;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (int)previewMode;
- (void)refreshPreviewItem;
- (void)setAspectRatio:(float)arg1 scaleFactor:(float)arg2;
- (void)setClientContext:(struct { int x1; struct { unsigned int x_2_1_1[8]; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1;
- (void)setContentType:(id)arg1;
- (void)setDisplayBundleDelegate:(id)arg1;
- (void)setIndex:(int)arg1;
- (void)setInitialFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLoadingTextForMissingFiles:(id)arg1;
- (void)setNavigationBarVerticalOffset:(float)arg1;
- (void)setOrbMode:(unsigned int)arg1;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewMode:(int)arg1;
- (void)setVisible:(BOOL)arg1;
- (void)setupAirPlayView;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (id)snapshotView;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
- (BOOL)visible;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willStartSwiping:(BOOL)arg1;

@end
