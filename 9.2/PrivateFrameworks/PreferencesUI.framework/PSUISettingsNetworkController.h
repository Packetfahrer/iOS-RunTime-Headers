/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISettingsNetworkController : PSListController {
    BOOL  _3GOverrideTo4G;
    BOOL  _LTEOverrideTo4G;
    PSListItemsController * _RATModeDrilldownController;
    int  _RATSwitchKind;
    PSUIAppCellularUsageGroupController * _appUsageGroupController;
    CHManager * _callHistoryManager;
    PSUICellularAccountGroupController * _cellularGroupController;
    PSSpecifier * _currentSpecifier;
    BOOL  _disabled;
    PSSpecifier * _enableRATSpecifier;
    PSSpecifier * _facetimeSetupButton;
    PSSpecifier * _facetimeSetupGroup;
    BOOL  _ignoreNextEntitlementStatusChange;
    PSSpecifier * _lastResetSpecifier;
    PSSpecifier * _lifetimeSpecifier;
    PSSpecifier * _mobileDataGroup;
    PSSpecifier * _viewAccount;
    PSSpecifier * _viewAccountGroup;
}

@property (nonatomic, retain) CHManager *callHistoryManager;
@property (nonatomic, retain) PSUICellularAccountGroupController *cellularGroupController;

+ (BOOL)isConnectedOverWiFi;

- (void).cxx_destruct;
- (id)_lastUpdateDate;
- (void)_setMobileDataSwitch:(BOOL)arg1;
- (void)_setRATModeConfirmed:(int)arg1;
- (void)_setRATModeStateIsOn:(BOOL)arg1;
- (void)_updateLastResetText;
- (BOOL)_updateMobileDataGroupContentShowingRAT:(BOOL)arg1;
- (void)acceptedDataSwitch:(id)arg1;
- (void)acceptedRATSwitch:(id)arg1;
- (void)airplaneModeChanged;
- (void)airplaneModeOrSIMStatusChanged;
- (id)callHistoryManager;
- (id)callTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(BOOL)arg1;
- (void)canceledDataSwitch:(id)arg1;
- (void)canceledRATSwitch:(id)arg1;
- (id)cellularGroupController;
- (void)cellularPlanChanged;
- (void)clearStats:(id)arg1;
- (id)controllerForSpecifier:(id)arg1;
- (void)dataRegistrationChangedWithUserInfo:(id)arg1;
- (id)dataUsageWorkspaceInfo;
- (void)dealloc;
- (void)entitlementStatusChanged;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)getDataRoamingPlanName:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (id)getLTEService:(id)arg1;
- (id)getRATModeState:(id)arg1;
- (id)getRATSwitchIsOn:(id)arg1;
- (void)handleCallTimersChanged;
- (void)handleURL:(id)arg1;
- (id)init;
- (BOOL)isCellularDisabled;
- (id)isMobileDataEnabled:(id)arg1;
- (id)isReliableNetworkFallbackEnabled:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2;
- (void)newCarrierNotification;
- (void)reloadRATStatus:(id)arg1;
- (id)roamingSettingsDescription:(id)arg1;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setCallHistoryManager:(id)arg1;
- (void)setCellularGroupController:(id)arg1;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetCancelled:(id)arg1;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabledConfirmed:(id)arg1;
- (void)setLTEService:(id)arg1 specifier:(id)arg2;
- (void)setMobileDataIsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRATModeState:(id)arg1 specifier:(id)arg2;
- (void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2;
- (void)setReliableNetworkFallbackIsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setupCellularFaceTime:(id)arg1;
- (BOOL)shouldShowFaceTimeSetup;
- (BOOL)shouldShowLTEOptions;
- (BOOL)shouldShowLegacyRATOptions;
- (BOOL)shouldShowViewAccount;
- (BOOL)shouldShowWifiAssist;
- (BOOL)showDataPlanOnly;
- (id)specifiers;
- (BOOL)supportsVoLTE;
- (void)totalBytesUsedChangedNotification;
- (id)totalDataUsageForSpecifier:(id)arg1;
- (id)totalRoamingDataUsageForSpecifier:(id)arg1;
- (void)updateAppUsageGroupEnabledState;
- (void)updatePaneWithCellularDataState:(BOOL)arg1;
- (void)updateRATSpecifiers;
- (void)updateRATStateWithDictionary:(id)arg1;
- (void)viewAccountPressed:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end
