/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCProfileConnection : NSObject <MCProfileConnectionXPCProtocol> {
    <MCInteractionDelegate> * _interactionDelegate;
    NSObject<OS_dispatch_queue> * _notificationSyncQueue;
    NSMutableArray * _notificationTokens;
    struct __CFBag { } * _observers;
    NSData * _originalProfileData;
    NSDictionary * _preflightResponse;
    NSXPCConnection * _publicXPCConnection;
    NSObject<OS_dispatch_queue> * _publicXPCConnectionSyncQueue;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionSyncQueue;
    id /* block */  passcodeReplyBlock;
    id /* block */  showWarningsReplyBlock;
    id /* block */  userInputReplyBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSXPCConnection *publicXPCConnection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)profileInstallationErrorWithUnderlyingError:(id)arg1;
+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)__checkForProfiledCrash;
- (void)_appWhitelistDidChange:(id)arg1;
- (void)_applyToObservers:(id /* block */)arg1;
- (BOOL)_areProfilesRestrictingSettings:(id)arg1 outMDMName:(id*)arg2 outExchangeName:(id*)arg3 outExchangeCount:(int*)arg4 outProfileName:(id*)arg5 outProfileCount:(int*)arg6;
- (void)_createAndResumePublicXPCConnection;
- (void)_createAndResumeXPCConnection;
- (void)_defaultsDidChange;
- (void)_detectProfiledCrashes;
- (void)_effectiveSettingsDidChange:(id)arg1;
- (int)_getPasscodeComplianceWarningExpiryDate:(id)arg1 lastLockDate:(id)arg2 outLocalizedTitle:(id*)arg3 outLocalizedMessage:(id*)arg4;
- (id)_init;
- (void)_internalDefaultsDidChange;
- (id)_localizedRestricitionSourceDescriptionFromMDMName:(id)arg1 exchangeName:(id)arg2 exchangeCount:(int)arg3 profileName:(id)arg4 profileCount:(int)arg5;
- (BOOL)_openSensitiveURLString:(id)arg1 unlock:(BOOL)arg2;
- (void)_passcodeDidChange;
- (void)_passcodePolicyDidChange;
- (void)_profileListDidChange;
- (void)_queueCreateAndResumePublicXPCConnection;
- (void)_queueCreateAndResumeXPCConnection;
- (id)_queueDataForAcceptance:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(BOOL)arg4 outError:(id*)arg5;
- (void)_restrictionDidChange;
- (id)_settingsLockedDownByRestrictions:(id)arg1;
- (id)acceptedFileExtensions;
- (id)acceptedMIMETypes;
- (id)activationLockBypassHash;
- (id)activationLockBypassKey;
- (id)activationLockBypassKeyCreateNewIfNeeded:(BOOL)arg1;
- (BOOL)activationRecordIndicatesCloudConfigurationIsAvailable;
- (void)addObserver:(id)arg1;
- (void)addUserBookmark:(id)arg1;
- (void)addWebContentFilterAutoPermittedURLString:(id)arg1;
- (id)allClientUUIDsForClientType:(id)arg1;
- (id)allowedAppBundleIDsForBidirectionalDataMovementAfterApplyingFilterToBundleIDs:(id)arg1 localAppBundleID:(id)arg2 localAccountIsManaged:(BOOL)arg3;
- (id)allowedImportFromAppBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingAccountIsManaged:(BOOL)arg3;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 hostAppBundleID:(id)arg2 accountIsManaged:(BOOL)arg3 completion:(id /* block */)arg4;
- (id)allowedOpenInAppBundleIDsAfterApplyingFilterToAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(BOOL)arg3;
- (int)appWhitelistState;
- (int)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 complianceBlocking:(int)arg6 displayImmediateAlert:(BOOL)arg7 outRestrictionChanged:(BOOL*)arg8 outEffectiveSettingsChanged:(BOOL*)arg9 outError:(id*)arg10;
- (BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 localizedClientDescription:(id)arg4 localizedWarningMessage:(id)arg5 outRestrictionChanged:(BOOL*)arg6 outEffectiveSettingsChanged:(BOOL*)arg7 outError:(id*)arg8;
- (BOOL)applyRestrictionDictionary:(id)arg1 clientType:(id)arg2 clientUUID:(id)arg3 outRestrictionChanged:(BOOL*)arg4 outEffectiveSettingsChanged:(BOOL*)arg5 outError:(id*)arg6;
- (id)appsRestrictedFromCloudSync;
- (BOOL)areSettingsLockedDownByRestrictions:(id)arg1;
- (id)autonomousSingleAppModePermittedBundleIDs;
- (int)boolRestrictionForFeature:(id)arg1;
- (void)cancelUserInputResponses;
- (BOOL)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id*)arg3;
- (id)chaperoneOrganization;
- (void)checkCarrierProfile;
- (void)checkCarrierProfileForceInstallation:(BOOL)arg1;
- (void)checkIn;
- (void)checkInAsynchronously;
- (void)checkInIfNeeded;
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id*)arg3;
- (id)cloudConfigurationDetails;
- (void)cloudConfigurationUIDidCompleteWasApplied:(BOOL)arg1;
- (BOOL)currentPasscodeIsCompliantWithGlobalRestrictionsOutError:(id*)arg1;
- (BOOL)currentPasscodeIsCompliantWithProfileRestrictionsOutError:(id*)arg1;
- (void)dealloc;
- (int)defaultBoolValueForSetting:(id)arg1;
- (id)defaultParametersForBoolSetting:(id)arg1;
- (id)defaultParametersForIntersectionSetting:(id)arg1;
- (id)defaultParametersForUnionSetting:(id)arg1;
- (id)defaultParametersForValueSetting:(id)arg1;
- (id)defaultUserBookmarks;
- (id)defaultValueForSetting:(id)arg1;
- (id)defaultValuesForIntersectionSetting:(id)arg1;
- (id)defaultValuesForUnionSetting:(id)arg1;
- (void)deleteActivationLockBypassKey;
- (void)doMCICDidBeginInstallingNextProfileData:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidFinishInstallationWithIdentifier:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)doMCICDidFinishPreflightWithError:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidRequestCurrentPasscodeWithCompletion:(id /* block */)arg1;
- (void)doMCICDidRequestShowUserWarnings:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidRequestUserInput:(id)arg1 completion:(id /* block */)arg2;
- (void)doMCICDidUpdateStatus:(id)arg1 completion:(id /* block */)arg2;
- (id)doNotBackupAppIDs;
- (id)doNotDocumentSyncAppIDs;
- (id)effectiveBlacklistedAppBundleIDs;
- (int)effectiveBoolValueForSetting:(id)arg1;
- (int)effectiveBoolValueForSetting:(id)arg1 outAsk:(BOOL*)arg2;
- (id)effectiveParametersForBoolSetting:(id)arg1;
- (id)effectiveParametersForIntersectionSetting:(id)arg1;
- (id)effectiveParametersForUnionSetting:(id)arg1;
- (id)effectiveParametersForValueSetting:(id)arg1;
- (int)effectiveRestrictedBoolValueForSetting:(id)arg1;
- (id)effectiveRestrictions;
- (id)effectiveUserSettings;
- (id)effectiveValueForSetting:(id)arg1;
- (id)effectiveValuesForIntersectionSetting:(id)arg1;
- (id)effectiveValuesForUnionSetting:(id)arg1;
- (id)effectiveWhitelistedAppBundleIDs;
- (id)effectiveWhitelistedAppsAndOptions;
- (id)filteredMailSheetAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)filteredOpenInAccounts:(id)arg1 originatingAppBundleID:(id)arg2 sourceAccountManagement:(int)arg3;
- (void)flush;
- (void)getPasscodeComplianceWarningLastLockDate:(id)arg1 completionBlock:(id /* block */)arg2;
- (int)getPasscodeComplianceWarningLastLockDate:(id)arg1 outLocalizedTitle:(id*)arg2 outLocalizedMessage:(id*)arg3;
- (unsigned int)gracePeriod;
- (BOOL)hasAppAnalyticsAllowedBeenSet;
- (BOOL)hasDiagnosticSubmissionAllowedBeenSet;
- (int)hostMayPairWithOptions:(id)arg1 challenge:(id)arg2;
- (void)installProfileData:(id)arg1 interactionDelegate:(id)arg2;
- (void)installProfileData:(id)arg1 options:(id)arg2 interactionDelegate:(id)arg3;
- (id)installProfileData:(id)arg1 options:(id)arg2 outError:(id*)arg3;
- (id)installProfileData:(id)arg1 outError:(id*)arg2;
- (void)installProfileDataStoredForPurpose:(int)arg1 completionBlock:(id /* block */)arg2;
- (BOOL)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 outError:(id*)arg3;
- (id)installedConfigurationProfileInfoWithOutMDMProfileInfo:(id*)arg1;
- (id)installedMDMProfileIdentifier;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (id)installedProfileIdentifiers;
- (id)installedProfileIdentifiersWithFilterFlags:(int)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedProfilesWithFilterFlags:(int)arg1;
- (BOOL)isActivationLockAllowed;
- (BOOL)isActivityContinuationAllowed;
- (BOOL)isAdTrackingLimited;
- (BOOL)isAirDropAllowed;
- (BOOL)isAirDropUnmanagedForced;
- (BOOL)isAirPlayIncomingRequestsPairingPasswordRequired;
- (BOOL)isAirPlayOutgoingRequestsPairingPasswordRequired;
- (BOOL)isAirPlaySettingsUIAllowedOutAsk:(BOOL*)arg1;
- (BOOL)isAppAnalyticsAllowed;
- (BOOL)isAppCellularDataModificationAllowed;
- (BOOL)isAppInstallationAllowed;
- (BOOL)isAppManaged:(id)arg1;
- (BOOL)isAppRatingLimitInEffect;
- (BOOL)isAppRemovalAllowed;
- (BOOL)isAssistantUserGeneratedContentAllowed;
- (BOOL)isAutoCorrectionAllowed;
- (BOOL)isAutomaticAppDownloadsAllowed;
- (BOOL)isAutomaticAppUpdatesAllowed;
- (BOOL)isAutomaticAppUpdatesModificationAllowed;
- (BOOL)isAwaitingDeviceConfigured;
- (BOOL)isBoolSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isChaperoned;
- (BOOL)isCloudKeychainSyncAllowed;
- (BOOL)isCloudSyncAllowed:(id)arg1;
- (BOOL)isConferenceRoomDisplayModeEnabledOutAsk:(BOOL*)arg1;
- (BOOL)isConferenceRoomDisplaySettingsUIAllowedOutAsk:(BOOL*)arg1;
- (BOOL)isContactlessPaymentAllowed;
- (BOOL)isContentProtectionInEffect;
- (BOOL)isControlCenterAllowedInApps;
- (BOOL)isDeviceNameModificationAllowed;
- (BOOL)isDiagnosticSubmissionAllowed;
- (BOOL)isEnterpriseBookBackupAllowed;
- (BOOL)isEnterpriseBookMetadataSyncAllowed;
- (BOOL)isExplicitContentAllowedOutAsk:(BOOL*)arg1;
- (BOOL)isFeatureM1Allowed;
- (BOOL)isFingerprintForContactlessPaymentAllowed;
- (BOOL)isFingerprintModificationAllowed;
- (BOOL)isFingerprintUnlockAllowed;
- (BOOL)isGeotagSharingAllowed;
- (BOOL)isInAppPaymentAllowed;
- (BOOL)isInSingleAppMode;
- (BOOL)isInstalledAppNearMeSuggestionsAllowed;
- (BOOL)isIntersectionSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isKeyboardShortcutsAllowed;
- (BOOL)isLockScreenControlCenterAllowed;
- (BOOL)isLockScreenNotificationsViewAllowed;
- (BOOL)isLockScreenTodayViewAllowed;
- (BOOL)isLockScreenWiFiModificationAllowed;
- (BOOL)isMUAllowed;
- (BOOL)isMediaPurchaseAllowedOutAsk:(BOOL*)arg1;
- (BOOL)isMultitaskingAllowed;
- (BOOL)isMusicArtistActivityAllowed;
- (BOOL)isMusicServiceAllowed;
- (BOOL)isNewsAllowed;
- (BOOL)isOTAPKIUpdatesAllowed;
- (BOOL)isOnDeviceAppInstallationAllowed;
- (BOOL)isOpenInRestrictionInEffect;
- (BOOL)isParentalControlsAllowPasscodeAccessToNonWhitelistedAppsUIForcedByRestrictions;
- (BOOL)isPasscodeModificationAllowed;
- (BOOL)isPasscodeRequired;
- (BOOL)isPasscodeRequiredByPolicy;
- (BOOL)isPasscodeRequiredByProfiles;
- (BOOL)isPasscodeRequiredToAccessWhitelistedApps;
- (BOOL)isPasscodeSet;
- (BOOL)isPodcastsAllowed;
- (BOOL)isPredictiveKeyboardAllowed;
- (void)isProfileInstalledWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)isScreenRecordingAllowed;
- (BOOL)isScreenShotAllowed;
- (BOOL)isSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isSpellCheckAllowed;
- (BOOL)isSpotlightInternetResultsAllowed;
- (BOOL)isSupervised;
- (BOOL)isTeslaCloudConfigurationAvailable;
- (BOOL)isUIAppInstallationAllowed;
- (BOOL)isURLManaged:(id)arg1;
- (BOOL)isUninstalledAppNearMeSuggestionsAllowed;
- (BOOL)isUnionSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isValueSettingLockedDownByRestrictions:(id)arg1;
- (BOOL)isVehicleUIAllowed;
- (BOOL)isWallpaperModificationAllowed;
- (BOOL)isWebContentFilteringInEffect;
- (BOOL)isWebFilterUIActive;
- (BOOL)isWebTextDefineAllowed;
- (BOOL)isiCloudDriveAllowed;
- (id)knownAirPrintIPPURLStrings;
- (id)localizedDescriptionOfCurrentPasscodeConstraints;
- (id)localizedRestrictionSourceDescriptionForFeatures:(id)arg1;
- (void)lockDevice;
- (void)lockDeviceImmediately:(BOOL)arg1;
- (void)lockdownDidReceiveActivationRecord:(id)arg1;
- (id)managedAppIDs;
- (id)managedAppIDsWithFlags:(int)arg1;
- (id)managedEmailDomains;
- (id)managedMedia;
- (id)managedSystemConfigurationServiceIDs;
- (id)managedWiFiNetworkNames;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1;
- (BOOL)mayEnterPasscodeToAccessNonWhitelistedApps;
- (BOOL)mayOpenFromManagedToUnmanaged;
- (BOOL)mayOpenFromUnmanagedToManaged;
- (BOOL)mayShareToAirDropOriginatingAccountIsManaged:(BOOL)arg1;
- (BOOL)mayShareToMessagesOriginatingAccountIsManaged:(BOOL)arg1;
- (BOOL)mayShowLocalAccountsForBundleID:(id)arg1 sourceAccountManagement:(int)arg2;
- (void)migratePostDataMigrator;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(BOOL)arg2 forceAllowHostPairing:(BOOL)arg3 completion:(id /* block */)arg4;
- (int)newPasscodeEntryScreenType;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (void)notifyClientsToRecomputeCompliance;
- (void)notifyDeviceUnlocked;
- (void)notifyKeybagUpdated;
- (void)notifyUserHasSeenComplianceMessageWithLastLockDate:(id)arg1;
- (id)objectForFeature:(id)arg1;
- (id)objectRestrictionForFeature:(id)arg1;
- (id)parametersForBoolSetting:(id)arg1;
- (id)parametersForIntersectionSetting:(id)arg1;
- (id)parametersForUnionSetting:(id)arg1;
- (id)parametersForValueSetting:(id)arg1;
- (BOOL)parentalControlsAllowPasscodeAccessToNonWhitelistedApps;
- (id)parentalControlsAvailableAppBundleIDsForWhitelisting;
- (void)parentalControlsSetAllowPasscodeAccessToNonWhitelistedApps:(BOOL)arg1;
- (id)parentalControlsWhitelistedAppBundleIDs;
- (BOOL)passcode:(id)arg1 meetsCurrentConstraintsOutError:(id*)arg2;
- (id)passcodeExpiryDate;
- (id)passcodeExpiryDateOutError:(id*)arg1;
- (void)performBootTimeChecks;
- (id)popProfileDataFromHeadOfInstallationQueue;
- (id)popProvisioningProfileDataFromHeadOfInstallationQueue;
- (void)preflightUserInputResponses:(id)arg1 forPayloadIndex:(unsigned int)arg2;
- (void)processProfilesPostMigrate;
- (void)processProfilesPostRestore;
- (void)profileDataStoredForPurpose:(int)arg1 completionBlock:(id /* block */)arg2;
- (id)profileFromProfileData:(id)arg1 outError:(id*)arg2;
- (id)publicXPCConnection;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 forBundleID:(id)arg3 outError:(id*)arg4;
- (id)queueFileDataForAcceptance:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3;
- (id)queueFileDataForProfileInstallation:(id)arg1 originalFileName:(id)arg2 outError:(id*)arg3;
- (id)queueProfileDataForAcceptance:(id)arg1 outError:(id*)arg2;
- (id)queueProfileDataForInstallation:(id)arg1 outError:(id*)arg2;
- (void)recomputeUserComplianceWarning;
- (void)recomputeUserComplianceWarningSynchronously;
- (void)removeBoolSetting:(id)arg1;
- (void)removeExpiredProfiles;
- (void)removeObserver:(id)arg1;
- (void)removeOrphanedClientRestrictions;
- (void)removeProfileAsyncWithIdentifier:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1;
- (void)removeProfileWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)removeProvisioningProfileWithUUID:(id)arg1 outError:(id*)arg2;
- (void)removeValueSetting:(id)arg1;
- (void)removeWebContentFilterUserBlacklistedURLString:(id)arg1;
- (void)rereadManagedAppAttributes;
- (void)resetAllSettingsToDefaults;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)respondToCurrentPasscodeRequestContinue:(BOOL)arg1 passcode:(id)arg2;
- (void)respondToWarningsContinueInstallation:(BOOL)arg1;
- (int)restrictedBoolValueForFeature:(id)arg1;
- (void)retrieveAndStoreCloudConfigurationDetailsCompletionBlock:(id /* block */)arg1;
- (void)retrieveCloudConfigurationDetailsCompletionBlock:(id /* block */)arg1;
- (void)retrieveCloudConfigurationFromURL:(id)arg1 username:(id)arg2 password:(id)arg3 anchorCertificates:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setAirPlaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setAutoCorrectionAllowed:(BOOL)arg1;
- (void)setAutomaticAppUpdatesAllowed:(BOOL)arg1;
- (void)setBoolValue:(BOOL)arg1 ask:(BOOL)arg2 forSetting:(id)arg3 passcode:(id)arg4 completion:(id /* block */)arg5;
- (void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2;
- (void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setBoolValue:(BOOL)arg1 forSetting:(id)arg2 passcode:(id)arg3 completion:(id /* block */)arg4;
- (void)setConferenceRoomDisplayModeEnabled:(BOOL)arg1 ask:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setConferenceRoomDisplaySettingsUIAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setExplicitContentAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setFeatureM1Allowed:(BOOL)arg1;
- (void)setFingerprintUnlockAllowed:(BOOL)arg1 passcode:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setGracePeriod:(unsigned int)arg1 passcode:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setInteractionDelegate:(id)arg1;
- (void)setKeyboardShortcutsAllowed:(BOOL)arg1;
- (void)setManagedEmailDomains:(id)arg1;
- (void)setMediaPurchaseAllowed:(BOOL)arg1 ask:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setMultitaskingAllowed:(BOOL)arg1;
- (void)setParameters:(id)arg1 forBoolSetting:(id)arg2;
- (void)setParameters:(id)arg1 forValueSetting:(id)arg2;
- (void)setParametersForSettingsByType:(id)arg1;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2;
- (void)setParametersForSettingsByType:(id)arg1 passcode:(id)arg2 completion:(id /* block */)arg3;
- (void)setParentalControlsWhitelistedAppBundleIDs:(id)arg1;
- (void)setPasscodeWasSetInBackup:(BOOL)arg1;
- (void)setPredictiveKeyboardAllowed:(BOOL)arg1;
- (void)setSpellCheckAllowed:(BOOL)arg1;
- (void)setTrustedCodeSigningIdentities:(id)arg1;
- (void)setUserBookmarks:(id)arg1;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2;
- (void)setValue:(id)arg1 forSetting:(id)arg2 passcode:(id)arg3;
- (void)setValues:(id)arg1 forIntersectionSetting:(id)arg2;
- (void)setValues:(id)arg1 forUnionSetting:(id)arg2;
- (void)setWebContentFilterAutoPermittedURLStrings:(id)arg1;
- (void)setWebContentFilterUserBlacklistedURLStrings:(id)arg1;
- (void)setupAssistantDidFinish;
- (BOOL)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(BOOL*)arg3 outAllowUnmanagedAccounts:(BOOL*)arg4;
- (BOOL)shouldDestroyOldKeybag;
- (BOOL)shouldInstallStoredProfileForPurpose:(int)arg1;
- (BOOL)shouldShowCloudConfigurationUI;
- (BOOL)shouldShowSetupAssistant;
- (BOOL)shouldSkipSetupPanes;
- (BOOL)showProfileErrorUIWithProfileIdentifier:(id)arg1 outError:(id*)arg2;
- (void)shutDown;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (void)stashWebContentFilterAutoPermittedURLStrings;
- (void)stashWebContentFilterUserBlacklistedURLStrings;
- (void)storeCertificateData:(id)arg1 forHostIdentifier:(id)arg2;
- (void)storeCloudConfigurationDetails:(id)arg1;
- (void)storeCloudConfigurationDetails:(id)arg1 completion:(id /* block */)arg2;
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3;
- (void)submitUserInputResponses:(id)arg1;
- (BOOL)transitionToProfileAcceptanceUI;
- (BOOL)transitionToProfileAcceptanceUIAndReturnToBundleID:(id)arg1;
- (BOOL)transitionToProfileOverviewUI;
- (id)trustedCodeSigningIdentities;
- (BOOL)unlockDeviceWithPasscode:(id)arg1 outError:(id*)arg2;
- (int)unlockScreenType;
- (int)unlockScreenTypeWithOutSimplePasscodeType:(int*)arg1;
- (void)unstashUserBookmarksFromLabel:(id)arg1;
- (void)unstashWebContentFilterAutoPermittedURLStrings;
- (void)unstashWebContentFilterUserBlacklistedURLStrings;
- (void)updateProfileWithIdentifier:(id)arg1 interactionDelegate:(id)arg2;
- (id)updateProfileWithIdentifier:(id)arg1 outError:(id*)arg2;
- (id)userBookmarks;
- (id)userInfoForClientUUID:(id)arg1;
- (id)userSettings;
- (void)validateAppBundleIDs:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)validatePasscode:(id)arg1;
- (BOOL)validatePasscode:(id)arg1 andUnlockContentProtectedDevice:(BOOL)arg2;
- (id)valueForFeature:(id)arg1;
- (id)valueRestrictionForFeature:(id)arg1;
- (void)waitForMigrationIncludingPostRestoreMigration:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)wasCloudConfigurationApplied;
- (BOOL)wasTeslaCloudConfigurationApplied;
- (id)webContentFilterEffectiveBlacklistedURLStrings;
- (id)webContentFilterUserBlacklistedURLStrings;
- (id)xpcConnection;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

- (BOOL)installConfigurationProfileWithData:(id)arg1;

@end
