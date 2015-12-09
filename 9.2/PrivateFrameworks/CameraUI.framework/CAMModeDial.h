/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMModeDial : UIControl {
    NSDictionary * __items;
    UIView * __itemsContainerView;
    CAGradientLayer * __maskLayer;
    UIView * __meshTransformView;
    NSArray * __modes;
    <CAMModeDialDataSource> * _dataSource;
    int  _selectedMode;
}

@property (setter=_setItems:, nonatomic, retain) NSDictionary *_items;
@property (nonatomic, readonly) UIView *_itemsContainerView;
@property (nonatomic, readonly) CAGradientLayer *_maskLayer;
@property (nonatomic, readonly) UIView *_meshTransformView;
@property (setter=_setModes:, nonatomic, retain) NSArray *_modes;
@property (nonatomic) <CAMModeDialDataSource> *dataSource;
@property (nonatomic) int selectedMode;

+ (BOOL)wantsVerticalModeDialForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (float)_centeringNudgeForMode:(int)arg1;
- (void)_commonCAMModeDialInitialization;
- (void)_configureMaskForTraitCollection:(id)arg1;
- (void)_configureMeshTransformForTraitCollection:(id)arg1;
- (id)_fontForTraitCollection:(id)arg1;
- (struct CGPoint { float x1; float x2; })_horizontalContainerOriginForMode:(int)arg1;
- (id)_horizontalMeshTransform;
- (struct CGSize { float x1; float x2; })_interpolatedHorizontalMeshTransformSize;
- (id)_items;
- (id)_itemsContainerView;
- (void)_layoutHorizontalModeDial;
- (void)_layoutVerticalModeDial;
- (id)_maskLayer;
- (id)_meshTransformForTraitCollection:(id)arg1;
- (id)_meshTransformView;
- (id)_modes;
- (id)_selectedItem;
- (void)_setItems:(id)arg1;
- (void)_setModes:(id)arg1;
- (id)_titleForMode:(int)arg1;
- (void)_updateContainerOriginFromSelectedMode;
- (void)_updateItemsForTraitCollection:(id)arg1;
- (struct CGPoint { float x1; float x2; })_verticalContainerOriginForMode:(int)arg1;
- (id)_verticalMeshTransform;
- (id)dataSource;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (int)selectedMode;
- (void)setDataSource:(id)arg1;
- (void)setSelectedMode:(int)arg1;
- (void)setSelectedMode:(int)arg1 animated:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateToContentSize:(id)arg1;

@end
