/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUpNextTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {
    UIView * _itemContainerView;
    MusicNowPlayingViewController * _nowPlayingViewController;
    BOOL  _presenting;
    BOOL  _requiresNonSpringAnimation;
    id /* block */  _transitionEndBlock;
    id /* block */  _transitionFinishBlock;
    id /* block */  _transitionStartBlock;
    MusicUpNextViewController * _upNextViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) UIView *itemContainerView;
@property (getter=isPresenting, nonatomic) BOOL presenting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_prepareTransitionForUnderArtwork:(id)arg1;
- (void)animateTransition:(id)arg1;
- (BOOL)isPresenting;
- (id)itemContainerView;
- (void)setItemContainerView:(id)arg1;
- (void)setPresenting:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;

@end
