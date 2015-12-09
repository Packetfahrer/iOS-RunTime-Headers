/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {
    NSArray * _pairedNetworkNames;
    NSMutableDictionary * _unmonitoredServices;
}

@property (nonatomic, retain) NSArray *pairedNetworkNames;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (id)pairedNetworkNames;
- (id)searchType;
- (int)serviceDiscoverySource;
- (int)serviceLegacyFlagsFromTXTDictionary:(id)arg1;
- (void)setPairedNetworkNames:(id)arg1;

@end
