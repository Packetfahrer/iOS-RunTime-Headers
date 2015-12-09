/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPass : PKPass <NSCopying, NSSecureCoding> {
    NSString * _appURLScheme;
    NSSet * _associatedApplicationIdentifiers;
    NSString * _cobrandName;
    BOOL  _cobranded;
    NSSet * _devicePaymentApplications;
    PKPaymentApplication * _devicePrimaryPaymentApplication;
    NSString * _localizedSuspendedReason;
    NSString * _messagePushTopic;
    NSURL * _messageServiceURL;
    NSSet * _paymentApplications;
    BOOL  _paymentOptionSelectable;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountNumberSuffix;
    NSString * _sanitizedPrimaryAccountNumber;
    BOOL  _supportsDPANNotifications;
    BOOL  _supportsDefaultCardSelection;
    BOOL  _supportsFPANNotifications;
    BOOL  _supportsSerialNumberBasedProvisioning;
    NSString * _transactionPushTopic;
    NSURL * _transactionServiceURL;
}

@property (nonatomic, readonly) unsigned int activationState;
@property (nonatomic, copy) NSString *appURLScheme;
@property (nonatomic, copy) NSSet *associatedApplicationIdentifiers;
@property (nonatomic, copy) NSString *cobrandName;
@property (getter=isCobranded, nonatomic) BOOL cobranded;
@property (readonly) NSString *deviceAccountIdentifier;
@property (readonly) NSString *deviceAccountNumberSuffix;
@property (nonatomic, copy) NSSet *devicePaymentApplications;
@property (nonatomic, retain) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (nonatomic, copy) NSString *localizedSuspendedReason;
@property (nonatomic, copy) NSString *messagePushTopic;
@property (nonatomic, copy) NSURL *messageServiceURL;
@property (nonatomic, copy) NSSet *paymentApplications;
@property (getter=isPaymentOptionSelectable, nonatomic) BOOL paymentOptionSelectable;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountNumberSuffix;
@property (getter=isPrivateLabel, nonatomic, readonly) BOOL privateLabel;
@property (nonatomic, copy) NSString *sanitizedPrimaryAccountNumber;
@property (nonatomic) BOOL supportsDPANNotifications;
@property (nonatomic) BOOL supportsDefaultCardSelection;
@property (nonatomic) BOOL supportsFPANNotifications;
@property (nonatomic) BOOL supportsSerialNumberBasedProvisioning;
@property (nonatomic, copy) NSString *transactionPushTopic;
@property (nonatomic, copy) NSURL *transactionServiceURL;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (unsigned int)defaultSettings;
+ (BOOL)supportsSecureCoding;

- (unsigned int)_activationStateForApplicationState:(int)arg1;
- (id)_localizedSuspendedReasonForAID:(id)arg1;
- (unsigned int)activationState;
- (id)appURLScheme;
- (id)associatedApplicationIdentifiers;
- (BOOL)availableForAutomaticPresentationUsingBeaconContext;
- (BOOL)availableForAutomaticPresentationUsingVASContext;
- (id)cobrandName;
- (unsigned int)contactlessActivationState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deviceAccountIdentifier;
- (id)deviceAccountNumberSuffix;
- (id)devicePaymentApplications;
- (id)devicePrimaryPaymentApplication;
- (int)effectiveContactlessPaymentApplicationState;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasDevicePaymentApplicationsAvailable;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (BOOL)isCobranded;
- (BOOL)isDevicePrimaryPaymentApplicationPersonalized;
- (BOOL)isPaymentOptionSelectable;
- (BOOL)isPrivateLabel;
- (id)localizedSuspendedReason;
- (id)messagePushTopic;
- (id)messageServiceURL;
- (id)paymentApplicationForAID:(id)arg1;
- (id)paymentApplications;
- (id)paymentApplicationsForSecureElementIdentifier:(id)arg1;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (id)primaryPaymentApplicationForSecureElementIdentifier:(id)arg1;
- (void)sanitizePaymentApplications;
- (id)sanitizedDeviceAccountNumber;
- (id)sanitizedPrimaryAccountNumber;
- (void)setAppURLScheme:(id)arg1;
- (void)setAssociatedApplicationIdentifiers:(id)arg1;
- (void)setCobrandName:(id)arg1;
- (void)setCobranded:(BOOL)arg1;
- (void)setDevicePaymentApplications:(id)arg1;
- (void)setDevicePrimaryPaymentApplication:(id)arg1;
- (void)setLocalizedSuspendedReason:(id)arg1;
- (void)setMessagePushTopic:(id)arg1;
- (void)setMessageServiceURL:(id)arg1;
- (void)setPaymentApplications:(id)arg1;
- (void)setPaymentOptionSelectable:(BOOL)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)setSanitizedPrimaryAccountNumber:(id)arg1;
- (void)setSupportsDPANNotifications:(BOOL)arg1;
- (void)setSupportsDefaultCardSelection:(BOOL)arg1;
- (void)setSupportsFPANNotifications:(BOOL)arg1;
- (void)setSupportsSerialNumberBasedProvisioning:(BOOL)arg1;
- (void)setTransactionPushTopic:(id)arg1;
- (void)setTransactionServiceURL:(id)arg1;
- (BOOL)supportsDPANNotifications;
- (BOOL)supportsDefaultCardSelection;
- (BOOL)supportsFPANNotifications;
- (BOOL)supportsSerialNumberBasedProvisioning;
- (id)transactionPushTopic;
- (id)transactionServiceURL;
- (void)updateDevicePaymentApplicationsWithSecureElementIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (BOOL)npkHasUserSelectablePaymentApplications;
- (id)npkSelectedPaymentApplication;

@end
