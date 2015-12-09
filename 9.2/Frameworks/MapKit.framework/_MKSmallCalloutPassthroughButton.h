/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKSmallCalloutPassthroughButton : UIControl {
    UIView * _highlightView;
    float  _leftHighlightInset;
    UIControl * _targetControl;
}

@property (nonatomic) float leftHighlightInset;
@property (nonatomic, retain) UIControl *targetControl;

- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)leftHighlightInset;
- (void)setHighlighted:(BOOL)arg1;
- (void)setLeftHighlightInset:(float)arg1;
- (void)setTargetControl:(id)arg1;
- (id)targetControl;

@end
