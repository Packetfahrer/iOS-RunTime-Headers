/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDResidentCommunicationHandler : NSObject <HAPTimerDelegate> {
    NSMapTable * _dispatchedReadRequests;
    NSUUID * _homeUUID;
    HMDIDSMessageDispatcher * _idsDispatcher;
    HAPTimer * _multiReadCoalesceTimer;
    NSMutableArray * _pendingReadRequests;
    NSString * _residentPeerAddress;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMapTable *dispatchedReadRequests;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) HMDIDSMessageDispatcher *idsDispatcher;
@property (nonatomic, retain) HAPTimer *multiReadCoalesceTimer;
@property (nonatomic, readonly) NSMutableArray *pendingReadRequests;
@property (nonatomic, readonly) NSString *residentPeerAddress;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (void)_clearAllGeneratedRequests:(id)arg1 error:(id)arg2;
+ (void)_clearAllPendingRequests:(id)arg1 error:(id)arg2;
+ (void)_processResponseForMultireadRequest:(id)arg1 overallError:(id)arg2 response:(id)arg3;
+ (id)createResponseSubset:(id)arg1 overallError:(id)arg2 readRequest:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)_processResponse:(id)arg1 overallError:(id)arg2 messageIdentifier:(id)arg3;
- (void)_redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (void)_sendMultipleCharacteristicRead;
- (void)dealloc;
- (id)description;
- (id)dispatchedReadRequests;
- (id)homeUUID;
- (id)idsDispatcher;
- (id)initWithHomeUUID:(id)arg1 residentAddress:(id)arg2 idsDispatcher:(id)arg3;
- (id)multiReadCoalesceTimer;
- (id)pendingReadRequests;
- (void)redispatchMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3;
- (id)residentPeerAddress;
- (void)setMultiReadCoalesceTimer:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
