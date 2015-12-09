/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Network.framework/Network
 */

@interface NWPath : NSObject <NWPrettyDescription> {
    NSObject<OS_nw_path> * _internalPath;
}

@property (retain) NWEndpoint *derivedEndpoint;
@property (readonly) NWParameters *derivedParameters;
@property (getter=isDirect, readonly) BOOL direct;
@property (readonly) NSArray *dnsServers;
@property (readonly) int dnsServiceID;
@property BOOL duetProhibitExpensive;
@property (getter=isExpensive, readonly) BOOL expensive;
@property (readonly) NWInterface *fallbackInterface;
@property (readonly) unsigned int fallbackInterfaceIndex;
@property (readonly) BOOL fallbackIsWeak;
@property (readonly) unsigned int filterControlUnit;
@property (getter=isFiltered, readonly) BOOL filtered;
@property (getter=isFlowDivert, readonly) BOOL flowDivert;
@property (readonly) unsigned int flowDivertControlUnit;
@property (getter=isFromHelper, readonly) BOOL fromHelper;
@property BOOL hasFallbackActivity;
@property BOOL hasPower;
@property (readonly) unsigned long long helperClientID;
@property (readonly) int helperClientPID;
@property (getter=isHelperWaiting, readonly) BOOL helperWaiting;
@property (readonly) NWInterface *interface;
@property (readonly) NSObject<OS_nw_path> *internalPath;
@property (retain) NSString *ledbellyClientID;
@property (getter=isLocal, readonly) BOOL local;
@property (readonly) BOOL mptcpAllowed;
@property (retain) NSObject<OS_xpc_object> *mptcpInterfaceDetails;
@property (readonly) int mtu;
@property (readonly) unsigned int policyID;
@property (readonly, copy) NSString *privateDescription;
@property (retain) NSObject<OS_xpc_object> *proxySettings;
@property (readonly) int reason;
@property (readonly) NSString *reasonDescription;
@property (getter=isRoaming, readonly) BOOL roaming;
@property (readonly) NWInterface *scopedInterface;
@property (readonly) NSString *ssid;
@property (readonly) int status;
@property (readonly) NSString *statusAsString;
@property (readonly) BOOL supportsIPv4;
@property (readonly) BOOL supportsIPv6;

+ (id)statusToString:(int)arg1;

- (void).cxx_destruct;
- (id)copyFlowDivertToken;
- (id)derivedEndpoint;
- (id)derivedParameters;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)dnsServers;
- (int)dnsServiceID;
- (BOOL)duetProhibitExpensive;
- (id)fallbackInterface;
- (unsigned int)fallbackInterfaceIndex;
- (BOOL)fallbackIsWeak;
- (unsigned int)filterControlUnit;
- (unsigned int)flowDivertControlUnit;
- (id)genericNetworkAgentsWithDomain:(id)arg1 type:(id)arg2;
- (BOOL)hasFallbackActivity;
- (BOOL)hasPower;
- (BOOL)hasUnsatisfiedFallbackAgent;
- (unsigned long long)helperClientID;
- (int)helperClientPID;
- (id)inactiveNetworkAgentUUIDsOnlyVoluntary:(BOOL)arg1;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)interface;
- (id)internalPath;
- (BOOL)isDirect;
- (BOOL)isEqualToPath:(id)arg1;
- (BOOL)isExpensive;
- (BOOL)isFiltered;
- (BOOL)isFlowDivert;
- (BOOL)isFromHelper;
- (BOOL)isHelperWaiting;
- (BOOL)isLocal;
- (BOOL)isRoaming;
- (id)ledbellyClientID;
- (BOOL)mptcpAllowed;
- (id)mptcpInterfaceDetails;
- (int)mtu;
- (id)networkAgentsOfType:(Class)arg1;
- (unsigned int)policyID;
- (id)privateDescription;
- (id)proxySettings;
- (int)reason;
- (id)reasonDescription;
- (id)scopedInterface;
- (void)setDerivedEndpoint:(id)arg1;
- (void)setDuetProhibitExpensive:(BOOL)arg1;
- (void)setHasFallbackActivity:(BOOL)arg1;
- (void)setHasPower:(BOOL)arg1;
- (void)setLedbellyClientID:(id)arg1;
- (void)setMPTCPAllowed:(BOOL)arg1 fallbackInterfaceIndex:(unsigned int)arg2;
- (void)setMptcpInterfaceDetails:(id)arg1;
- (void)setProxySettings:(id)arg1;
- (id)ssid;
- (int)status;
- (id)statusAsString;
- (BOOL)supportsIPv4;
- (BOOL)supportsIPv6;
- (BOOL)unsatisfiedVoluntaryAgentMatchesAddress:(id)arg1 triggerImmediately:(BOOL*)arg2;
- (BOOL)usesInterfaceType:(int)arg1;
- (BOOL)usesNetworkAgent:(id)arg1;
- (BOOL)usesNetworkAgentType:(Class)arg1;

@end
