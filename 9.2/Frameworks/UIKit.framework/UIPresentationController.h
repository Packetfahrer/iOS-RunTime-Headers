/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPresentationController : NSObject <UIAppearanceContainer, UIContentContainer, UIFocusEnvironment, UIGestureRecognizerDelegate, UITraitEnvironment, _UIAppearanceContainer, _UIContentContainerInternal, _UITraitEnvironmentInternal> {
    id /* block */  __computeToEndFrameForCurrentTransition;
    UIView * __currentPresentationSuperview;
    id /* block */  __currentTransitionDidComplete;
    id /* block */  __fromViewForCurrentTransition;
    id /* block */  __toViewForCurrentTransition;
    id /* block */  __transitionViewForCurrentTransition;
    <UIViewControllerTransitionCoordinatorContext> * _adaptiveTransitionContext;
    <UIViewControllerTransitionCoordinator> * _adaptiveTransitionCoordinator;
    UITapGestureRecognizer * _backGestureRecognizer;
    UIBarButtonItem * _barButtonItem;
    BOOL  _changedPresentingViewControllerDuringAdaptation;
    BOOL  _containerIgnoresDirectTouchEvents;
    UIView * _containerView;
    <UIViewControllerInteractiveTransitioning> * _currentInteractionController;
    <UIViewControllerAnimatedTransitioning> * _currentTransitionController;
    <UIAdaptivePresentationControllerDelegate> * _delegate;
    SEL  _didEndSelector;
    BOOL  _didUpdateLayoutForStatusBarAndInterfaceOrientation;
    BOOL  _isCurrentStateCancelled;
    BOOL  _isDisconnectedRoot;
    UITraitCollection * _lastNotifiedTraitCollection;
    BOOL  _monitorsSystemLayoutFittingSize;
    BOOL  _needsDidAppear;
    BOOL  _needsDidDisappear;
    UITraitCollection * _overrideTraitCollection;
    struct CGSize { 
        float width; 
        float height; 
    }  _preferredContentSize;
    UIView * _presentationView;
    UIViewController * _presentedViewController;
    UIViewController * _presentingViewController;
    UIView * _snapshotOverlayView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
    int  _state;
    id  _target;
    BOOL  _transitionAsDisconnectedRoot;
}

@property (nonatomic, copy) id /* block */ _computeToEndFrameForCurrentTransition;
@property (getter=_currentPresentationSuperview, setter=_setCurrentPresentationSuperview:, nonatomic, retain) UIView *_currentPresentationSuperview;
@property (nonatomic, copy) id /* block */ _currentTransitionDidComplete;
@property (nonatomic, copy) id /* block */ _fromViewForCurrentTransition;
@property (getter=_preferredContentSize, setter=_setPreferredContentSize:, nonatomic) struct CGSize { float x1; float x2; } _preferredContentSize;
@property (nonatomic, copy) id /* block */ _toViewForCurrentTransition;
@property (nonatomic, copy) id /* block */ _transitionViewForCurrentTransition;
@property (getter=_adaptiveTransitionContext, setter=_setAdaptiveTransitionContext:, nonatomic, retain) <UIViewControllerTransitionCoordinatorContext> *adaptiveTransitionContext;
@property (getter=_adaptiveTransitionCoordinator, setter=_setAdaptiveTransitionCoordinator:, nonatomic, retain) <UIViewControllerTransitionCoordinator> *adaptiveTransitionCoordinator;
@property (nonatomic, retain) UIBarButtonItem *barButtonItem;
@property (getter=_changedPresentingViewControllerDuringAdaptation, setter=_setChangedPresentingViewControllerDuringAdaptation:, nonatomic) BOOL changedPresentingViewControllerDuringAdaptation;
@property (getter=_containerIgnoresDirectTouchEvents, setter=_setContainerIgnoresDirectTouchEvents:, nonatomic) BOOL containerIgnoresDirectTouchEvents;
@property (nonatomic, retain) UIView *containerView;
@property (getter=_currentInteractionController, setter=_setCurrentInteractionController:, nonatomic, retain) <UIViewControllerInteractiveTransitioning> *currentInteractionController;
@property (getter=_currentTransitionController, setter=_setCurrentTransitionController:, nonatomic, retain) <UIViewControllerAnimatedTransitioning> *currentTransitionController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIAdaptivePresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCurrentStateCancelled;
@property (nonatomic, copy) UITraitCollection *overrideTraitCollection;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } preferredContentSize;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) int presentationStyle;
@property (getter=_presentationView, setter=_setPresentationView:, nonatomic, retain) UIView *presentationView;
@property (nonatomic, retain) UIViewController *presentedViewController;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITraitCollection *traitCollection;

