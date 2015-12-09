/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UINavigationParallaxTransition : NSObject <UIViewControllerAnimatedTransitioningEx, _UIBasicAnimationFactory> {
    BOOL  __shouldReverseLayoutDirection;
    _UIParallaxDimmingView * _borderDimmingView;
    UIView * _clipUnderView;
    BOOL  _clipUnderlapWhileTransitioning;
    UIView * _containerFromView;
    UIView * _containerToView;
    _UIParallaxDimmingView * _contentDimmingView;
    BOOL  _interactionAborted;
    _UINavigationInteractiveTransitionBase * _interactionController;
    int  _operation;
    <UIViewControllerContextTransitioning> * _transitionContext;
    float  _transitionGap;
    int  _transitionStyle;
}

@property (setter=_setShouldReverseLayoutDirection:, nonatomic) BOOL _shouldReverseLayoutDirection;
@property (nonatomic, retain) _UIParallaxDimmingView *borderDimmingView;
@property (nonatomic, retain) UIView *clipUnderView;
@property (nonatomic) BOOL clipUnderlapWhileTransitioning;
@property (nonatomic, retain) UIView *containerFromView;
@property (nonatomic, retain) UIView *containerToView;
@property (nonatomic, retain) _UIParallaxDimmingView *contentDimmingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL interactionAborted;
@property (nonatomic) _UINavigationInteractiveTransitionBase *interactionController;
@property (nonatomic) int operation;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIViewControllerContextTransitioning> *transitionContext;
@property (nonatomic) float transitionGap;
@property (nonatomic) int transitionStyle;

- (void).cxx_destruct;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_setShouldReverseLayoutDirection:(BOOL)arg1;
- (BOOL)_shouldReverseLayoutDirection;
- (id)_timingFunctionForAnimation;
- (void)animateKeyboard:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)borderDimmingView;
- (id)clipUnderView;
- (BOOL)clipUnderlapWhileTransitioning;
- (void)completeKeyboard:(id)arg1;
- (id)containerFromView;
- (id)containerToView;
- (id)contentDimmingView;
- (float)gapBetweenViews;
- (id)initWithCurrentOperation:(int)arg1;
- (BOOL)interactionAborted;
- (id)interactionController;
- (int)operation;
- (float)parallaxOffset;
- (void)prepareToAnimateKeyboard:(id)arg1;
- (void)resizeShadow:(id)arg1;
- (id)resizedFromContainerView;
- (id)resizedToContainerView;
- (void)setBorderDimmingView:(id)arg1;
- (void)setClipUnderView:(id)arg1;
- (void)setClipUnderlapWhileTransitioning:(BOOL)arg1;
- (void)setContainerFromView:(id)arg1;
- (void)setContainerToView:(id)arg1;
- (void)setContentDimmingView:(id)arg1;
- (void)setInteractionAborted:(BOOL)arg1;
- (void)setInteractionController:(id)arg1;
- (void)setOperation:(int)arg1;
- (void)setTransitionContext:(id)arg1;
- (void)setTransitionGap:(float)arg1;
- (void)setTransitionStyle:(int)arg1;
- (id)shadowContainerForKeyboardTransition:(id)arg1;
- (id)transitionContext;
- (double)transitionDuration:(id)arg1;
- (float)transitionGap;
- (int)transitionStyle;

@end
