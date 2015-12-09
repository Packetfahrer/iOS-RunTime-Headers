/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDemoDataModule : NSObject {
    <_HDDemoDataModuleDelegate> * _delegate;
    NSDate * _lastFireDate;
    NSOperationQueue * _operationQueue;
    NSObject<OS_dispatch_source> * _timerSource;
}

@property (nonatomic) <_HDDemoDataModuleDelegate> *delegate;
@property (nonatomic, readonly) NSDate *lastFireDate;
@property (nonatomic, readonly) double nextFireInterval;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)handleDataObject:(id)arg1;
- (id)initWithOperationQueue:(id)arg1;
- (id)lastFireDate;
- (double)nextFireInterval;
- (void)scheduleNextFire;
- (void)scheduleNextFireWithInterval:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;
- (void)timerDidFireWithInterval:(double)arg1;

@end
