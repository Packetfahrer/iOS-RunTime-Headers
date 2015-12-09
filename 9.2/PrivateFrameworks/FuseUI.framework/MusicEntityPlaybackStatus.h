/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityPlaybackStatus : NSObject <NSCopying, NSMutableCopying> {
    double  _playbackCurrentTime;
    double  _playbackCurrentTimeOriginatingTime;
    int  _playbackDisplayState;
    double  _playbackDuration;
    float  _playbackRate;
}

@property (nonatomic, readonly) double playbackCurrentTime;
@property (nonatomic, readonly) int playbackDisplayState;
@property (nonatomic, readonly) double playbackDuration;
@property (nonatomic, readonly) float playbackRate;
@property (nonatomic, readonly) BOOL shouldDisplayPlaying;

- (id)_copyWithClass:(Class)arg1 zone:(struct _NSZone { }*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)playbackCurrentTime;
- (int)playbackDisplayState;
- (double)playbackDuration;
- (float)playbackRate;
- (BOOL)shouldDisplayPlaying;

@end
