/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalAccountsProvider : NSObject {
    ACAccountStore * _accountStore;
    NSMutableArray * _accountsWhenRunningUnitTests;
    BOOL  _runningUnitTests;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) NSMutableArray *accountsWhenRunningUnitTests;
@property (nonatomic, readonly) NSArray *allAccounts;
@property (nonatomic, readonly) NSArray *enabledAccounts;
@property (nonatomic) BOOL runningUnitTests;

+ (id)_accountTypeWithIdentifier:(id)arg1 inStore:(id)arg2;
+ (id)_accountsWithAccountType:(id)arg1 inStore:(id)arg2 error:(id*)arg3;
+ (id)_existingAccountForAccount:(id)arg1 inStore:(id)arg2;
+ (id)_uniqueStringsForUsername:(id)arg1;
+ (BOOL)accountIsDuplicate:(id)arg1 inStore:(id)arg2;
+ (id)calDAVChildForParentAccount:(id)arg1;
+ (id)defaultProvider;
+ (id)uniqueStringsForHostname:(id)arg1;
+ (id)uniqueStringsForPrincipalPath:(id)arg1;
+ (id)verboseDescriptionForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_accountWithIdentifier:(id)arg1;
- (id)_cachedAccountWithIdentifier:(id)arg1;
- (id)_providerForCalDAVAccount:(id)arg1;
- (id)_supportedDataclassesForBundleID:(id)arg1;
- (id)_supportedDataclassesForMainBundleID;
- (BOOL)account:(id)arg1 hasServerURL:(id)arg2;
- (BOOL)accountIsDuplicate:(id)arg1;
- (id)accountStore;
- (id)accountTypeWithIdentifier:(id)arg1;
- (id)accountWithIdentifier:(id)arg1 returnCachedVersion:(BOOL)arg2;
- (id)accountsWhenRunningUnitTests;
- (id)accountsWithServerURL:(id)arg1;
- (id)accountsWithServerURL:(id)arg1 username:(id)arg2 returnCachedVersions:(BOOL)arg3;
- (id)accountsWithUsername:(id)arg1;
- (id)allAccounts;
- (id)allAccountsWithError:(id*)arg1;
- (id)clientTokenForAccountWithIdentifier:(id)arg1;
- (id)delegatePrincipalUIDsForAccount:(id)arg1;
- (id)enabledAccounts;
- (id)existingAccountForAccount:(id)arg1;
- (id)init;
- (void)messageTraceCurrentAccounts;
- (id)oauthTokenForAccount:(id)arg1 tokenType:(id)arg2;
- (void)removeAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)removeAccount:(id)arg1 withError:(id*)arg2;
- (BOOL)renewCredentialsForAccount:(id)arg1;
- (BOOL)renewCredentialsForAccount:(id)arg1 forceRenewal:(BOOL)arg2;
- (void)renewCredentialsForAccount:(id)arg1 forceRenewal:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)runningUnitTests;
- (void)saveAccount:(id)arg1 verify:(BOOL)arg2 withCompletionHandler:(id /* block */)arg3;
- (BOOL)saveAccount:(id)arg1 verify:(BOOL)arg2 withError:(id*)arg3;
- (void)saveAccount:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (BOOL)saveAccount:(id)arg1 withError:(id*)arg2;
- (void)setAccountStore:(id)arg1;
- (void)setAccountsWhenRunningUnitTests:(id)arg1;
- (void)setRunningUnitTests:(BOOL)arg1;

@end