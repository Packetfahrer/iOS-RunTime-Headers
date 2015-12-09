/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellEditControl : UIControl {
    UITableViewCell * _cell;
    unsigned int  _hiding;
    UIImageView * _imageView;
    _UITableViewCellEditControlMinusView * _minusView;
    unsigned int  _reserved;
    unsigned int  _rotated;
    unsigned int  _rotating;
    UIImageView * _shadowView;
    unsigned int  _style;
}

@property (getter=isHiding, nonatomic) BOOL hiding;
@property (getter=isRotated, nonatomic) BOOL rotated;
@property (nonatomic, readonly) BOOL wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (unsigned int)_controlEventsForActionTriggered;
- (id)_currentImage;
- (id)_deleteImage:(float)arg1;
- (id)_deleteImageBackground:(float)arg1;
- (id)_insertImage:(float)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_minusRect;
- (id)_minusView;
- (id)_multiSelectHighlightedImage;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_multiselectColorChanged;
- (id)_shadowImage;
- (void)_toggleRotate;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_updateImageView;
- (struct CGSize { float x1; float x2; })defaultSize;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2;
- (BOOL)isHiding;
- (BOOL)isRotated;
- (BOOL)isRotating;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHiding:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRotated:(BOOL)arg1;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;
- (BOOL)wantsMaskingWhileAnimatingDisabled;

@end
