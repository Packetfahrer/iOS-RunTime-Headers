/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderProgressView : UIView {
    double  _currentTimeInterval;
    double  _currentVibrationComponentDidBeginTimeInterval;
    TKVibrationRecorderProgressDotImageView * _dotForCurrentVibrationComponent;
    NSLayoutConstraint * _dotForCurrentVibrationComponentLeftConstraint;
    NSLayoutConstraint * _dotForCurrentVibrationComponentRightConstraint;
    NSMutableArray * _dots;
    double  _maximumTimeInterval;
    double  _previousPauseDidBeginTimeInterval;
    UIView * _progressView;
    NSLayoutConstraint * _progressViewWidthConstraint;
    int  _roundedCornersCompensationDelayMode;
    <TKVibrationRecorderStyleProvider> * _styleProvider;
}

@property (setter=_setCurrentTimeInterval:, nonatomic) double _currentTimeInterval;
@property (setter=_setCurrentVibrationComponentDidBeginTimeInterval:, nonatomic) double _currentVibrationComponentDidBeginTimeInterval;
@property (setter=_setDotForCurrentVibrationComponent:, nonatomic, retain) TKVibrationRecorderProgressDotImageView *_dotForCurrentVibrationComponent;
@property (setter=_setDotForCurrentVibrationComponentLeftConstraint:, nonatomic, retain) NSLayoutConstraint *_dotForCurrentVibrationComponentLeftConstraint;
@property (setter=_setDotForCurrentVibrationComponentRightConstraint:, nonatomic, retain) NSLayoutConstraint *_dotForCurrentVibrationComponentRightConstraint;
@property (nonatomic, readonly) struct UIOffset { float x1; float x2; } _dotInsets;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } _dotSize;
@property (setter=_setDots:, nonatomic, retain) NSMutableArray *_dots;
@property (setter=_setMaximumTimeInterval:, nonatomic) double _maximumTimeInterval;
@property (setter=_setPreviousPauseDidBeginTimeInterval:, nonatomic) double _previousPauseDidBeginTimeInterval;
@property (setter=_setProgressView:, nonatomic, retain) UIView *_progressView;
@property (setter=_setProgressViewWidthConstraint:, nonatomic, retain) NSLayoutConstraint *_progressViewWidthConstraint;
@property (nonatomic, readonly) UIImage *_resizableDotImage;
@property (setter=_setStyleProvider:, nonatomic, retain) <TKVibrationRecorderStyleProvider> *_styleProvider;
@property (nonatomic) double currentTimeInterval;
@property (nonatomic) int roundedCornersCompensationDelayMode;

- (double)_cappedValueForTimeInterval:(double)arg1;
- (double)_currentTimeInterval;
- (double)_currentVibrationComponentDidBeginTimeInterval;
- (id)_dotForCurrentVibrationComponent;
- (id)_dotForCurrentVibrationComponentLeftConstraint;
- (id)_dotForCurrentVibrationComponentRightConstraint;
- (struct UIOffset { float x1; float x2; })_dotInsets;
- (struct CGSize { float x1; float x2; })_dotSize;
- (id)_dots;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (double)_maximumTimeInterval;
- (double)_previousPauseDidBeginTimeInterval;
- (id)_progressView;
- (id)_progressViewWidthConstraint;
- (id)_resizableDotImage;
- (void)_setCurrentTimeInterval:(double)arg1;
- (void)_setCurrentVibrationComponentDidBeginTimeInterval:(double)arg1;
- (void)_setDotForCurrentVibrationComponent:(id)arg1;
- (void)_setDotForCurrentVibrationComponentLeftConstraint:(id)arg1;
- (void)_setDotForCurrentVibrationComponentRightConstraint:(id)arg1;
- (void)_setDots:(id)arg1;
- (void)_setMaximumTimeInterval:(double)arg1;
- (void)_setPreviousPauseDidBeginTimeInterval:(double)arg1;
- (void)_setProgressView:(id)arg1;
- (void)_setProgressViewWidthConstraint:(id)arg1;
- (void)_setStyleProvider:(id)arg1;
- (id)_styleProvider;
- (void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_updateProgressViewBackgroundColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)clearAllVibrationComponents;
- (double)currentTimeInterval;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithMaximumTimeInterval:(double)arg1 styleProvider:(id)arg2;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (BOOL)isAccessibilityElement;
- (int)roundedCornersCompensationDelayMode;
- (void)setCurrentTimeInterval:(double)arg1;
- (void)setRoundedCornersCompensationDelayMode:(int)arg1;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;

@end
