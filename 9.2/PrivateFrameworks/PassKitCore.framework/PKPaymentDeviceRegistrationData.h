/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding> {
    NSString * _companionSerialNumber;
    BOOL  _devSigned;
    NSString * _deviceSerialNumber;
    NSString * _productType;
    NSString * _secureElementIdentifier;
    NSString * _signedAuthToken;
    NSDictionary * _stateInformation;
}

@property (nonatomic, copy) NSString *companionSerialNumber;
@property (nonatomic) BOOL devSigned;
@property (nonatomic, copy) NSString *deviceSerialNumber;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSString *secureElementIdentifier;
@property (nonatomic, copy) NSString *signedAuthToken;
@property (nonatomic, copy) NSDictionary *stateInformation;

+ (BOOL)supportsSecureCoding;

- (id)companionSerialNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)devSigned;
- (id)deviceSerialNumber;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)productType;
- (id)secureElementIdentifier;
- (void)setCompanionSerialNumber:(id)arg1;
- (void)setDevSigned:(BOOL)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setSecureElementIdentifier:(id)arg1;
- (void)setSignedAuthToken:(id)arg1;
- (void)setStateInformation:(id)arg1;
- (id)signedAuthToken;
- (id)stateInformation;

@end
