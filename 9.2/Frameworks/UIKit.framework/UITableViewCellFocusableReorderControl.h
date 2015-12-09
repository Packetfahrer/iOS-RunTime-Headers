/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewCellFocusableReorderControl : UITableViewCellReorderControl <_UIFloatingContentViewDelegate> {
    BOOL  _cellHasReorderingAppearance;
    UITapGestureRecognizer * _downArrowButtonRecognizer;
    _UIFloatingContentView * _floatingContentView;
    UIPanGestureRecognizer * _panRecognizer;
    UITapGestureRecognizer * _upArrowButtonRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_arrowButton:(int)arg1;
- (void)_beginIndirectTracking;
- (void)_downArrowButton:(id)arg1;
- (void)_endIndirectTracking;
- (void)_panRecognizer:(id)arg1;
- (BOOL)_shouldHandlePressEvent:(id)arg1;
- (void)_upArrowButton:(id)arg1;
- (void)_updateFocusedFloatingContentView:(BOOL)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned int)arg2;
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)initWithTableViewCell:(id)arg1;
- (void)layoutSubviews;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (BOOL)wantsMaskingWhileAnimatingDisabled;

@end
