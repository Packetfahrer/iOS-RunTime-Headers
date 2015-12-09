/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKService : NSObject <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> * __sync;
    <PKServiceDelegate> * _delegate;
    NSMutableDictionary * _personalities;
    NSXPCListener * _serviceListener;
    BOOL  _shared;
    PKServicePersonality * _solePersonality;
    NSArray * _subsystems;
}

@property (retain) NSObject<OS_dispatch_queue> *_sync;
@property (readonly, copy) NSString *debugDescription;
@property (retain) <PKServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (retain) NSMutableDictionary *personalities;
@property (retain) NSXPCListener *serviceListener;
@property BOOL shared;
@property (retain) PKServicePersonality *solePersonality;
@property (retain) NSArray *subsystems;
@property (readonly) Class superclass;

+ (int)_defaultRun:(int)arg1 arguments:(const char **)arg2;
+ (id)defaultService;
+ (void)main;

- (void).cxx_destruct;
- (BOOL)_processDefaultSubsystemName:(id)arg1;
- (id)_sync;
- (void)checkEnvironment:(id)arg1;
- (id)configuredSubsystemList;
- (id)connectionForPlugInNamed:(id)arg1;
- (void)copyAppStoreReceipt:(id /* block */)arg1;
- (id)defaultsForPlugInNamed:(id)arg1;
- (id)delegate;
- (id)discoverSubsystemNamed:(id)arg1 logMissing:(BOOL)arg2;
- (void)discoverSubsystems;
- (id)embeddedPrincipalForPlugInNamed:(id)arg1;
- (id)hostPrincipalForPlugInNamed:(id)arg1;
- (id)init;
- (void)launchContainingApplicationForPlugInNamed:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)mergeSubsystemList:(id)arg1 from:(id)arg2;
- (void)mergeSubsystems:(id)arg1 from:(id)arg2;
- (id)personalities;
- (id)personalityNamed:(id)arg1;
- (id)personalityNamed:(id)arg1 forHostPid:(int)arg2;
- (id)plugInPrincipalForPlugInNamed:(id)arg1;
- (void)registerPersonality:(id)arg1;
- (void)run;
- (id)serviceListener;
- (void)setDelegate:(id)arg1;
- (void)setPersonalities:(id)arg1;
- (void)setServiceListener:(id)arg1;
- (void)setShared:(BOOL)arg1;
- (void)setSolePersonality:(id)arg1;
- (void)setSubsystems:(id)arg1;
- (void)set_sync:(id)arg1;
- (BOOL)shared;
- (id)solePersonality;
- (id)subsystems;
- (BOOL)unregisterPersonality:(id)arg1;

@end
