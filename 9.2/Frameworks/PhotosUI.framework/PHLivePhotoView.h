/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHLivePhotoView : UIView <ISPlayerItemObserver, ISPlayerViewDelegate, _UISettingsKeyObserver> {
    int  __configuredPlaybackStyle;
    int  __currentPlaybackStyle;
    BOOL  __didPlayToEnd;
    ISManualPlaybackInput * __playbackInput;
    BOOL  __playbackRequested;
    ISPlayerItem * __playerItem;
    ISPlayerView * __playerView;
    <PHLivePhotoViewDelegate> * _delegate;
    struct { 
        BOOL respondsToWillBeginPlaybackWithStyle; 
        BOOL respondsToDidEndPlaybackWithStyle; 
    }  _delegateFlags;
    PHLivePhoto * _livePhoto;
    BOOL  _muted;
    UIGestureRecognizer * _playbackGestureRecognizer;
    BOOL  _shouldAutomaticallyPrepareForPlayback;
}

@property (setter=_configureForPlaybackStyle:, nonatomic) int _configuredPlaybackStyle;
@property (setter=_setCurrentPlaybackStyle:, nonatomic) int _currentPlaybackStyle;
@property (setter=_setDidPlayToEnd:, nonatomic) BOOL _didPlayToEnd;
@property (nonatomic, readonly) ISManualPlaybackInput *_playbackInput;
@property (setter=_setPlaybackRequested:, nonatomic) BOOL _playbackRequested;
@property (setter=_setPlayerItem:, nonatomic) ISPlayerItem *_playerItem;
@property (nonatomic, readonly) ISPlayerView *_playerView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHLivePhotoViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) PHLivePhoto *livePhoto;
@property (getter=isMuted, nonatomic) BOOL muted;
@property (nonatomic, readonly) UIGestureRecognizer *playbackGestureRecognizer;
@property (nonatomic) BOOL shouldAutomaticallyPrepareForPlayback;
@property (readonly) Class superclass;

+ (id)livePhotoBadgeImageWithOptions:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_commonPHLivePhotoViewInitialization;
- (void)_configureForPlaybackStyle:(int)arg1;
- (int)_configuredPlaybackStyle;
- (int)_currentPlaybackStyle;
- (BOOL)_didPlayToEnd;
- (void)_ensurePlaybackInput;
- (id)_playbackInput;
- (BOOL)_playbackRequested;
- (id)_playerItem;
- (id)_playerView;
- (void)_setCurrentPlaybackStyle:(int)arg1;
- (void)_setDidPlayToEnd:(BOOL)arg1;
- (void)_setPlaybackRequested:(BOOL)arg1;
- (void)_setPlayerItem:(id)arg1;
- (void)_updateCurrentPlaybackStyle;
- (void)_updateMuted;
- (void)_updatePlayerItemLoadingTarget;
- (void)_updateStatusBorder;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isMuted;
- (id)livePhoto;
- (id)playbackGestureRecognizer;
- (void)playerItemStatusDidChange:(id)arg1;
- (id)playerView;
- (void)playerViewDidPlaybackVideoAssetToEnd:(id)arg1;
- (void)playerViewIsInteractingDidChange:(id)arg1;
- (void)playerViewPlaybackStateDidChange:(id)arg1;
- (void)playerViewWillPlaybackVideoAssetToEnd:(id)arg1;
- (void)setContentMode:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLivePhoto:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setShouldAutomaticallyPrepareForPlayback:(BOOL)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAutomaticallyPrepareForPlayback;
- (void)startPlaybackWithStyle:(int)arg1;
- (void)stopPlayback;

@end
