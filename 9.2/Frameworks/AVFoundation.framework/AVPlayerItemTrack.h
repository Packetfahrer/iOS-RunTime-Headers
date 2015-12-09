/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemTrack : NSObject {
    AVPlayerItemTrackInternal * _playerItemTrack;
}

@property (nonatomic, readonly) AVAssetTrack *assetTrack;
@property (nonatomic, readonly) float currentVideoFrameRate;
@property (getter=isEnabled, nonatomic) BOOL enabled;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;

- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem { }*)arg1 readyForInspection:(BOOL)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (id)_playerItem;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (void)_transferCachedValuesToFig;
- (void)_transferEnabledToFig;
- (void)_transferLoudnessInfoToFig;
- (id)_weakReferenceToPlayerItem;
- (id)assetTrack;
- (float)currentVideoFrameRate;
- (void)dealloc;
- (id)description;
- (id)fallbackTrack;
- (void)finalize;
- (unsigned int)hash;
- (BOOL)isEnabled;
- (BOOL)isEqual:(id)arg1;
- (id)loudnessInfo;
- (void)setEnabled:(BOOL)arg1;
- (void)setLoudnessInfo:(id)arg1;
- (int)trackID;

@end
