/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface _IMTimingInstance : NSObject {
    BOOL  _isRunning;
    double  _startTiming;
    double  _stopTiming;
    double  _totalTime;
}

@property (nonatomic) BOOL isRunning;
@property (nonatomic) double totalTime;

+ (id)createTimingInstanceWithStartTime:(float)arg1;

- (id)description;
- (id)init;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (void)setTotalTime:(double)arg1;
- (void)startUsingTime:(double)arg1;
- (void)stopUsingTime:(double)arg1;
- (double)totalTime;

@end
