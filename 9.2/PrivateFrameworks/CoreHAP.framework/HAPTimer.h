/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPTimer : NSObject {
    <HAPTimerDelegate> * _delegate;
    NSDate * _fireDate;
    unsigned int  _options;
    BOOL  _running;
    double  _timeInterval;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property <HAPTimerDelegate> *delegate;
@property (nonatomic, readonly) NSDate *fireDate;
@property (nonatomic, readonly) unsigned int options;
@property (getter=isRunning, nonatomic) BOOL running;
@property (nonatomic, readonly) double timeInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_handleExpiration;
- (void)_kick;
- (void)_resume;
- (void)_suspend;
- (void)dealloc;
- (id)delegate;
- (id)fireDate;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned int)arg2;
- (BOOL)isRunning;
- (void)kick;
- (unsigned int)options;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setRunning:(BOOL)arg1;
- (void)suspend;
- (double)timeInterval;
- (id)timer;
- (id)workQueue;

@end
