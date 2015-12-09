/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCameraImportItemCell : UICollectionViewCell {
    UIImageView * _badgeImageView;
    int  _badgeType;
    PUPhotoView * _photoView;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, retain) UIImageView *badgeImageView;
@property (nonatomic) int badgeType;
@property (nonatomic, retain) PUPhotoView *photoView;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (void)_createSpinnerIfNecessary;
- (id)badgeImageView;
- (int)badgeType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)photoView;
- (void)prepareForReuse;
- (void)setBadgeImageView:(id)arg1;
- (void)setBadgeType:(int)arg1;
- (void)setPhotoImage:(id)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 fillMode:(int)arg3 videoDuration:(id)arg4;
- (void)setPhotoView:(id)arg1;
- (void)setSpinner:(id)arg1;
- (id)spinner;

@end
