/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2PacketTunnelProvider : NEPacketTunnelProvider {
    NSDictionary * _childConfig;
    id /* block */  _dnsResolverCompletionHandler;
    unsigned int  _flags;
    NSObject<OS_dispatch_semaphore> * _getSocketSemaphore;
    BOOL  _hasNAT;
    unsigned int  _ifIndex;
    unsigned int  _ikeChildID;
    NSArray * _ikeConfig;
    struct NEIPSecIKE_s { } * _ikeRef;
    BOOL  _isIfCellular;
    NEIKEv2MOBIKE * _mobikeHandle;
    NSDictionary * _options;
    int  _pathStatus;
    NSObject<OS_dispatch_queue> * _queue;
    NEIKEv2Rekey * _rekey;
    NWResolver * _resolver;
    NEIKEv2Server * _serverAddresses;
    id /* block */  _startTunnelCompletionHandler;
    struct NEVirtualInterface_s { } * _virtualInterface;
}

@property (retain) NSDictionary *childConfig;
@property (copy) id /* block */ dnsResolverCompletionHandler;
@property unsigned int flags;
@property (retain) NSObject<OS_dispatch_semaphore> *getSocketSemaphore;
@property BOOL hasNAT;
@property unsigned int ifIndex;
@property unsigned int ikeChildID;
@property (retain) NSArray *ikeConfig;
@property struct NEIPSecIKE_s { }*ikeRef;
@property BOOL isIfCellular;
@property (retain) NEIKEv2MOBIKE *mobikeHandle;
@property (retain) NSDictionary *options;
@property int pathStatus;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NEIKEv2Rekey *rekey;
@property (retain) NWResolver *resolver;
@property (retain) NEIKEv2Server *serverAddresses;
@property (copy) id /* block */ startTunnelCompletionHandler;
@property struct NEVirtualInterface_s { }*virtualInterface;

- (void).cxx_destruct;
- (id)childConfig;
- (id)createPacketTunnelNetworkSettings;
- (void)dealloc;
- (id /* block */)dnsResolverCompletionHandler;
- (unsigned int)flags;
- (id)getSocketSemaphore;
- (void)handleConfigChange;
- (void)handleDNSResolution;
- (void)handleDefaultPathChange;
- (void)handleInterfaceDown;
- (int)handleRedirectNotification:(id)arg1;
- (BOOL)hasNAT;
- (unsigned int)ifIndex;
- (unsigned int)ikeChildID;
- (id)ikeConfig;
- (struct NEIPSecIKE_s { }*)ikeRef;
- (id)init;
- (void)invokeStartTunnelCompletionHandler:(id)arg1;
- (BOOL)isIfCellular;
- (id)mobikeHandle;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)observerHelperHandler:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)options;
- (int)pathStatus;
- (id)queue;
- (id)rekey;
- (void)reset;
- (void)resolveServerAddressIfNeeded:(id /* block */)arg1;
- (id)resolver;
- (BOOL)saveChildTunnelConfig:(void*)arg1;
- (BOOL)saveIKETunnelConfig:(void*)arg1;
- (id)serverAddresses;
- (void)setChildConfig:(id)arg1;
- (void)setDnsResolverCompletionHandler:(id /* block */)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setGetSocketSemaphore:(id)arg1;
- (void)setHasNAT:(BOOL)arg1;
- (void)setIfIndex:(unsigned int)arg1;
- (void)setIkeChildID:(unsigned int)arg1;
- (void)setIkeConfig:(id)arg1;
- (void)setIkeRef:(struct NEIPSecIKE_s { }*)arg1;
- (void)setIsIfCellular:(BOOL)arg1;
- (void)setMobikeHandle:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPathStatus:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setRekey:(id)arg1;
- (void)setResolver:(id)arg1;
- (void)setServerAddresses:(id)arg1;
- (void)setStartTunnelCompletionHandler:(id /* block */)arg1;
- (void)setVirtualInterface:(struct NEVirtualInterface_s { }*)arg1;
- (void)startIKEv2TunnelWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startRekeyTimer:(BOOL)arg1;
- (id /* block */)startTunnelCompletionHandler;
- (void)startTunnelWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopIKEv2TunnelWithReason:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)stopTunnelWithReason:(int)arg1 completionHandler:(id /* block */)arg2;
- (int)tunnelBringup;
- (int)tunnelTeardown;
- (struct NEVirtualInterface_s { }*)virtualInterface;
- (void)wake;
- (void)wakeIKEv2;

@end
