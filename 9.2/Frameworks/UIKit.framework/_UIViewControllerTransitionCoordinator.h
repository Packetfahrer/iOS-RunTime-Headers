/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    NSMutableArray * __alongsideAnimationViews;
    NSMutableArray * __alongsideAnimations;
    NSMutableArray * __alongsideCompletions;
    NSMutableArray * __interactiveChangeHandlers;
    _UIViewControllerTransitionContext * __mainContext;
}

@property (setter=_setAlongsideAnimationViews:, nonatomic, retain) NSMutableArray *_alongsideAnimationViews;
@property (setter=_setAlongsideAnimations:, nonatomic, retain) NSMutableArray *_alongsideAnimations;
@property (setter=_setAlongsideCompletions:, nonatomic, retain) NSMutableArray *_alongsideCompletions;
@property (setter=_setInteractiveChangeHandlers:, nonatomic, retain) NSMutableArray *_interactiveChangeHandlers;
@property (setter=_setMainContext:, nonatomic) _UIViewControllerTransitionContext *_mainContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alongsideAnimationViews;
- (id)_alongsideAnimations;
- (id)_alongsideAnimations:(BOOL)arg1;
- (id)_alongsideCompletions;
- (id)_alongsideCompletions:(BOOL)arg1;
- (BOOL)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(BOOL)arg2 animation:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id /* block */)arg2;
- (id)_interactiveChangeHandlers;
- (id)_interactiveChangeHandlers:(BOOL)arg1;
- (id)_mainContext;
- (void)_setAlongsideAnimationViews:(id)arg1;
- (void)_setAlongsideAnimations:(id)arg1;
- (void)_setAlongsideCompletions:(id)arg1;
- (void)_setInteractiveChangeHandlers:(id)arg1;
- (void)_setMainContext:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })affineTransform;
- (BOOL)animateAlongsideTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(id /* block */)arg2 completion:(id /* block */)arg3;
- (int)completionCurve;
- (float)completionVelocity;
- (id)containerView;
- (void)handlerToInvokeOnInteractivityChanges:(id /* block */)arg1;
- (id)initWithMainContext:(id)arg1;
- (BOOL)initiallyInteractive;
- (BOOL)isAnimated;
- (BOOL)isCancelled;
- (BOOL)isCompleting;
- (BOOL)isInteractive;
- (BOOL)isRotating;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)arg1;
- (float)percentComplete;
- (int)presentationStyle;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })targetTransform;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end
