/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequirementsRequest : PKPaymentWebServiceRequest {
    NSString * _cardholderName;
    PKPaymentCredential * _paymentCredential;
    NSString * _primaryAccountNumber;
}

@property (nonatomic, copy) NSString *cardholderName;
@property (nonatomic, retain) PKPaymentCredential *paymentCredential;
@property (nonatomic, copy) NSString *primaryAccountNumber;

- (id)_cardDictionary;
- (id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 certChain:(id)arg4 devSigned:(BOOL)arg5;
- (id)cardholderName;
- (void)dealloc;
- (id)initWithCardholderName:(id)arg1 primaryAccountNumber:(id)arg2;
- (id)initWithPaymentCredential:(id)arg1;
- (id)paymentCredential;
- (id)primaryAccountNumber;
- (void)setCardholderName:(id)arg1;
- (void)setPaymentCredential:(id)arg1;
- (void)setPrimaryAccountNumber:(id)arg1;

@end
