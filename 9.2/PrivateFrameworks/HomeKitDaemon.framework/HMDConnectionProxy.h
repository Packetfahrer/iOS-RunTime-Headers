/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDConnectionProxy : NSObject <HMDaemonConnection> {
    BOOL  _activated;
    unsigned int  _activeMessageCount;
    NSObject<OS_dispatch_group> * _activeMessageTracker;
    HMDApplicationRegistry * _appRegistry;
    NSString * _clientName;
    BOOL  _entitledForAPIAccess;
    BOOL  _entitledForBackgroundMode;
    BOOL  _entitledForSPIAccess;
    NSMutableSet * _pendingRequests;
    NSDictionary * _privateAccessEntitlement;
    HMDProcessInfo * _processInfo;
    BOOL  _ready;
    HMMessageDispatcher * _recvDispatcher;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic) BOOL activated;
@property (nonatomic) unsigned int activeMessageCount;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *activeMessageTracker;
@property (nonatomic, readonly) NSSet *activeRequests;
@property (nonatomic) HMDApplicationRegistry *appRegistry;
@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (getter=isAuthorizedForHomeDataAccess, nonatomic, readonly) BOOL authorizedForHomeDataAccess;
@property (getter=isAuthorizedForLocationAccess, nonatomic, readonly) BOOL authorizedForLocationAccess;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, readonly) int clientPid;
@property (nonatomic, readonly) NSString *companionAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *effectiveLocationBundleIdentifier;
@property (getter=isEntitledForAPIAccess, nonatomic, readonly) BOOL entitledForAPIAccess;
@property (getter=isEntitledForBackgroundMode, nonatomic, readonly) BOOL entitledForBackgroundMode;
@property (getter=isEntitledForSPIAccess, nonatomic, readonly) BOOL entitledForSPIAccess;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSMutableSet *pendingRequests;
@property (nonatomic, retain) NSDictionary *privateAccessEntitlement;
@property (nonatomic) HMDProcessInfo *processInfo;
@property (nonatomic) BOOL ready;
@property (nonatomic, retain) HMMessageDispatcher *recvDispatcher;
@property (nonatomic, readonly) id remoteProxy;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *teamIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_displayName;
- (void)_notifyOfNewIncomingClientMessage;
- (void)activate;
- (BOOL)activated;
- (unsigned int)activeMessageCount;
- (id)activeMessageTracker;
- (id)activeRequests;
- (id)appRegistry;
- (id)applicationBundleIdentifier;
- (void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(id /* block */)arg6;
- (id)clientName;
- (int)clientPid;
- (id)companionAppBundleIdentifier;
- (void)deactivate;
- (void)dealloc;
- (id)description;
- (id)effectiveLocationBundleIdentifier;
- (id)extractTeamIdentifier;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id /* block */)arg5;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4 appRegistry:(id)arg5;
- (BOOL)isAuthorizedForHomeDataAccess;
- (BOOL)isAuthorizedForLocationAccess;
- (BOOL)isEntitledForAPIAccess;
- (BOOL)isEntitledForBackgroundMode;
- (BOOL)isEntitledForSPIAccess;
- (id)name;
- (id)pendingRequests;
- (id)privateAccessEntitlement;
- (id)processInfo;
- (BOOL)ready;
- (void)recheckinWithName:(id)arg1;
- (id)recvDispatcher;
- (id)remoteProxy;
- (void)setActivated:(BOOL)arg1;
- (void)setActiveMessageCount:(unsigned int)arg1;
- (void)setActiveMessageTracker:(id)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setPendingRequests:(id)arg1;
- (void)setPrivateAccessEntitlement:(id)arg1;
- (void)setProcessInfo:(id)arg1;
- (void)setReady:(BOOL)arg1;
- (void)setRecvDispatcher:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (BOOL)shouldSendResponseForMessageIdentifier:(id)arg1;
- (id)teamIdentifier;
- (id)workQueue;
- (id)xpcConnection;

@end
