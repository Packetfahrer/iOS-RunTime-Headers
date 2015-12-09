/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationBarVisualStyle : NSObject {
    _UINavigationBarVisualStyle * __legacyVisualStyle;
    _UINavigationBarVisualStyleEnvironment * _environment;
    int  _idiom;
}

@property (nonatomic, readonly) _UINavigationBarVisualStyle *_legacyVisualStyle;
@property (nonatomic, readonly) float backButtonIndicatorSpacing;
@property (nonatomic, readonly) float backIndicatorBottomMargin;
@property (nonatomic, readonly) float barHeight;
@property (nonatomic, readonly) float barPromptHeight;
@property (nonatomic, readonly) float bottomButtonMargin;
@property (nonatomic, readonly) float bottomImageMargin;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } buttonContentEdgeInsets;
@property (nonatomic, readonly) float buttonFontSize;
@property (nonatomic, readonly) float buttonHeight;
@property (nonatomic, readonly) float buttonImagePadding;
@property (nonatomic, retain) _UINavigationBarVisualStyleEnvironment *environment;
@property (nonatomic, readonly) float headingFontSize;
@property (nonatomic) int idiom;
@property (nonatomic, readonly) float interBlockSpace;
@property (nonatomic, readonly) float interItemSpace;
@property (nonatomic, readonly) float leftBackImageMargin;
@property (nonatomic, readonly) float leftBackTitleMargin;
@property (nonatomic, readonly) float leftEdgeMargin;
@property (nonatomic, readonly) float leftMarginAdjustment;
@property (nonatomic, readonly) float leftTextMargin;
@property (nonatomic, readonly) float leftTitleMargin;
@property (nonatomic, readonly) float maxBackButtonProportion;
@property (nonatomic, readonly) float minBackImageWidth;
@property (nonatomic, readonly) float minBackTextWidth;
@property (nonatomic, readonly) float minButtonWidth;
@property (nonatomic, readonly) float minTitleWidth;
@property (nonatomic, readonly) float navigationItemBaselineOffset;
@property (nonatomic, readonly, copy) UIFont *promptFont;
@property (nonatomic, readonly) float promptFontSize;
@property (nonatomic, readonly) float promptInset;
@property (nonatomic, readonly) float promptTextOffset;
@property (nonatomic, readonly) float rightEdgeMargin;
@property (nonatomic, readonly) float rightImageMargin;
@property (nonatomic, readonly) float rightTitleMargin;
@property (nonatomic, readonly) float titleAccessorySpace;
@property (nonatomic, readonly) float topBackMargin;
@property (nonatomic, readonly) float topImageMargin;
@property (nonatomic, readonly) float topMargin;
@property (nonatomic, readonly) float topTitleMargin;

- (void).cxx_destruct;
- (id)_initWithIdiom:(int)arg1 environment:(id)arg2;
- (id)_legacyVisualStyle;
- (float)backButtonAnimationClippingPadding;
- (float)backButtonIndicatorSpacing;
- (float)backIndicatorBottomMargin;
- (float)barHeight;
- (float)barPromptHeight;
- (float)bottomButtonMargin;
- (float)bottomImageMargin;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })buttonContentEdgeInsets;
- (id)buttonFontForStyle:(int)arg1;
- (float)buttonFontSize;
- (float)buttonHeight;
- (float)buttonImagePadding;
- (id)environment;
- (float)headingFontSize;
- (int)idiom;
- (float)imageButtonMarginInNavigationBar:(id)arg1;
- (float)interBlockSpace;
- (float)interItemSpace;
- (float)leftBackImageMargin;
- (float)leftBackTitleMargin;
- (float)leftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (float)leftBackTitleMarginLetterpressPadding;
- (float)leftEdgeMargin;
- (float)leftMarginAdjustment;
- (float)leftTextMargin;
- (float)leftTitleMargin;
- (float)maxBackButtonProportion;
- (float)minBackImageWidth;
- (float)minBackTextWidth;
- (float)minButtonWidth;
- (float)minTitleWidth;
- (int)navigationBar:(id)arg1 metricsForOrientation:(int)arg2 hasPrompt:(BOOL)arg3;
- (float)navigationItemBaselineOffset;
- (id)promptFont;
- (float)promptFontSize;
- (float)promptInset;
- (float)promptTextOffset;
- (float)rightEdgeMargin;
- (float)rightImageMargin;
- (float)rightTitleMargin;
- (void)setEnvironment:(id)arg1;
- (void)setIdiom:(int)arg1;
- (BOOL)shouldForceLegacyLeftBackTitleMarginForCustomBackButtonBackground:(id)arg1;
- (float)textButtonMarginInNavigationBar:(id)arg1;
- (float)titleAccessorySpace;
- (float)topBackMargin;
- (float)topImageMargin;
- (float)topMargin;
- (float)topTitleMargin;

@end
