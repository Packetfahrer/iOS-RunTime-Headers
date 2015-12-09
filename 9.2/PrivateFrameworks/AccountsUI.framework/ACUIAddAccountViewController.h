/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {
    BOOL  _dontShowSecondLevelOtherAccountTypes;
    PSSpecifier * _gmailSpecifier;
    unsigned char  _originalCellFlag;
    unsigned char  _originalWifiFlag;
    NSArray * _preEnabledDataclasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ACUIAccountViewProvidersManager *viewProvidersManager;

- (void).cxx_destruct;
- (void)_createCustomControlledAccountTapped:(id)arg1;
- (id)_specifierForAOLAccount;
- (id)_specifierForCustomControlledAccountWithName:(id)arg1 accountTypeID:(id)arg2;
- (id)_specifierForExchangeAccount;
- (id)_specifierForGmailAccount;
- (id)_specifierForOutlookAccount;
- (id)_specifierForRegionalAccountType:(id)arg1;
- (id)_specifierForYahooAccount;
- (id)_specifierForiCloudAccount;
- (id)_specifiersForRegionalMailAccounts;
- (void)dealloc;
- (id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2;
- (id)init;
- (void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(BOOL)arg1;
- (void)setupViewControllerDidDismiss:(id)arg1;
- (id)specifierForOtherAccounts;
- (id)specifiers;
- (id)viewProvidersManager;
- (void)viewWillAppear:(BOOL)arg1;

@end
