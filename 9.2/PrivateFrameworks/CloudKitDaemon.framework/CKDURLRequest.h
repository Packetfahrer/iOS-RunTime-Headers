/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDURLRequest : NSObject <CKDFlowControllable, CKDProtobufMessageSigningDelegate, CKDURLSessionTaskDelegate> {
    <CKDAccountInfoProvider> * _accountInfoProvider;
    unsigned long long  _activityID;
    BOOL  _allowAutomaticRedirects;
    BOOL  _allowsBackgroundNetworking;
    BOOL  _allowsCellularAccess;
    BOOL  _allowsPowerNapScheduling;
    NSString * _authPromptReason;
    <CKDURLRequestAuthRetryDelegate> * _authRetryDelegate;
    NSFileHandle * _binaryRequestFileHandle;
    NSString * _binaryRequestLogFilePath;
    NSFileHandle * _binaryResponseFileHandle;
    NSString * _binaryResponseLogFilePath;
    int  _cachedPartitionType;
    int  _cachedServerType;
    BOOL  _cancelled;
    id /* block */  _completionBlock;
    CKDClientContext * _context;
    int  _databaseScope;
    NSDate * _dateRequestWentOut;
    NSOperationQueue * _delegateQueue;
    NSString * _deviceID;
    BOOL  _didFinishLoading;
    BOOL  _didRetryAuth;
    BOOL  _didRetrySignature;
    BOOL  _didSendRequest;
    NSError * _error;
    NSData * _fakeResponseData;
    BOOL  _finished;
    NSString * _flowControlKey;
    NSString * _hardwareIDOverride;
    BOOL  _haveCachedPartitionType;
    BOOL  _haveCachedServerType;
    BOOL  _haveParsedFakeResponseData;
    BOOL  _isHandlingAuthRetry;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _mescalRxSignature;
    struct CC_SHA256state_st { 
        unsigned int count[2]; 
        unsigned int hash[8]; 
        unsigned int wbuf[16]; 
    }  _mescalTxSignature;
    CKDOperationMetrics * _metrics;
    <CKDURLRequestMetricsDelegate> * _metricsDelegate;
    BOOL  _needsAuthRetry;
    unsigned int  _numDownloadedElements;
    NSMutableDictionary * _overriddenHeaders;
    BOOL  _preferAnonymousRequests;
    int  _qualityOfService;
    NSMutableData * _receivedMescalData;
    NSMutableArray * _redirectHistory;
    NSURLRequest * _request;
    NSFileHandle * _requestFileHandle;
    NSString * _requestLogFilePath;
    NSArray * _requestOperations;
    id /* block */  _requestProgressBlock;
    NSDictionary * _requestProperties;
    NSString * _requestUUID;
    NSHTTPURLResponse * _response;
    <CKDResponseBodyParser> * _responseBodyParser;
    NSFileHandle * _responseFileHandle;
    NSString * _responseLogFilePath;
    id /* block */  _responseProgressBlock;
    int  _responseStatusCode;
    NSURLSessionConfiguration * _sessionConfiguration;
    NSString * _sessionConfigurationName;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    CKDProtobufStreamWriter * _streamWriter;
    CKTimeLogger * _timeLogger;
    double  _timeoutInterval;
    CKBlockingAsyncQueue * _trafficQueue;
    CKDProtocolTranslator * _translator;
    unsigned long long  _transmissionActivityID;
    NSURLSessionDataTask * _urlSessionTask;
    NSObject<OS_voucher> * _voucher;
}

