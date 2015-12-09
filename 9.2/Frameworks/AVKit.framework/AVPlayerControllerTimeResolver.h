/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerControllerTimeResolver : NSObject <NSCoding> {
    double  _currentTime;
    double  _interval;
    AVPlayerController * _playerController;
    double  _resolution;
    NSTimer * _timer;
}

@property double currentTime;
@property (getter=isCurrentTimeAtEndOfSeekableTimeRanges, readonly) BOOL currentTimeAtEndOfSeekableTimeRanges;
@property double currentTimeWithinEndTimes;
@property double interval;
@property (retain) AVPlayerController *playerController;
@property (readonly) double remainingTime;
@property (readonly) double remainingTimeWithinEndTimes;
@property double resolution;
@property (getter=isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges, readonly) BOOL thirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;

+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;
+ (id)keyPathsForValuesAffectingCurrentTimeAtEndOfSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingRemainingTime;
+ (id)keyPathsForValuesAffectingRemainingTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;

- (void).cxx_destruct;
- (double)currentTime;
- (double)currentTimeWithinEndTimes;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)interval;
- (BOOL)isCurrentTimeAtEndOfSeekableTimeRanges;
- (BOOL)isThirtySecondsBeforeCurrentTimeWithinSeekableTimeRanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)playerController;
- (double)remainingTime;
- (double)remainingTimeWithinEndTimes;
- (double)resolution;
- (void)setCurrentTime:(double)arg1;
- (void)setCurrentTimeWithinEndTimes:(double)arg1;
- (void)setInterval:(double)arg1;
- (void)setPlayerController:(id)arg1;
- (void)setResolution:(double)arg1;

@end
