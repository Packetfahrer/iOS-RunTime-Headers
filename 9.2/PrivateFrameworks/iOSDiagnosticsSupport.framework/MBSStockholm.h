/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iOSDiagnosticsSupport.framework/iOSDiagnosticsSupport
 */

@interface MBSStockholm : NSObject <NFContactlessPaymentSessionDelegate> {
    bool  _cardEmulationSuspended;
    NFContactlessPaymentSession * _paymentSession;
    NSObject<NFSession> * _sessionController;
    NSObject<OS_dispatch_semaphore> * _start_timeout_sema;
}

@property (nonatomic) bool cardEmulationSuspended;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NFContactlessPaymentSession *paymentSession;
@property (nonatomic, retain) NSObject<NFSession> *sessionController;
@property (readonly) Class superclass;

- (bool)cardEmulationSuspended;
- (void)dealloc;
- (id)init;
- (id)paymentSession;
- (bool)pingRotterdam:(id*)arg1;
- (bool)pingStockholm:(id*)arg1;
- (id)sessionController;
- (void)setCardEmulationSuspended:(bool)arg1;
- (void)setPaymentSession:(id)arg1;
- (void)setSessionController:(id)arg1;
- (bool)startCardEmulationWithTimeout:(double)arg1 error:(id*)arg2;
- (void)stopCardEmulationWithTimeout:(double)arg1 error:(id*)arg2;

@end