@property (nonatomic, readonly) NSString *acceptContentType;
@property (nonatomic, retain) <CKDAccountInfoProvider> *accountInfoProvider;
@property (nonatomic, readonly) NSDictionary *additionalHeaderValues;
@property (nonatomic) BOOL allowAutomaticRedirects;
@property (nonatomic) BOOL allowsBackgroundNetworking;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling;
@property (nonatomic, retain) NSString *authPromptReason;
@property (nonatomic) <CKDURLRequestAuthRetryDelegate> *authRetryDelegate;
@property (nonatomic, retain) NSFileHandle *binaryRequestFileHandle;
@property (nonatomic, retain) NSString *binaryRequestLogFilePath;
@property (nonatomic, retain) NSFileHandle *binaryResponseFileHandle;
@property (nonatomic, retain) NSString *binaryResponseLogFilePath;
@property (nonatomic) int cachedPartitionType;
@property (nonatomic) int cachedServerType;
@property (getter=isCancelled) BOOL cancelled;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) CKDClientContext *context;
@property (nonatomic) int databaseScope;
@property (retain) NSDate *dateRequestWentOut;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *deviceID;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *flowControlKey;
@property (nonatomic, retain) NSString *hardwareIDOverride;
@property (nonatomic, readonly) BOOL hasRequestBody;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL haveCachedPartitionType;
@property (nonatomic) BOOL haveCachedServerType;
@property (nonatomic, readonly) NSString *httpMethod;
@property (readonly) BOOL isFinished;
@property BOOL isHandlingAuthRetry;
@property (nonatomic, readonly) int isolationLevel;
@property (nonatomic, readonly) NSURL *lastRedirectURL;
@property (nonatomic, retain) CKDOperationMetrics *metrics;
@property (nonatomic) <CKDURLRequestMetricsDelegate> *metricsDelegate;
@property BOOL needsAuthRetry;
@property (nonatomic) unsigned int numDownloadedElements;
@property (nonatomic, readonly) int operationType;
@property (nonatomic, readonly) int partitionType;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic) BOOL preferAnonymousRequests;
@property (nonatomic, readonly) NSString *protobufOperationName;
@property (nonatomic) int qualityOfService;
@property (retain) NSURLRequest *request;
@property (nonatomic, readonly) NSInputStream *requestBodyStream;
@property (nonatomic, readonly) NSString *requestContentType;
@property (nonatomic, retain) NSFileHandle *requestFileHandle;
@property (nonatomic, retain) NSString *requestLogFilePath;
@property (nonatomic, readonly) NSArray *requestOperationClasses;
@property (nonatomic, readonly) NSArray *requestOperations;
@property (nonatomic, copy) id /* block */ requestProgressBlock;
@property (nonatomic, retain) NSDictionary *requestProperties;
@property (nonatomic, readonly) NSString *requestUUID;
@property (retain) NSHTTPURLResponse *response;
@property (nonatomic, retain) <CKDResponseBodyParser> *responseBodyParser;
@property (nonatomic, retain) NSFileHandle *responseFileHandle;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, retain) NSString *responseLogFilePath;
@property (nonatomic, copy) id /* block */ responseProgressBlock;
@property (nonatomic, readonly) int responseStatusCode;
@property (nonatomic, readonly) NSString *sectionID;
@property (nonatomic, readonly) int serverType;
@property (retain) NSURLSessionConfiguration *sessionConfiguration;
@property (retain) NSString *sessionConfigurationName;
@property (nonatomic, readonly) BOOL shouldCompressBody;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) CKDProtobufStreamWriter *streamWriter;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKTimeLogger *timeLogger;
@property (nonatomic) double timeoutInterval;
@property (nonatomic, retain) CKBlockingAsyncQueue *trafficQueue;
@property (nonatomic, retain) CKDProtocolTranslator *translator;
@property (nonatomic, readonly) NSURL *url;
@property (retain) NSURLSessionDataTask *urlSessionTask;
@property (nonatomic, readonly) BOOL usesBackgroundSession;
@property (nonatomic, retain) NSObject<OS_voucher> *voucher;

