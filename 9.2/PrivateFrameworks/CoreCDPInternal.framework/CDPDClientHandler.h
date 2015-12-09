/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol> {
    unsigned int  _clientType;
    NSXPCConnection * _connection;
    unsigned int  _entitlements;
}

- (void).cxx_destruct;
- (BOOL)_allowStateMachineAccess;
- (BOOL)_allowUtilityAccess;
- (void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)hasLocalSecretWithCompletion:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(unsigned int)arg2 clientType:(unsigned int)arg3;
- (void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(id /* block */)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned int)arg2 context:(id)arg3 completion:(id /* block */)arg4;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(id /* block */)arg2;
- (void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(id /* block */)arg3;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(id /* block */)arg2;

@end
