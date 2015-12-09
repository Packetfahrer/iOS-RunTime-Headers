/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACAccountType : NSObject <NSSecureCoding> {
    NSSet * _accessKeys;
    ACAccountStore * _accountStore;
    NSString * _accountTypeDescription;
    NSString * _credentialProtectionPolicy;
    NSString * _credentialType;
    BOOL  _encryptAccountProperties;
    NSString * _identifier;
    NSURL * _objectID;
    NSString * _owningBundleID;
    NSSet * _supportedDataclasses;
    int  _supportsAuthentication;
    BOOL  _supportsMultipleAccounts;
    NSSet * _syncableDataclasses;
    int  _visibility;
}

@property (nonatomic, readonly) BOOL accessGranted;
@property (nonatomic, readonly) NSSet *accessKeys;
@property (nonatomic) ACAccountStore *accountStore;
@property (nonatomic, readonly) NSString *accountTypeDescription;
@property (nonatomic, copy) id credentialProtectionPolicy;
@property (nonatomic, retain) NSString *credentialType;
@property (nonatomic, readonly) BOOL encryptAccountProperties;
@property (nonatomic, readonly) NSString *fullDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) NSURL *objectID;
@property (nonatomic, retain) NSString *owningBundleID;
@property (nonatomic, readonly) NSSet *supportedDataclasses;
@property (nonatomic) int supportsAuthentication;
@property (nonatomic) BOOL supportsMultipleAccounts;
@property (nonatomic, readonly) NSSet *syncableDataclasses;
@property (nonatomic) int visibility;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)accessGranted;
- (id)accessKeys;
- (id)accountStore;
- (id)accountTypeDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialProtectionPolicy;
- (id)credentialType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)encryptAccountProperties;
- (id)fullDescription;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)initWithManagedAccountType:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)objectID;
- (id)owningBundleID;
- (void)setAccountStore:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setCredentialProtectionPolicy:(id)arg1;
- (void)setCredentialType:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setObjectID:(id)arg1;
- (void)setOwningBundleID:(id)arg1;
- (void)setSupportsAuthentication:(int)arg1;
- (void)setSupportsMultipleAccounts:(BOOL)arg1;
- (void)setVisibility:(int)arg1;
- (id)supportedDataclasses;
- (int)supportsAuthentication;
- (BOOL)supportsMultipleAccounts;
- (id)syncableDataclasses;
- (int)visibility;

@end
