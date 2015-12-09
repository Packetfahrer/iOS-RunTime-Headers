/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAuthorAlertActionView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _finalLayoutMargins;
    UIImageView * _imageView;
    UILabel * _label;
}

@property (nonatomic, copy) NSString *authorName;
@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)authorName;
- (void)didMoveToSuperview;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })layoutMargins;
- (void)layoutSubviews;
- (void)setAuthorName:(id)arg1;
- (void)setFinalLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImage:(id)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
