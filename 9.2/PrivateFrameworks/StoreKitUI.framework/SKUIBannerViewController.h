/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIBannerViewController : UIViewController <SKUIItemStateCenterObserver> {
    SKUIBannerView * _bannerView;
    SKUIClientContext * _clientContext;
    <SKUIBannerViewDelegate> * _delegate;
    UIImage * _iconImage;
    SSLookupItem * _item;
    SKUIItemArtworkContext * _itemArtworkContext;
    long long  _itemIdentifier;
    SKUIItemStateCenter * _itemStateCenter;
    NSOperationQueue * _resourceOperationQueue;
    NSMutableArray * _screenshotImages;
    NSDictionary * _scriptContextDictionary;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUIBannerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSOperationQueue *resourceOperationQueue;
@property (nonatomic, copy) NSDictionary *scriptContextDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_bannerViewAction:(id)arg1;
- (void)_closeButtonAction:(id)arg1;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (id)_iconImage;
- (id)_itemArtworkContext;
- (id)_itemState;
- (void)_launchApp;
- (void)_launchURL:(id)arg1 withBundleIdentifier:(id)arg2;
- (void)_loadImages;
- (void)_reloadBannerView;
- (id)_screenshotConsumerWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setIcon:(id)arg1 error:(id)arg2;
- (void)_setScreenshot:(id)arg1 forIndex:(int)arg2 error:(id)arg3;
- (void)_warmItemStateCenter;
- (id)clientContext;
- (void)dealloc;
- (id)delegate;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)loadView;
- (void)loadWithProductParameters:(id)arg1;
- (id)resourceOperationQueue;
- (id)scriptContextDictionary;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setResourceOperationQueue:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;

@end
