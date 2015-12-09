/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUBrowsingIrisPlayerChange : PUViewModelChange {
    BOOL  _isPlayerLoadingAllowedDidChange;
    BOOL  _playbackStateDidChange;
    BOOL  _playerDidChange;
    BOOL  _playerStatusDidChange;
}

@property (nonatomic) BOOL isPlayerLoadingAllowedDidChange;
@property (nonatomic) BOOL playbackStateDidChange;
@property (nonatomic) BOOL playerDidChange;
@property (nonatomic) BOOL playerStatusDidChange;

- (void)_setPlaybackStateDidChange:(BOOL)arg1;
- (void)_setPlayerDidChange:(BOOL)arg1;
- (void)_setPlayerLoadingAllowedDidChange:(BOOL)arg1;
- (void)_setPlayerStatusDidChange:(BOOL)arg1;
- (BOOL)hasChanges;
- (BOOL)isPlayerLoadingAllowedDidChange;
- (BOOL)playbackStateDidChange;
- (BOOL)playerDidChange;
- (BOOL)playerStatusDidChange;

@end
