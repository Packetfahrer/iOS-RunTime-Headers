/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOXPCClientLogAdaptor : GEOBaseLogAdaptor {
    NSMutableArray * _failedLogMessages;
    NSLock * _failedLogMessagesLock;
    BOOL  _flushLogsFailed;
    NSObject<OS_dispatch_queue> * _serverConnectionQueue;
    id /* block */  _xpcConnectionEstablishedCallback;
}

- (void)_createAndSendXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_handleFailedXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_resendFailedXPCMessages;
- (void)dealloc;
- (void)flushLogs;
- (id)init;
- (void)queueLogMessage:(id)arg1;
- (void)setupXPCRemoteAdatorsWithOptions:(id)arg1 connectionEstablishedCallback:(id /* block */)arg2;

@end
