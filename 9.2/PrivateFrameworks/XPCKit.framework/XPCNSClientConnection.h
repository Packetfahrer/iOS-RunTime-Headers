/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate> {
    XPCClientConnection * _clientConnection;
    <XPCNSClientConnectionDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <XPCNSClientConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (id)delegate;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(id /* block */)arg3;
- (void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(id /* block */)arg4;
- (void)shutDownCompletionBlock:(id /* block */)arg1;

@end
