/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPChangePlaybackPositionCommand : MPRemoteCommand {
    BOOL  _canBeControlledByScrubbing;
}

@property (nonatomic) BOOL canBeControlledByScrubbing;

- (id)_mediaRemoteCommandInfoOptions;
- (BOOL)canBeControlledByScrubbing;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)setCanBeControlledByScrubbing:(BOOL)arg1;

@end
