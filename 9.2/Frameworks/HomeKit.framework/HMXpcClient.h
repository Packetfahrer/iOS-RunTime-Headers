/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMXpcClient : NSObject <HMMessageTransport> {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    BOOL  _connectionValid;
    HMMessageDispatcher * _messageDispatcher;
    int  _notifyRegisterToken;
    BOOL  _notifyRegistered;
    id /* block */  _reconnectionHandler;
    BOOL  _requiresCheckin;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL connectionValid;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) HMMessageDispatcher *messageDispatcher;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) BOOL notifyRegistered;
@property (nonatomic, copy) id /* block */ reconnectionHandler;
@property (nonatomic) BOOL requiresCheckin;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)callbackQueue;
- (id)connection;
- (BOOL)connectionValid;
- (void)dealloc;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id /* block */)arg5;
- (id)init;
- (id)messageDispatcher;
- (int)notifyRegisterToken;
- (BOOL)notifyRegistered;
- (void)recheckinIfRequired:(id)arg1;
- (id /* block */)reconnectionHandler;
- (void)registerReconnectionHandler:(id /* block */)arg1;
- (BOOL)requiresCheckin;
- (void)setCallbackQueue:(id)arg1;
- (void)setConnectionValid:(BOOL)arg1;
- (void)setNotifyRegisterToken:(int)arg1;
- (void)setNotifyRegistered:(BOOL)arg1;
- (void)setReconnectionHandler:(id /* block */)arg1;
- (void)setRequiresCheckin:(BOOL)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;

@end
