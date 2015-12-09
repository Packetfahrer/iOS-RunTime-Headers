/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAccount : NSObject <NSCopying, SSXPCCoding> {
    int  _accountKind;
    NSString * _accountName;
    int  _accountScope;
    int  _accountSource;
    BOOL  _active;
    BOOL  _activeLockerAccount;
    NSString * _altDSID;
    int  _availableServiceTypes;
    NSData * _bioToken;
    NSString * _creditsString;
    BOOL  _demo;
    BOOL  _didFallbackToPassword;
    int  _enabledServiceTypes;
    NSString * _firstName;
    int  _freeDownloadsPasswordSetting;
    NSString * _itunesPassSerialNumber;
    NSString * _lastName;
    NSLock * _lock;
    BOOL  _newCustomer;
    int  _paidPurchasesPasswordSetting;
    NSString * _secureToken;
    NSMutableDictionary * _serviceEligibility;
    NSString * _storeFrontID;
    NSNumber * _uniqueIdentifier;
}

@property (copy) NSString *ITunesPassSerialNumber;
@property int accountKind;
@property (copy) NSString *accountName;
@property int accountScope;
@property int accountSource;
@property (getter=isActive) BOOL active;
@property (getter=isActiveLockerAccount) BOOL activeLockerAccount;
@property (copy) NSString *altDSID;
@property (getter=isAuthenticated, readonly) BOOL authenticated;
@property int availableServiceTypes;
@property (copy) NSString *creditsString;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDemoAccount) BOOL demoAccount;
@property (readonly, copy) NSString *description;
@property int enabledServiceTypes;
@property (copy) NSString *firstName;
@property int freeDownloadsPasswordSetting;
@property (readonly) unsigned int hash;
@property (copy) NSString *lastName;
@property (getter=isNewCustomer) BOOL newCustomer;
@property int paidPurchasesPasswordSetting;
@property (copy) NSString *secureToken;
@property (getter=isSocialEnabled) BOOL socialEnabled;
@property (copy) NSString *storeFrontIdentifier;
@property (readonly) Class superclass;
@property (retain) NSNumber *uniqueIdentifier;

- (id)ITunesPassSerialNumber;
- (void)_sendBlockingXPCMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 withReply:(id /* block */)arg2;
- (void)acceptTermsAndConditions:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (int)accountKind;
- (id)accountName;
- (int)accountScope;
- (int)accountSource;
- (void)addAvailableServiceTypes:(int)arg1;
- (void)addEnabledServiceTypes:(int)arg1;
- (id)altDSID;
- (int)availableServiceTypes;
- (id)copyLockdownRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)creditsString;
- (void)dealloc;
- (id)description;
- (BOOL)didFallbackToPassword;
- (id)eligibilityForService:(int)arg1;
- (int)enabledServiceTypes;
- (id)firstName;
- (int)freeDownloadsPasswordSetting;
- (void)getDownloadKindsEligibleForContentRestoreWithBlock:(id /* block */)arg1;
- (void)getEligibilityForService:(int)arg1 completionBlock:(id /* block */)arg2;
- (void)getITunesMatchStatusWithCompletionBlock:(id /* block */)arg1;
- (void)getKeybagSyncDataWithType:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)getPurchasedItemsForItems:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getTermsAndConditionsWithBlock:(id /* block */)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initDemoAccount;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isActive;
- (BOOL)isActiveLockerAccount;
- (BOOL)isAuthenticated;
- (BOOL)isDemoAccount;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNewCustomer;
- (BOOL)isSocialEnabled;
- (id)lastName;
- (BOOL)mergeValuesFromAccount:(id)arg1;
- (int)paidPurchasesPasswordSetting;
- (id)popBiometricToken;
- (void)removeAvailableServiceTypes:(int)arg1;
- (void)removeEnabledServiceTypes:(int)arg1;
- (void)resetTransientData;
- (id)secureToken;
- (void)setAccountKind:(int)arg1;
- (void)setAccountName:(id)arg1;
- (void)setAccountScope:(int)arg1;
- (void)setAccountSource:(int)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setActiveLockerAccount:(BOOL)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setAvailableServiceTypes:(int)arg1;
- (void)setBiometricToken:(id)arg1;
- (void)setCreditsString:(id)arg1;
- (void)setDemoAccount:(BOOL)arg1;
- (void)setDidFallbackToPassword:(BOOL)arg1;
- (void)setEligibility:(id)arg1 forServiceType:(int)arg2;
- (void)setEnabledServiceTypes:(int)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFreeDownloadsPasswordSetting:(int)arg1;
- (void)setITunesPassSerialNumber:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLockdownDictionary:(id)arg1;
- (void)setNewCustomer:(BOOL)arg1;
- (void)setPaidPurchasesPasswordSetting:(int)arg1;
- (void)setSecureToken:(id)arg1;
- (void)setSocialEnabled:(BOOL)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)uniqueIdentifier;
- (void)updateAccountPasswordSettings:(id /* block */)arg1;

@end
