/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation
 */

@interface MASessionEngine : NSObject {
    NSString * _serialNumber;
    NSData * _storebagReceivedDataIn;
}

@property (retain) NSString *serialNumber;
@property (retain) NSData *storebagReceivedDataIn;

- (BOOL)createActivationInfo:(id*)arg1 error:(id*)arg2;
- (BOOL)createActivationInfoURLRequest:(id*)arg1 error:(id*)arg2;
- (BOOL)createSessionRequest:(id*)arg1 error:(id*)arg2;
- (BOOL)createSessionURLRequest:(id*)arg1 error:(id*)arg2;
- (void)dealloc;
- (BOOL)handleActivationInfo:(id)arg1 error:(id*)arg2;
- (BOOL)handleSessionResponse:(id)arg1 error:(id*)arg2;
- (void)performSelectorOnRemoteObject:(SEL)arg1 withParam:(id)arg2 completionBlock:(id /* block */)arg3 waitBlock:(id /* block */)arg4;
- (id)serialNumber;
- (void)setSerialNumber:(id)arg1;
- (void)setStorebagReceivedDataIn:(id)arg1;
- (id)storebagReceivedDataIn;

@end
