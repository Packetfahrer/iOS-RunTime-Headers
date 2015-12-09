/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone

- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4;
- (float)_row4ControlSegmentWidthLeft;
- (float)_row4ControlSegmentWidthRight;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (float)bottomRowDefaultFontSize;
- (float)cornerRadiusForKey:(id)arg1;
- (float)defaultPathWeight;
- (struct CGSize { float x1; float x2; })defaultVariantGeometrySize;
- (float)defaultVariantSizeThreshold;
- (float)deleteKeyFontSize;
- (id)deleteKeyImageName;
- (struct CGPoint { float x1; float x2; })deleteKeyOffset;
- (id)deleteOnKeyImageName;
- (float)dictationKeyFontSize;
- (id)dictationKeyImageName;
- (struct CGPoint { float x1; float x2; })dictationKeyOffset;
- (float)dismissKeyFontSize;
- (id)dismissKeyImageName;
- (struct CGPoint { float x1; float x2; })dismissKeyOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })dismissKeySymbolFrame;
- (id)displayContentsForKey:(id)arg1;
- (float)dualStringKeyFontSizeAdjustment;
- (float)dualStringKeyMiddleMargin;
- (struct CGPoint { float x1; float x2; })dualStringKeyOffset;
- (float)emailDotKeyFontSize;
- (float)facemarkKeyFontSize;
- (float)fallbackFontSize;
- (float)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (BOOL)iPadFudgeLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })insetFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (float)internationalKeyFontSize;
- (struct CGPoint { float x1; float x2; })internationalKeyOffset;
- (float)keyCornerRadius;
- (float)keyInsetBottom;
- (id)lightKeycapsFontName;
- (float)moreKeyFontSize;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (float)predictiveKeyCornerRadius;
- (struct CGPoint { float x1; float x2; })returnKeyOffset;
- (float)returnKeySymbolFrameInset;
- (int)rowLimitForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })secondaryShiftKeyOffset;
- (void)setAllowsPaddles:(BOOL)arg1;
- (void)setupLayoutSegments;
- (float)shiftKeyFontSize;
- (id)shiftKeyImageName;
- (struct CGPoint { float x1; float x2; })shiftKeyOffset;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shiftKeySymbolFrame;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (float)skinnyKeyThreshold;
- (float)smallKanaKeyFontSize;
- (float)spaceKeyFontSize;
- (float)stringKeyFontSize;
- (struct CGPoint { float x1; float x2; })stringKeyOffset;
- (BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (float)symbolFrameInset;
- (id)thinKeycapsFontName;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })variantDisplayFrameInsets;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned int)arg2 rowLimit:(int)arg3;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })variantSymbolFrameInsets;
- (float)zhuyinFirstToneKeyFontSize;

@end