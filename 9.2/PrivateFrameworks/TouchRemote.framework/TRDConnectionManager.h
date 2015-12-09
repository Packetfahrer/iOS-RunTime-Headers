/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDConnectionManager : NSObject <TRTCPConnectionDelegate> {
    NSMapTable * _XPCConnectionToConnectionToPacketEventClasses;
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _connectionDelegateQueue;
    NSMapTable * _connectionToXPCConnectionOwners;
    NSMapTable * _serviceToConnection;
    NSMapTable * _serviceToConnectionCompletionHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)TRXPCD_closeConnectionWithUniqueIdentifier:(int)arg1;
- (void)TRXPCD_connectToService:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)TRXPCD_connectionWithUniqueIdentifier:(int)arg1 sendPacketEvent:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)TRXPCD_connectionWithUniqueIdentifier:(int)arg1 setRelevantReceivedPacketEventTypes:(id)arg2;
- (void)_XPCServerDidInvalidateClientConnectionNotification:(id)arg1;
- (void)_callConnectionCompletionHandlersForService:(id)arg1 withConnection:(id)arg2 error:(id)arg3;
- (id)_existingConnectionForConnectionUniqueIdentifier:(int)arg1;
- (id)_existingConnectionForService:(id)arg1;
- (id)_init;
- (id)_packetEventClassesForPacketEventTypes:(id)arg1;
- (void)connectToService:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)connection:(id)arg1 didReceivePacketEvent:(id)arg2;
- (void)connectionDidClose:(id)arg1;
- (void)dealloc;
- (id)init;

@end
