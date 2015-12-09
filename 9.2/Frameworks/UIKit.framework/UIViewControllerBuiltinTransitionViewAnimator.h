/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewControllerBuiltinTransitionViewAnimator : NSObject <UIViewControllerAnimatedTransitioning> {
    id  _delegate;
    UIView * _fromView;
    BOOL  _removeFromView;
    UIView * _toView;
    int  _transition;
    <UIViewControllerContextTransitioning> * _transitionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIView *fromView;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL removeFromView;
@property (readonly) Class superclass;
@property (nonatomic) UIView *toView;
@property (nonatomic) int transition;

- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })_adjustOrigin:(struct CGPoint { float x1; float x2; })arg1 givenOtherOrigin:(struct CGPoint { float x1; float x2; })arg2 forTransition:(int)arg3;
- (void)_prepareKeyboardForTransition:(int)arg1 fromView:(id)arg2;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (double)durationForTransition:(int)arg1;
- (id)fromView;
- (id)initWithTransition:(int)arg1;
- (BOOL)removeFromView;
- (void)setDelegate:(id)arg1;
- (void)setFromView:(id)arg1;
- (void)setRemoveFromView:(BOOL)arg1;
- (void)setToView:(id)arg1;
- (void)setTransition:(int)arg1;
- (id)toView;
- (int)transition;
- (double)transitionDuration:(id)arg1;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 beginOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForFromView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (struct CGPoint { float x1; float x2; })transitionView:(id)arg1 endOriginForToView:(id)arg2 forTransition:(int)arg3 defaultOrigin:(struct CGPoint { float x1; float x2; })arg4;
- (void)transitionView:(id)arg1 startCustomTransitionWithDuration:(double)arg2;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 removeFromView:(BOOL)arg4;
- (void)transitionViewDidStart:(id)arg1;
- (BOOL)transitionViewShouldUseViewControllerCallbacks;

@end