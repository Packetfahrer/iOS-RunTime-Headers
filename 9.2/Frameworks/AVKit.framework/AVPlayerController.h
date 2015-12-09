/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerController : UIResponder {
    NSError * _error;
    AVPlayer * _player;
    int  _status;
}

@property (nonatomic) BOOL CALayerDestinationIsTVOut;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) BOOL hasDiscoveredVideo;
@property (nonatomic, readonly) AVPlayer *player;
@property (getter=isPlayingOnSecondScreen, nonatomic) BOOL playingOnSecondScreen;
@property (nonatomic, readonly) int status;

+ (void)initialize;

- (void).cxx_destruct;
- (BOOL)CALayerDestinationIsTVOut;
- (BOOL)allowsExternalPlayback;
- (id)audioMediaSelectionOptions;
- (void)autoplay:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (BOOL)canPause;
- (BOOL)canPlay;
- (BOOL)canScanBackward;
- (BOOL)canScanForward;
- (BOOL)canSeek;
- (BOOL)canSeekChapterBackward;
- (BOOL)canSeekChapterForward;
- (BOOL)canSeekFrameBackward;
- (BOOL)canSeekFrameForward;
- (BOOL)canSeekToBeginning;
- (BOOL)canSeekToEnd;
- (BOOL)canTogglePlayback;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (id)contentChapters;
- (struct CGSize { float x1; float x2; })contentDimensions;
- (double)contentDuration;
- (double)contentDurationWithinEndTimes;
- (id)currentAudioMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (double)currentTime;
- (double)currentTimeWithinEndTimes;
- (void)decreaseVolume:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (id)error;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (int)externalPlaybackType;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (BOOL)hasAudioMediaSelectionOptions;
- (BOOL)hasContent;
- (BOOL)hasContentChapters;
- (BOOL)hasDiscoveredVideo;
- (BOOL)hasEnabledAudio;
- (BOOL)hasEnabledVideo;
- (BOOL)hasLegibleMediaSelectionOptions;
- (BOOL)hasLiveStreamingContent;
- (BOOL)hasMediaSelectionOptions;
- (BOOL)hasShareableContent;
- (BOOL)hasTrimmableContent;
- (void)increaseVolume:(id)arg1;
- (id)initWithPlayer:(id)arg1;
- (BOOL)isAtMaxTime;
- (BOOL)isAtMinTime;
- (BOOL)isCompatibleWithAirPlayVideo;
- (BOOL)isExternalPlaybackActive;
- (BOOL)isLooping;
- (BOOL)isPictureInPictureInterrupted;
- (BOOL)isPictureInPicturePossible;
- (BOOL)isPlaying;
- (BOOL)isPlayingOnExternalScreen;
- (BOOL)isPlayingOnSecondScreen;
- (BOOL)isSeeking;
- (id)legibleMediaSelectionOptions;
- (id)loadedTimeRanges;
- (double)maxTime;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (id)metadata;
- (double)minTime;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (id)player;
- (double)rate;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (void)seekByTimeInterval:(double)arg1;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekChapterBackward:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (void)seekFrameForward:(id)arg1;
- (void)seekToBeginning:(id)arg1;
- (void)seekToChapter:(id)arg1;
- (void)seekToEnd:(id)arg1;
- (void)seekToTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (id)seekableTimeRanges;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (void)setCALayerDestinationIsTVOut:(BOOL)arg1;
- (void)setCanPause:(BOOL)arg1;
- (void)setContentDuration:(double)arg1;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (void)setLooping:(BOOL)arg1;
- (void)setMaxTime:(double)arg1;
- (void)setMinTime:(double)arg1;
- (void)setPictureInPictureInterrupted:(BOOL)arg1;
- (void)setPlaying:(BOOL)arg1;
- (void)setPlayingOnSecondScreen:(BOOL)arg1;
- (void)setRate:(double)arg1;
- (void)setRateWithForce:(double)arg1;
- (void)setRateWithThrottling:(double)arg1;
- (void)setVolume:(double)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (int)status;
- (id)timing;
- (void)toggleMuted:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (double)volume;

@end
