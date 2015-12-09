/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <ISPlayerViewDelegate, SBFIrisWallpaperView, UIGestureRecognizerDelegate> {
    <SBFIrisWallpaperViewDelegate> * _irisDelegate;
    ISPlayerView * _playerView;
    AVAsset * _video;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <SBFIrisWallpaperViewDelegate> *irisDelegate;
@property (nonatomic, readonly) int irisPlaybackState;
@property (nonatomic, readonly) BOOL isIrisInteracting;
@property (readonly) Class superclass;

- (id)_newImageView;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 variant:(int)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 wallpaperImage:(id)arg2 wallpaperVideo:(id)arg3 stillTimeInVideo:(double)arg4 variant:(int)arg5;
- (id)irisDelegate;
- (id)irisGestureRecognizer;
- (int)irisPlaybackState;
- (BOOL)isIrisInteracting;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)setIrisDelegate:(id)arg1;

@end
