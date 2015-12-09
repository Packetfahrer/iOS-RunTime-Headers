/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIInputViewContent : UIView {
    float  _contentHeight;
    float  _contentWidth;
    UIInputView * _inputView;
    int  _unclippableCorners;
}

@property (nonatomic) int _unclippableCorners;

- (struct CGSize { float x1; float x2; })_contentSize;
- (BOOL)_isToolbar;
- (void)_setToolbarBackgroundImage:(id)arg1;
- (void)_setToolbarBackgroundViewWithImage:(id)arg1;
- (struct CGSize { float x1; float x2; })_sizeFittingContentViews;
- (int)_unclippableCorners;
- (void)_updateCornerClipping;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inputView:(id)arg2;
- (void)set_unclippableCorners:(int)arg1;

@end
