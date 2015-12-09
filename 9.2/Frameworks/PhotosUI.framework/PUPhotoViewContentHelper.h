/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoViewContentHelper : NSObject {
    UIImageView * __crossfadeImageView;
    BOOL  __isIrisVitalityEnabled;
    BOOL  __isPerformingIrisPlayerChanges;
    struct CGColor { } * _avalancheStackBackgroundColor;
    PUAvalancheStackView * _avalancheStackView;
    BOOL  _avoidsImageViewIfPossible;
    BOOL  _avoidsPhotoDecoration;
    int  _badgeType;
    PUBadgeView * _badgeView;
    UIView * _contentView;
    int  _fillMode;
    BOOL  _flattensBadgeView;
    BOOL  _hasTransform;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _imageTransform;
    UICollectionView * _irisContainerScrollView;
    <PUPhotoViewContentHelperIrisDelegate> * _irisDelegate;
    struct { 
        BOOL respondsToPlaybackStateDidChange; 
    }  _irisDelegateFlags;
    PUBrowsingIrisPlayer * _irisPlayer;
    BOOL  _irisPlayerHidden;
    float  _irisPlayerScrubOffset;
    ISPlayerView * _irisPlayerView;
    BOOL  _isTextBannerVisible;
    BOOL  _needsAvalancheStack;
    PUPhotoDecoration * _photoDecoration;
    PUBackgroundColorView * _photoDecorationBorderView;
    PUBackgroundColorView * _photoDecorationOverlayView;
    UIImage * _photoImage;
    UIImageView * _photoImageView;
    struct CGSize { 
        float width; 
        float height; 
    }  _photoSize;
    UIImage * _placeHolderImage;
    PUTextBannerView * _textBannerView;
    double  _videoDuration;
}

@property (nonatomic, retain) UIImageView *_crossfadeImageView;
@property (setter=_setIrisVitalityEnabled:, nonatomic) BOOL _isIrisVitalityEnabled;
@property (setter=_setPerformingIrisPlayerChanges:, nonatomic) BOOL _isPerformingIrisPlayerChanges;
@property (nonatomic) struct CGColor { }*avalancheStackBackgroundColor;
@property (nonatomic, retain) PUAvalancheStackView *avalancheStackView;
@property (nonatomic) BOOL avoidsImageViewIfPossible;
@property (nonatomic) BOOL avoidsPhotoDecoration;
@property (nonatomic, readonly) UIView *badgeContainerView;
@property (nonatomic, readonly) int badgeType;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) int fillMode;
@property (nonatomic) BOOL flattensBadgeView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } imageContentFrame;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } imageTransform;
@property (nonatomic) UICollectionView *irisContainerScrollView;
@property (nonatomic) <PUPhotoViewContentHelperIrisDelegate> *irisDelegate;
@property (nonatomic, retain) PUBrowsingIrisPlayer *irisPlayer;
@property (getter=isIrisPlayerHidden, nonatomic) BOOL irisPlayerHidden;
@property (nonatomic) float irisPlayerScrubOffset;
@property (nonatomic, retain) ISPlayerView *irisPlayerView;
@property (nonatomic) BOOL needsAvalancheStack;
@property (nonatomic, copy) PUPhotoDecoration *photoDecoration;
@property (nonatomic, retain) UIImage *photoImage;
@property (nonatomic, retain) UIImageView *photoImageView;
@property (nonatomic) struct CGSize { float x1; float x2; } photoSize;
@property (nonatomic, retain) UIImage *placeHolderImage;
@property (nonatomic, readonly) BOOL providesVisualFeedbackOnPress;
@property (nonatomic, readonly) PUTextBannerView *textBannerView;
@property (getter=isTextBannerVisible, nonatomic) BOOL textBannerVisible;
@property (nonatomic, readonly) double videoDuration;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_imageContentFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 fillMode:(int)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1 imageSize:(struct CGSize { float x1; float x2; })arg2 fillMode:(int)arg3;

- (void).cxx_destruct;
- (void)_addAvalancheStackViewIfNecessary;
- (void)_addIrisPlayerViewIfNecessary;
- (void)_assertInsideIrisPlayerChanges;
- (id)_crossfadeImageView;
- (BOOL)_isIrisVitalityEnabled;
- (BOOL)_isPerformingIrisPlayerChanges;
- (void)_playerPlaybackStateDidChange;
- (void)_removeAvalancheStackViewIfNecessary;
- (void)_removeIrisPlayerViewIfNecessary;
- (void)_removePhotoImageViewIfNecessary;
- (void)_setIrisVitalityEnabled:(BOOL)arg1;
- (void)_setPerformingIrisPlayerChanges:(BOOL)arg1;
- (void)_updateBadgeView;
- (void)_updateContentViewClipsToBounds;
- (void)_updateImageView;
- (void)_updateIrisVitalityEnabled;
- (void)_updatePhotoDecoration;
- (void)_updateSubviewOrdering;
- (void)_updateTextBannerView;
- (void)animateCrossfadeToImage:(id)arg1;
- (struct CGColor { }*)avalancheStackBackgroundColor;
- (id)avalancheStackView;
- (BOOL)avoidsImageViewIfPossible;
- (BOOL)avoidsPhotoDecoration;
- (id)badgeContainerView;
- (int)badgeType;
- (id)contentView;
- (struct CGSize { float x1; float x2; })contentViewSizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (int)fillMode;
- (BOOL)flattensBadgeView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageContentFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageContentFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })imageTransform;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (id)irisContainerScrollView;
- (id)irisDelegate;
- (id)irisPlayer;
- (float)irisPlayerScrubOffset;
- (id)irisPlayerView;
- (BOOL)isIrisPlayerHidden;
- (BOOL)isTextBannerVisible;
- (void)layoutSubviewsOfContentView;
- (BOOL)needsAvalancheStack;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)performIrisPlayerChanges:(id /* block */)arg1;
- (id)photoDecoration;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)photoImage;
- (id)photoImageView;
- (struct CGSize { float x1; float x2; })photoSize;
- (id)placeHolderImage;
- (BOOL)providesVisualFeedbackOnPress;
- (void)setAvalancheStackBackgroundColor:(struct CGColor { }*)arg1;
- (void)setAvalancheStackView:(id)arg1;
- (void)setAvoidsImageViewIfPossible:(BOOL)arg1;
- (void)setAvoidsPhotoDecoration:(BOOL)arg1;
- (void)setBadgeType:(int)arg1 videoDuration:(double)arg2;
- (void)setFillMode:(int)arg1;
- (void)setFlattensBadgeView:(BOOL)arg1;
- (void)setImageTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setIrisContainerScrollView:(id)arg1;
- (void)setIrisDelegate:(id)arg1;
- (void)setIrisPlayer:(id)arg1;
- (void)setIrisPlayerHidden:(BOOL)arg1;
- (void)setIrisPlayerScrubOffset:(float)arg1;
- (void)setIrisPlayerView:(id)arg1;
- (void)setNeedsAvalancheStack:(BOOL)arg1;
- (void)setPhotoDecoration:(id)arg1;
- (void)setPhotoImage:(id)arg1;
- (void)setPhotoImageView:(id)arg1;
- (void)setPhotoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPlaceHolderImage:(id)arg1;
- (void)setTextBannerVisible:(BOOL)arg1;
- (void)set_crossfadeImageView:(id)arg1;
- (id)textBannerView;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;
- (double)videoDuration;

@end
