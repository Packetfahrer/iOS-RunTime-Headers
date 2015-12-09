/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeAssistantOperation : NSObject <HAPTimerDelegate> {
    NSSet * _accessoriesToOperateOn;
    HAPTimer * _accessoryConnectivityWaitTimer;
    id /* block */  _completionHandler;
    BOOL  _completionHandlerCalled;
    NSMutableSet * _reachableAccessoriesToOperateOn;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) NSSet *accessoriesToOperateOn;
@property (nonatomic, readonly) HAPTimer *accessoryConnectivityWaitTimer;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) BOOL completionHandlerCalled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSMutableSet *reachableAccessoriesToOperateOn;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)homeAssistantOperationWithActionSet:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithReadRequests:(id)arg1 queue:(id)arg2;
+ (id)homeAssistantOperationWithWriteRequests:(id)arg1 queue:(id)arg2;

- (void).cxx_destruct;
- (void)_callCompletion;
- (BOOL)_testForReachability;
- (id)accessoriesToOperateOn;
- (id)accessoryConnectivityWaitTimer;
- (id /* block */)completionHandler;
- (BOOL)completionHandlerCalled;
- (void)dealloc;
- (void)handleAccessoryIsReachable:(id)arg1;
- (id)initWithAccessories:(id)arg1 queue:(id)arg2;
- (id)reachableAccessoriesToOperateOn;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlerCalled:(BOOL)arg1;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
