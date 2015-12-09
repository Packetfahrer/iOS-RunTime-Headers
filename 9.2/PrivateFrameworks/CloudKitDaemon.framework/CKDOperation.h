/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperation : NSOperation <CKDFlowControllable, CKDURLRequestAuthRetryDelegate, CKDURLRequestMetricsDelegate> {
    CKDOperationMetrics * _MMCSMetrics;
    unsigned long long  _activityID;
    BOOL  _allowsBackgroundNetworking;
    BOOL  _allowsCellularAccess;
    BOOL  _allowsPowerNapScheduling;
    NSString * _authPromptReason;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSMutableArray * _childOperations;
    NSObject<OS_dispatch_group> * _childOperationsGroup;
    CKDOperationMetrics * _cloudKitMetrics;
    CKDClientContext * _context;
    NSString * _deviceIdentifier;
    NSError * _error;
    NSMutableArray * _finishedChildOperationIDs;
    BOOL  _isExecuting;
    BOOL  _isFinished;
    NSDate * _metricExecuteStartDate;
    NSString * _operationID;
    CKDOperation * _parentOperation;
    NSString * _parentSectionID;
    <NSObject> * _powerAssertion;
    BOOL  _preferAnonymousRequests;
    CKDClientProxy * _proxy;
    CKDURLRequest * _request;
    NSMutableArray * _requestUUIDs;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSDate * _startDate;
    unsigned int  _state;
    NSObject<OS_dispatch_group> * _stateTransitionGroup;
    CKTimeLogger * _timeLogger;
    BOOL  _useEncryption;
}

@property (nonatomic, retain) CKDOperationMetrics *MMCSMetrics;
@property (nonatomic, readonly) unsigned int QOSClass;
@property unsigned long long activityID;
@property (nonatomic) BOOL allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling;
@property (nonatomic, retain) NSString *authPromptReason;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, retain) NSMutableArray *childOperations;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *childOperationsGroup;
@property (nonatomic, retain) CKDOperationMetrics *cloudKitMetrics;
@property (nonatomic, retain) CKDClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *finishedChildOperationIDs;
@property (nonatomic, readonly) NSString *flowControlKey;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isExecuting;
@property (nonatomic) BOOL isFinished;
@property (nonatomic, retain) NSDate *metricExecuteStartDate;
@property (nonatomic, readonly) NSString *operationID;
@property (nonatomic, readonly) CKOperationResult *operationResult;
@property (nonatomic) CKDOperation *parentOperation;
@property (nonatomic, retain) NSString *parentSectionID;
@property (nonatomic, retain) <NSObject> *powerAssertion;
@property (nonatomic) BOOL preferAnonymousRequests;
@property (nonatomic) CKDClientProxy *proxy;
@property (nonatomic, retain) CKDURLRequest *request;
@property (nonatomic, retain) NSMutableArray *requestUUIDs;
@property (nonatomic, readonly) NSString *sectionID;
@property (nonatomic, readonly) BOOL shouldCheckAppVersion;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned int state;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *stateTransitionGroup;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKTimeLogger *timeLogger;
@property (nonatomic) BOOL useEncryption;
@property (nonatomic, readonly) BOOL usesBackgroundSession;

+ (id)_globalOperationCallbackQueueForQOS:(int)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSMetrics;
- (unsigned int)QOSClass;
- (void)_acquirePowerAssertion;
- (BOOL)_checkAppVersion;
- (void)_combineMetricsWithOperation:(id)arg1;
- (void)_continueOperationStart;
- (void)_dropPowerAssertion;
- (BOOL)_errorShouldImpactFlowControl:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (unsigned long long)activityID;
- (unsigned long long)activityStart;
- (void)addAndRunChildOperation:(id)arg1;
- (BOOL)allowsBackgroundNetworking;
- (BOOL)allowsCellularAccess;
- (BOOL)allowsPowerNapScheduling;
- (id)authPromptReason;
- (id)callbackQueue;
- (void)cancel;
- (id)childOperations;
- (id)childOperationsGroup;
- (id)cloudKitMetrics;
- (void)configureRequest:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)error;
- (void)fillOutOperationResult:(id)arg1;
- (void)finishWithError:(id)arg1;
- (id)finishedChildOperationIDs;
- (id)flowControlKey;
- (unsigned int)hash;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (BOOL)isConcurrent;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (BOOL)makeStateTransition;
- (void)makeStateTransition:(BOOL)arg1;
- (id)metricExecuteStartDate;
- (id)nameForState:(unsigned int)arg1;
- (id)newChildOperationInfoOfClass:(Class)arg1;
- (id)operationID;
- (id)operationResult;
- (Class)operationResultClass;
- (BOOL)operationShouldBeFlowControlled;
- (id)parentOperation;
- (id)parentSectionID;
- (id)powerAssertion;
- (BOOL)preferAnonymousRequests;
- (id)proxy;
- (id)request;
- (void)requestDidBeginWaitingForUserAuth:(id)arg1;
- (void)requestDidEndWaitingForUserAuth:(id)arg1;
- (void)requestDidFinishWithMetrics:(id)arg1;
- (id)requestUUIDs;
- (id)sectionID;
- (void)setActivityID:(unsigned long long)arg1;
- (void)setAllowsBackgroundNetworking:(BOOL)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setAllowsPowerNapScheduling:(BOOL)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setCallbackQueue:(id)arg1;
- (void)setChildOperations:(id)arg1;
- (void)setChildOperationsGroup:(id)arg1;
- (void)setCloudKitMetrics:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFinishedChildOperationIDs:(id)arg1;
- (void)setIsExecuting:(BOOL)arg1;
- (void)setIsFinished:(BOOL)arg1;
- (void)setMMCSMetrics:(id)arg1;
- (void)setMetricExecuteStartDate:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPowerAssertion:(id)arg1;
- (void)setPreferAnonymousRequests:(BOOL)arg1;
- (void)setProxy:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStateTransitionGroup:(id)arg1;
- (void)setTimeLogger:(id)arg1;
- (void)setUseEncryption:(BOOL)arg1;
- (BOOL)shouldCheckAppVersion;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)start;
- (id)startDate;
- (unsigned int)state;
- (id)stateTransitionGroup;
- (id)timeLogger;
- (BOOL)useEncryption;
- (BOOL)usesBackgroundSession;

@end
