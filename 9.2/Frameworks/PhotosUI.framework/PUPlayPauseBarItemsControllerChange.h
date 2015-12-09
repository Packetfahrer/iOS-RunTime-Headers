/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPlayPauseBarItemsControllerChange : NSObject {
    BOOL  _currentPlaybackTimeDidChange;
    BOOL  _playPauseStateDidChange;
    BOOL  _playbackDurationDidChange;
}

@property (nonatomic) BOOL currentPlaybackTimeDidChange;
@property (nonatomic, readonly) BOOL hasChanges;
@property (nonatomic) BOOL playPauseStateDidChange;
@property (nonatomic) BOOL playbackDurationDidChange;

- (void)_setCurrentPlaybackTimeDidChange:(BOOL)arg1;
- (void)_setPlayPauseStateDidChange:(BOOL)arg1;
- (void)_setPlaybackDurationDidChange:(BOOL)arg1;
- (BOOL)currentPlaybackTimeDidChange;
- (BOOL)hasChanges;
- (BOOL)playPauseStateDidChange;
- (BOOL)playbackDurationDidChange;

@end
