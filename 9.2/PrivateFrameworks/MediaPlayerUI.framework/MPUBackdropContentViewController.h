/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUBackdropContentViewController : UIViewController {
    _UIBackdropView * _backdropView;
    int  _backdropViewPrivateStyle;
    UIView * _backgroundView;
    UIViewController * _contentViewController;
    MPUPinningView * _pinningView;
}

@property (nonatomic) int backdropViewPrivateStyle;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIViewController *contentViewController;

- (void).cxx_destruct;
- (void)_embedBackgroundView;
- (int)backdropViewPrivateStyle;
- (id)backgroundView;
- (id)contentViewController;
- (id)initWithContentViewController:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (void)setBackdropViewPrivateStyle:(int)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
