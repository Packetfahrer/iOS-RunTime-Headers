/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate> {
    CAMHDRButton * _HDRButton;
    CAMExpandableMenuButton * __expandedMenuButton;
    int  _backgroundStyle;
    UIView * _backgroundView;
    CAMElapsedTimeView * _elapsedTimeView;
    CAMFilterButton * _filterButton;
    CAMFlashButton * _flashButton;
    CAMFlipButton * _flipButton;
    CAMFramerateIndicatorView * _framerateIndicatorView;
    CAMImageWell * _imageWell;
    CAMModeDial * _modeDial;
    CUShutterButton * _shutterButton;
    CUShutterButton * _stillDuringVideoButton;
    CAMTimerButton * _timerButton;
    <CAMControlVisibilityDelegate> * _visibilityDelegate;
}

@property (nonatomic, retain) CAMHDRButton *HDRButton;
@property (setter=_setExpandedMenuButton:, nonatomic, retain) CAMExpandableMenuButton *_expandedMenuButton;
@property (nonatomic) int backgroundStyle;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, retain) CAMElapsedTimeView *elapsedTimeView;
@property (nonatomic, retain) CAMFilterButton *filterButton;
@property (nonatomic, retain) CAMFlashButton *flashButton;
@property (nonatomic, retain) CAMFlipButton *flipButton;
@property (nonatomic, retain) CAMFramerateIndicatorView *framerateIndicatorView;
@property (nonatomic, retain) CAMImageWell *imageWell;
@property (nonatomic, retain) CAMModeDial *modeDial;
@property (nonatomic, retain) CUShutterButton *shutterButton;
@property (nonatomic, retain) CUShutterButton *stillDuringVideoButton;
@property (nonatomic, retain) CAMTimerButton *timerButton;
@property (nonatomic) <CAMControlVisibilityDelegate> *visibilityDelegate;

+ (BOOL)wantsVerticalBarForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (id)HDRButton;
- (void)_commonCAMBottomBarInitialization;
- (id)_currentMenuButtons;
- (id)_expandedMenuButton;
- (void)_layoutElapsedTimeViewForTraitCollection:(id)arg1;
- (void)_layoutFilterButtonForTraitCollection:(id)arg1;
- (void)_layoutFlipButtonForTraitCollection:(id)arg1;
- (void)_layoutFramerateIndicatorForTraitCollection:(id)arg1;
- (void)_layoutImageWellForTraitCollection:(id)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (void)_layoutModeDialForTraitCollection:(id)arg1;
- (void)_layoutShutterButtonForTraitCollection:(id)arg1;
- (void)_layoutStillDuringVideoButtonForTraitCollection:(id)arg1;
- (float)_opacityForBackgroundStyle:(int)arg1;
- (void)_setExpandedMenuButton:(id)arg1;
- (void)_updateControlVisibilityAnimated:(BOOL)arg1;
- (void)_updateImageWellTappableEdgeInsets;
- (int)backgroundStyle;
- (id)backgroundView;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (id)elapsedTimeView;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (id)filterButton;
- (id)flashButton;
- (id)flipButton;
- (id)framerateIndicatorView;
- (id)imageWell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)modeDial;
- (void)setBackgroundStyle:(int)arg1;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFilterButton:(id)arg1;
- (void)setFlashButton:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setFramerateIndicatorView:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setModeDial:(id)arg1;
- (void)setShutterButton:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setTimerButton:(id)arg1;
- (void)setVisibilityDelegate:(id)arg1;
- (id)shutterButton;
- (id)stillDuringVideoButton;
- (id)timerButton;
- (void)traitCollectionDidChange:(id)arg1;
- (id)visibilityDelegate;

@end
