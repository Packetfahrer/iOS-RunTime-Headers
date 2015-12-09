/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate> {
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned int)_clientTypeForConnection:(id)arg1;
- (BOOL)_connection:(id)arg1 hasEntitlement:(id)arg2;
- (BOOL)_shouldAcceptNewConnectionWithEntitlements:(unsigned int)arg1;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;

@end