+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_defaultBaseContentInsetsForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (struct { int x1; int x2; })__sizeClassPair;
- (id)_activePresentationController;
- (id)_adaptiveTransitionContext;
- (id)_adaptiveTransitionCoordinator;
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;
- (id)_animatorForContainmentTransition;
- (id)_appearanceContainer;
- (Class)_appearanceGuideClass;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_baseContentInsets;
- (void)_beginOcclusionIfNecessary:(BOOL)arg1;
- (BOOL)_changedPresentingViewControllerDuringAdaptation;
- (id)_childPresentationController;
- (void)_cleanup;
- (id /* block */)_computeToEndFrameForCurrentTransition;
- (void)_containedViewControllerModalStateChanged;
- (BOOL)_containerIgnoresDirectTouchEvents;
- (void)_containerViewWillLayoutSubviews;
- (void)_coverWithSnapshot;
- (id)_currentContextPresentationSuperview;
- (id)_currentInteractionController;
- (id)_currentPresentationSuperview;
- (id)_currentTransitionController;
- (id /* block */)_currentTransitionDidComplete;
- (int)_defaultPresentationStyleForTraitCollection:(id)arg1;
- (id)_descriptionForPrintingViewControllerHierarchy;
- (void)_disableMenuPressForBackGesture;
- (void)_dismissWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (void)_enableOcclusion:(BOOL)arg1;
- (id)_firstCurrentContextChildInWindow;
- (struct CGSize { float x1; float x2; })_flipSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_forcesPreferredAnimationControllers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForChildContentContainer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameOfPresentedViewControllerViewInSuperview;
- (id /* block */)_fromViewForCurrentTransition;
- (id)_fullscreenPresentationSuperview;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_initViewHierarchyForPresentationSuperview:(id)arg1;
- (id)_initialPresentationViewControllerForViewController:(id)arg1;
- (BOOL)_isAdapted;
- (BOOL)_isModalWhenContainedInPopover;
- (BOOL)_keyboardShouldAnimateAlongsideForInteractiveTransitions;
- (BOOL)_monitorsSystemLayoutFittingSize;
- (void)_parent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (id)_parentFocusEnvironment;
- (id)_parentPresentationController;
- (id)_parentPresentationControllerImmediate:(BOOL)arg1;
- (id)_parentTraitCollection;
- (id)_parentTraitEnvironment;
- (id)_passthroughViews;
- (void)_performBackGesture:(id)arg1;
- (id)_preferredAnimationControllerForDismissal;
- (id)_preferredAnimationControllerForPresentation;
- (struct CGSize { float x1; float x2; })_preferredContentSize;
- (void)_presentWithAnimationController:(id)arg1 interactionController:(id)arg2 target:(id)arg3 didEndSelector:(SEL)arg4;
- (id)_presentationControllerForTraitCollection:(id)arg1;
- (BOOL)_presentationPotentiallyUnderlapsStatusBar;
- (id)_presentationView;
- (id)_presentedViewControllerForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (BOOL)_preserveResponderAcrossWindows;
- (void)_releaseSnapshot;
- (void)_sendDelegateWillPresentWithAdaptiveStyle:(int)arg1 transitionCoordinator:(id)arg2;
- (void)_setAdaptiveTransitionContext:(id)arg1;
- (void)_setAdaptiveTransitionCoordinator:(id)arg1;
- (void)_setChangedPresentingViewControllerDuringAdaptation:(BOOL)arg1;
- (void)_setContainerIgnoresDirectTouchEvents:(BOOL)arg1;
- (void)_setContainerView:(id)arg1;
- (void)_setCurrentInteractionController:(id)arg1;
- (void)_setCurrentPresentationSuperview:(id)arg1;
- (void)_setCurrentTransitionController:(id)arg1;
- (void)_setPreferredContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_setPresentationView:(id)arg1;
- (void)_setPresentedViewController:(id)arg1;
- (void)_setPresentingViewController:(id)arg1;
- (id)_sharedParent:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (BOOL)_shouldAdaptFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (BOOL)_shouldChangeStatusBarViewController;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (BOOL)_shouldDisablePresentersAppearanceCallbacks;
- (BOOL)_shouldGrabPresentersView;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)_shouldSavePresentedViewControllerForStateRestoration;
- (void)_systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1 childViewController:(id)arg2;
- (id /* block */)_toViewForCurrentTransition;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_transitionFromDidEnd;
- (void)_transitionFromWillBegin;
- (void)_transitionToDidEnd;
- (void)_transitionToPresentationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)_transitionToWillBegin;
- (id /* block */)_transitionViewForCurrentTransition;
- (BOOL)_transitioningFrom;
- (BOOL)_transitioningTo;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2;
- (void)_transplantView:(id)arg1 toSuperview:(id)arg2 atIndex:(unsigned int)arg3;
- (void)_updateTraitsIfNecessary;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (void)_willRunTransitionForCurrentStateDeferred:(BOOL)arg1;
- (void)_window:(id)arg1 willTransitionToTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;
- (int)adaptivePresentationStyle;
- (int)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (id)barButtonItem;
- (id)containerView;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (BOOL)dismissed;
- (BOOL)dismissing;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPresentedViewInContainerView;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (BOOL)isCurrentStateCancelled;
- (id)overrideTraitCollection;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)preferredFocusedView;
- (int)presentationStyle;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)presented;
- (id)presentedContentContainer;
- (id)presentedView;
- (id)presentedViewController;
- (BOOL)presenting;
- (id)presentingViewController;
- (void)runTransitionForCurrentState;
- (void)setBarButtonItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsCurrentStateCancelled:(BOOL)arg1;
- (void)setNeedsFocusUpdate;
- (void)setOverrideTraitCollection:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (void)setState:(int)arg1;
- (void)set_computeToEndFrameForCurrentTransition:(id /* block */)arg1;
- (void)set_currentTransitionDidComplete:(id /* block */)arg1;
- (void)set_fromViewForCurrentTransition:(id /* block */)arg1;
- (void)set_toViewForCurrentTransition:(id /* block */)arg1;
- (void)set_transitionViewForCurrentTransition:(id /* block */)arg1;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (BOOL)shouldUpdateFocusInContext:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (int)state;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transitionDidFinish:(BOOL)arg1;
- (void)transitionDidStart;
- (void)updateFocusIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
