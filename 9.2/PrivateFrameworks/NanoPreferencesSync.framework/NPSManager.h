/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/NanoPreferencesSync
 */

@interface NPSManager : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)internalQueue;
- (void)invalidate;
- (void)setInternalQueue:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3;
- (void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4;
- (void)unsafe_invalidate;
- (id)xpcConnection;

@end
