/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPhotoPickerCollectionViewLayout : UICollectionViewFlowLayout {
    BOOL  _hideSelectionBadges;
    <CKPhotoPickerCollectionViewLayoutDelegate> * _layoutDelegate;
}

@property (nonatomic) BOOL hideSelectionBadges;
@property (nonatomic) <CKPhotoPickerCollectionViewLayoutDelegate> *layoutDelegate;

- (id)_badgeLayoutAttributesForItemLayoutAttributes:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_floatingSelectionBadgeFrameForItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visibleItemFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 atIndexPath:(id)arg3;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (BOOL)hideSelectionBadges;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutDelegate;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHideSelectionBadges:(BOOL)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { float x1; float x2; })arg1;

@end
