/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIZoomingShelfCollectionViewLayout : UICollectionViewLayout <SKUIHorizontalScrollingContainerMenuBarCollectionViewLayout, SKUIShelfCollectionViewLayout> {
    struct CGSize { 
        float width; 
        float height; 
    }  _cachedCollectionViewContentSize;
    NSMutableDictionary * _cachedLayoutAttributes;
    float  _focusedItemHorizontalCenterOffset;
    float  _interItemSpacing;
    BOOL  _invalidateGeometryOnlyOfExistingLayoutAttributes;
    float  _itemWidth;
    SKUIShelfLayoutData * _layoutData;
    float  _scaledItemWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float focusedItemHorizontalCenterOffset;
@property (readonly) unsigned int hash;
@property (nonatomic) float interItemSpacing;
@property (nonatomic) float itemWidth;
@property (nonatomic, retain) SKUIShelfLayoutData *layoutData;
@property (nonatomic) float scaledItemWidth;
@property (readonly) Class superclass;

+ (BOOL)collectionViewCanClipToBounds;
+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (float)snapToBoundariesDecelerationRate;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (float)focusedItemHorizontalCenterOffset;
- (float)interItemSpacing;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)itemWidth;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutData;
- (id)menuBarFocusedItemIndexPathWithTransitionProgress:(float*)arg1;
- (void)prepareLayout;
- (float)scaledItemWidth;
- (void)setFocusedItemHorizontalCenterOffset:(float)arg1;
- (void)setInterItemSpacing:(float)arg1;
- (void)setItemWidth:(float)arg1;
- (void)setLayoutData:(id)arg1;
- (void)setMenuBarFocusedItemIndexPath:(id)arg1 withTransitionProgress:(float)arg2;
- (void)setScaledItemWidth:(float)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1 withScrollingVelocity:(struct CGPoint { float x1; float x2; })arg2;

@end
