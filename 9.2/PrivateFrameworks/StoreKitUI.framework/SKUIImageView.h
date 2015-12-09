/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIImageView : UIImageView {
    struct CGSize { 
        float width; 
        float height; 
    }  _imageSize;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic) struct CGSize { float x1; float x2; } imageSize;
@property (nonatomic, readonly) UITapGestureRecognizer *tapRecognizer;

- (void).cxx_destruct;
- (void)drawDecorationsWithImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tapRecognizer;

@end
