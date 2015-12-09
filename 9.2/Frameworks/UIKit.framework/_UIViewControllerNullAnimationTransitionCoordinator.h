/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {
    NSMutableArray * _alongsideAnimations;
    NSMutableArray * _alongsideCompletions;
    UIView * _containerView;
    BOOL  _transitionIsInFlight;
}

@property (nonatomic) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_alongsideAnimations:(BOOL)arg1;
- (id)_alongsideCompletions:(BOOL)arg1;
- (BOOL)_animateAlongsideTransitionInView:(id)arg1 systemCompletion:(BOOL)arg2 animation:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(id /* block */)arg2;
- (id)_mainContext;
- (void)_runAlongsideAnimations;
- (void)_runAlongsideCompletionsAfterCommit;
- (BOOL)animateAlongsideTransition:(id /* block */)arg1 completion:(id /* block */)arg2;
- (BOOL)animateAlongsideTransitionInView:(id)arg1 animation:(id /* block */)arg2 completion:(id /* block */)arg3;
- (int)completionCurve;
- (float)completionVelocity;
- (id)containerView;
- (BOOL)initiallyInteractive;
- (BOOL)isAnimated;
- (BOOL)isCancelled;
- (BOOL)isInteractive;
- (BOOL)isRotating;
- (void)notifyWhenInteractionEndsUsingBlock:(id /* block */)arg1;
- (float)percentComplete;
- (int)presentationStyle;
- (void)setContainerView:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })targetTransform;
- (double)transitionDuration;
- (id)viewControllerForKey:(id)arg1;
- (id)viewForKey:(id)arg1;

@end