+ (id)_logQueue;
+ (id)_sharedCookieStorage;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)URLSessionDataTask:(id)arg1 didReceiveData:(id)arg2;
- (void)URLSessionDataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)URLSessionTask:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (void)URLSessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLSessionTask:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (void)URLSessionTask:(id)arg1 needNewBodyStream:(id /* block */)arg2;
- (id)URLSessionTask:(id)arg1 requestForEstablishedConnection:(id)arg2;
- (void)URLSessionTask:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSessionTaskIsWaitingForConnection:(id)arg1;
- (void)_acquireZoneGates;
- (void)_addRequestHeadersToTransmittedSignature:(id)arg1;
- (void)_addResponseHeadersToReceivedSignature:(id)arg1;
- (id)_binaryRequestFileHandle;
- (id)_binaryResponseFileHandle;
- (id)_errorFromHTTPResponse:(id)arg1;
- (void)_fetchContainerScopedUserID;
- (void)_fetchDeviceID;
- (void)_flushRequestResponseLogs;
- (void)_handleAuthFailure;
- (void)_handleBadPasswordResponse;
- (void)_handleMescalSignatureResponse:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (int)_handlePlistResult:(id)arg1;
- (int)_handleServerJSONResult:(id)arg1;
- (int)_handleServerProtobufResult:(id)arg1 rawData:(id)arg2;
- (id /* block */)_jsonObjectParsedBlock;
- (void)_loadRequest:(id)arg1;
- (void)_logHTTPResponse:(id)arg1;
- (void)_logParsedObject:(id)arg1;
- (void)_logRequest:(id)arg1;
- (void)_logRequestObject:(id)arg1;
- (void)_makeTrafficFileHandleWithPrefix:(id)arg1 outPath:(id*)arg2 outHandle:(id*)arg3;
- (void)_performRequest;
- (void)_populateURLSessionConfiguration;
- (id /* block */)_protobufObjectParsedBlock;
- (void)_registerPushTokens;
- (id)_requestFileHandle;
- (id)_responseFileHandle;
- (void)_setupConfiguration;
- (void)_setupMescal;
- (void)_setupPublicDatabaseURL;
- (void)_tearDownStreamWriter;
- (id)_versionHeader;
- (id /* block */)_xmlObjectParsedBlock;
- (id)acceptContentType;
- (id)accountInfoProvider;
- (id)additionalHeaderValues;
- (BOOL)allowAutomaticRedirects;
- (BOOL)allowsAnonymousAccount;
- (BOOL)allowsAuthedAccount;
- (BOOL)allowsBackgroundNetworking;
- (BOOL)allowsCellularAccess;
- (BOOL)allowsPowerNapScheduling;
- (id)authPromptReason;
- (id)authRetryDelegate;
- (id)binaryRequestFileHandle;
- (id)binaryRequestLogFilePath;
- (id)binaryResponseFileHandle;
- (id)binaryResponseLogFilePath;
- (unsigned int)cachePolicy;
- (int)cachedPartitionType;
- (int)cachedServerType;
- (void)cancel;
- (id)ckShortDescription;
- (id /* block */)completionBlock;
- (id)context;
- (int)databaseScope;
- (id)dateRequestWentOut;
- (void)dealloc;
- (id)defaultParserForContentType:(id)arg1;
- (id)delegateQueue;
- (id)description;
- (id)deviceID;
- (id)error;
- (Class)expectedResponseClass;
- (BOOL)expectsSingleObject;
- (void)finishWithError:(id)arg1;
- (id)flowControlKey;
- (void)generateSignature:(id /* block */)arg1;
- (id)hardwareIDOverride;
- (BOOL)hasRequestBody;
- (BOOL)haveCachedPartitionType;
- (BOOL)haveCachedServerType;
- (id)httpMethod;
- (BOOL)includeContainerInfo;
- (void)inheritParentSectionID:(id)arg1;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isHandlingAuthRetry;
- (int)isolationLevel;
- (id)lastRedirectURL;
- (BOOL)markAsFinished;
- (id)metrics;
- (id)metricsDelegate;
- (BOOL)needsAuthRetry;
- (unsigned int)numDownloadedElements;
- (id)operationRequestWithType:(int)arg1;
- (int)operationType;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (int)partitionType;
- (id)path;
- (void)performRequest;
- (BOOL)preferAnonymousRequests;
- (id)protobufOperationName;
- (int)qualityOfService;
- (void)reportStatusWithError:(id)arg1;
- (id)request;
- (id)requestBodyStream;
- (id)requestContentType;
- (void)requestDidParseJSONObject:(id)arg1;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParsePlaintextObject:(id)arg1;
- (void)requestDidParsePlistObject:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestFileHandle;
- (id)requestLogFilePath;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id /* block */)requestProgressBlock;
- (id)requestProperties;
- (id)requestUUID;
- (BOOL)requiresAppPartitionURL;
- (BOOL)requiresConfiguration;
- (BOOL)requiresDeviceID;
- (BOOL)requiresSignature;
- (BOOL)requiresTokenRegistration;
- (id)response;
- (id)responseBodyParser;
- (id)responseFileHandle;
- (id)responseHeaders;
- (id)responseLogFilePath;
- (id /* block */)responseProgressBlock;
- (int)responseStatusCode;
- (id)sectionID;
- (BOOL)sendRequestAnonymously;
- (int)serverType;
- (id)sessionConfiguration;
- (id)sessionConfigurationName;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setAllowAutomaticRedirects:(BOOL)arg1;
- (void)setAllowsBackgroundNetworking:(BOOL)arg1;
- (void)setAllowsCellularAccess:(BOOL)arg1;
- (void)setAllowsPowerNapScheduling:(BOOL)arg1;
- (void)setAuthPromptReason:(id)arg1;
- (void)setAuthRetryDelegate:(id)arg1;
- (void)setBinaryRequestFileHandle:(id)arg1;
- (void)setBinaryRequestLogFilePath:(id)arg1;
- (void)setBinaryResponseFileHandle:(id)arg1;
- (void)setBinaryResponseLogFilePath:(id)arg1;
- (void)setCachedPartitionType:(int)arg1;
- (void)setCachedServerType:(int)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setDatabaseScope:(int)arg1;
- (void)setDateRequestWentOut:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setError:(id)arg1;
- (void)setFlowControlKey:(id)arg1;
- (void)setHardwareIDOverride:(id)arg1;
- (void)setHaveCachedPartitionType:(BOOL)arg1;
- (void)setHaveCachedServerType:(BOOL)arg1;
- (void)setIsHandlingAuthRetry:(BOOL)arg1;
- (void)setMetrics:(id)arg1;
- (void)setMetricsDelegate:(id)arg1;
- (void)setNeedsAuthRetry:(BOOL)arg1;
- (void)setNumDownloadedElements:(unsigned int)arg1;
- (void)setPreferAnonymousRequests:(BOOL)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestFileHandle:(id)arg1;
- (void)setRequestLogFilePath:(id)arg1;
- (void)setRequestProgressBlock:(id /* block */)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)setResponseFileHandle:(id)arg1;
- (void)setResponseLogFilePath:(id)arg1;
- (void)setResponseProgressBlock:(id /* block */)arg1;
- (void)setSessionConfiguration:(id)arg1;
- (void)setSessionConfigurationName:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setTimeLogger:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTrafficQueue:(id)arg1;
- (void)setTranslator:(id)arg1;
- (void)setUrlSessionTask:(id)arg1;
- (void)setVoucher:(id)arg1;
- (BOOL)shouldCompressBody;
- (BOOL)shouldLogResponseBody;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)streamWriter;
- (void)tearDownResources;
- (void)tearDownResourcesAndReleaseTheZoneLocks;
- (id)timeLogger;
- (double)timeoutInterval;
- (id)trafficQueue;
- (id)translator;
- (void)updateSignatureWithReceivedBytes:(id)arg1;
- (void)updateSignatureWithTransmittedBytes:(id)arg1;
- (id)url;
- (id)urlSessionTask;
- (BOOL)usesBackgroundSession;
- (BOOL)validate:(id*)arg1;
- (id)voucher;
- (id)zoneIDsToLock;

@end
