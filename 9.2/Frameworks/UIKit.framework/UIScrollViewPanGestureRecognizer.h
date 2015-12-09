/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
    unsigned int  _caughtDeceleratingScrollView;
    unsigned int  _directionalLockEnabled;
    unsigned int  _hasChildScrollView;
    unsigned int  _hasParentScrollView;
    unsigned int  _lastLockingAxis;
    unsigned int  _lockingAxis;
    struct CGPoint { 
        float x; 
        float y; 
    }  _reconsideredLockingLocation;
    UIScrollView * _scrollView;
    SEL  _scrollViewAction;
    unsigned int  _transfersTrackingFromParentScrollView;
    float  _translationScaleFactor;
}

@property (getter=_caughtDeceleratingScrollView, nonatomic, readonly) BOOL caughtDeceleratingScrollView;
@property (getter=isDirectionalLockEnabled, nonatomic) BOOL directionalLockEnabled;
@property (nonatomic) UIScrollView *scrollView;
@property (nonatomic) float translationScaleFactor;

- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })_adjustSceneReferenceLocation:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_canTransferTrackingFromParentPagingScrollView;
- (BOOL)_caughtDeceleratingScrollView;
- (void)_centroidMovedTo:(struct CGPoint { float x1; float x2; })arg1 atTime:(double)arg2;
- (float)_hysteresis;
- (void)_resetGestureRecognizer;
- (void)_scrollViewDidEndZooming;
- (BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
- (BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)delaysTouchesBegan;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (BOOL)isDirectionalLockEnabled;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (id)scrollView;
- (void)setDelegate:(id)arg1;
- (void)setDirectionalLockEnabled:(BOOL)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTranslationScaleFactor:(float)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { float x1; float x2; })translationInView:(id)arg1;
- (float)translationScaleFactor;
- (struct CGPoint { float x1; float x2; })velocityInView:(id)arg1;

@end
