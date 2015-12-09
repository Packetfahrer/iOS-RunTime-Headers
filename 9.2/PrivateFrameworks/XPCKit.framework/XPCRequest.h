/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCRequest : NSObject {
    id /* block */  _handler;
    NSObject<OS_xpc_object> * _message;
    NSObject<OS_xpc_object> * _reply;
    unsigned long  _sequence;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *message;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *reply;
@property (nonatomic, readonly) unsigned long sequence;

- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1 sequence:(unsigned long)arg2 connection:(id)arg3;
- (id)message;
- (id)reply;
- (void)sendReply;
- (unsigned long)sequence;

@end
