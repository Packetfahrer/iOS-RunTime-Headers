/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating> {
    id  ____nsxpc_remoteObjectProxy;
    MSXPCConnection * _connection;
    id /* block */  _errorHandler;
    struct __CFDictionary { } * _knownSelectors;
    NSXPCInterface * _remoteInterface;
    int  _selectorLock;
}

@property (setter=___setNSXPCRemoteObjectProxy:, nonatomic, retain) id ___nsxpc_remoteObjectProxy;

- (id)___nsxpc_remoteObjectProxy;
- (void)___setNSXPCRemoteObjectProxy:(id)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(id /* block */)arg3;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;

@end
