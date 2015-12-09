/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStackDocumentViewController : SKUIViewController <SKUICollectionViewPullToRefreshDelegate, SKUIDocumentViewController, SKUIIndexBarControlControllerDataSource, SKUIIndexBarControlControllerDelegate, SKUIIndexBarEntryListControllerDelegate, SKUIModalSourceViewProvider, SKUIStorePageSectionsDelegate, SKUIViewControllerTesting> {
    IKAppDocument * _document;
    NSArray * _entryListControllers;
    BOOL  _hasResetState;
    SKUIIndexBarControlController * _indexBarControlController;
    int  _lastNeedsMoreCount;
    int  _layoutStyle;
    SKUIResourceLoader * _resourceLoader;
    SKUIStorePageSectionsViewController * _sectionsViewController;
    SKUIStackTemplateElement * _templateElement;
    NSMapTable * _viewElementToEntryListController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIStorePageSectionsViewController *sectionsViewController;
@property (readonly) Class superclass;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void).cxx_destruct;
- (id)_colorScheme;
- (void)_configureIndexBarControl:(id)arg1;
- (int)_globalIndexFromIndexPath:(id)arg1;
- (id)_indexBarControlController;
- (id)_indexBarViewElement;
- (id)_indexPathFromGlobalIndex:(int)arg1;
- (int)_maxGlobalIndex;
- (id)_pageComponentsWithViewElements:(id)arg1;
- (id)_pageSplitsDescription;
- (int)_pinningTransitionStyle;
- (id)_pullToRefreshElement;
- (void)_resetState;
- (void)_resetStateForDocumentNotification:(id)arg1;
- (id)_resourceLoader;
- (BOOL)_shouldShowIndexBar;
- (BOOL)_tryToScrollToSectionAtIndexPath:(id)arg1;
- (void)_updateEntryListControllersWithReload:(BOOL)arg1;
- (void)_updateIndexBarVisibility;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1 withTemplate:(id)arg2;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)impressionableViewElements;
- (void)indexBarControlController:(id)arg1 didSelectEntryDescriptorAtIndexPath:(id)arg2;
- (id)indexBarControlController:(id)arg1 entryDescriptorAtIndexPath:(id)arg2;
- (int)indexBarControlController:(id)arg1 numberOfEntryDescriptorsInSection:(int)arg2;
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlControllerDidSelectBeyondTop:(id)arg1;
- (void)indexBarEntryListControllerDidInvalidate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1 layoutStyle:(int)arg2;
- (void)loadView;
- (int)numberOfSectionsInIndexBarControlController:(id)arg1;
- (BOOL)performTestWithName:(id)arg1 options:(id)arg2;
- (void)refresh:(id)arg1 refreshControl:(id)arg2;
- (id)sectionsViewController;
- (void)sectionsViewController:(id)arg1 willScrollToOffset:(struct CGPoint { float x1; float x2; })arg2 visibleRange:(struct SKUIIndexPathRange { int x1; int x2; int x3; int x4; })arg3;
- (void)setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)skui_viewWillAppear:(BOOL)arg1;

@end
