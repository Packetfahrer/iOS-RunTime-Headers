/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUICollectionDOMFeatureTargetting, SKUIGridViewElementPageSectionConfigurationDataSource> {
    SKUIViewElementLayoutContext * _cellLayoutContext;
    SKUIGridViewElementPageSectionConfiguration * _configuration;
    SKUIDynamicPageSectionIndexMapper * _dynamicPageSectionIndexMapper;
    BOOL  _editing;
    <SKUIEntityProviding> * _entityProvider;
    struct { 
        unsigned int respondsToSectionEntityValueProviderAtIndex : 1; 
    }  _entityProviderFlags;
    CPLRUDictionary * _globalIndexToEntityValueProviderValueCache;
    CPLRUDictionary * _globalIndexToTemplateViewElementCache;
    SKUIViewElement * _independentlySizedViewElement;
    SKUIViewElementTextLayoutCache * _labelLayoutCache;
    int  _minimumEntityCountForSections;
    unsigned int  _numberOfSections;
    SKUIMutableIntegerValue * _reusableGlobalIndexIntegerValue;
    _SKUIDynamicGridSizeCacheKey * _reusableSizeCacheKey;
    unsigned int * _sectionHeaderGlobalIndices;
    BOOL  _showsSectionHeaders;
    NSMutableDictionary * _sizeCacheKeyToCachedCellSize;
    NSMutableDictionary * _templateViewElementsCache;
    BOOL  _usesSizingEntityValueProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic, readonly) BOOL editing;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dynamicGridViewElement;
- (int)_entityGlobalIndexForGlobalIndex:(int)arg1 returningSection:(out int*)arg2;
- (id)_entityValueProviderForGlobalIndex:(int)arg1 sectionIndex:(int*)arg2;
- (void)_enumerateVisibleCellsUsingBlock:(id /* block */)arg1;
- (int)_globalIndexForEntityGlobalIndex:(int)arg1;
- (void)_invalidateCellSizeCache;
- (id)_itemTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_reloadEntityProperties;
- (void)_reloadViewElementProperties;
- (void)_reloadVisibleCellsAnimated:(BOOL)arg1;
- (void)_resetLayoutProperties;
- (id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1;
- (void)_setContext:(id)arg1;
- (id)_templateViewElementsForType:(id)arg1 mode:(id)arg2;
- (BOOL)_updateShowsSectionHeaders;
- (void)_updateStyleProperties;
- (id)_viewElementAtGlobalIndex:(int)arg1;
- (int)applyUpdateType:(int)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)backgroundColorForIndexPath:(id)arg1;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { float x1; float x2; })cellSizeForIndexPath:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 forItemAtIndexPath:(id)arg2;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (void)deselectItemsAnimated:(BOOL)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout int*)arg2 forItemAtIndexPath:(id)arg3;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (id)indexPathsForPinningItems;
- (id)initWithPageComponent:(id)arg1;
- (void)invalidateCachedLayoutInformation;
- (BOOL)isEditing;
- (int)numberOfCells;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })pinningContentInsetForItemAtIndexPath:(id)arg1;
- (int)pinningStyleForItemAtIndexPath:(id)arg1;
- (id)relevantEntityProviders;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2;
- (void)reloadVisibleCellsWithReason:(int)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })sectionContentInset;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(int)arg2;
- (BOOL)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(BOOL)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
