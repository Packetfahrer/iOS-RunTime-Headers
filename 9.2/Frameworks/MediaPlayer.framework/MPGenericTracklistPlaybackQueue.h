/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPGenericTracklistPlaybackQueue : MPRemotePlaybackQueue {
    unsigned int  _shuffleType;
    NSArray * _trackIdentifiers;
}

@property (nonatomic, readonly) unsigned int shuffleType;
@property (nonatomic, readonly) NSArray *trackIdentifiers;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (void).cxx_destruct;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { }*)arg1;
- (unsigned int)shuffleType;
- (id)trackIdentifiers;
- (BOOL)verifyWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)createPlaybackContext;

@end
