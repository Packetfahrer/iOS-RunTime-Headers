/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {
    NSNumber * _ODRDiskUsage;
    NSArray * _UIBackgroundModes;
    NSArray * _VPNPlugins;
    NSArray * _appTags;
    NSString * _applicationDSID;
    NSString * _applicationVariant;
    NSArray * _audioComponents;
    NSString * _companionAppIdentifier;
    NSArray * _deviceFamily;
    NSUUID * _deviceIdentifierForVendor;
    NSArray * _directionsModes;
    NSNumber * _downloaderDSID;
    NSNumber * _dynamicDiskUsage;
    NSArray * _externalAccessoryProtocols;
    NSNumber * _familyID;
    unsigned int  _flags;
    NSDictionary * _groupContainers;
    NSArray * _groupIdentifiers;
    unsigned int  _installType;
    BOOL  _isContainerized;
    NSNumber * _itemID;
    NSString * _itemName;
    NSString * _minimumSystemVersion;
    long  _modTime;
    unsigned int  _originalInstallType;
    NSArray * _plugInKitPlugins;
    NSArray * _pluginUUIDs;
    NSArray * _privateDocumentIconNames;
    LSApplicationProxy * _privateDocumentTypeOwner;
    NSNumber * _purchaserDSID;
    long  _regTime;
    NSDate * _registeredDate;
    NSArray * _requiredDeviceCapabilities;
    NSString * _sdkVersion;
    NSString * _shortVersionString;
    NSString * _sourceAppIdentifier;
    NSNumber * _staticDiskUsage;
    NSString * _storeCohortMetadata;
    NSNumber * _storeFront;
    NSString * _teamID;
    NSString * _vendorName;
    NSNumber * _versionID;
}

@property (nonatomic, readonly) NSNumber *ODRDiskUsage;
@property (nonatomic, readonly) NSArray *UIBackgroundModes;
@property (nonatomic, readonly) NSArray *VPNPlugins;
@property (nonatomic, readonly) NSArray *appTags;
@property (nonatomic, readonly) NSString *applicationDSID;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *applicationType;
@property (nonatomic, readonly) NSString *applicationVariant;
@property (nonatomic, readonly) NSArray *audioComponents;
@property (nonatomic, readonly) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, readonly) NSString *companionApplicationIdentifier;
@property (nonatomic, readonly) NSArray *deviceFamily;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForVendor;
@property (nonatomic, readonly) NSArray *directionsModes;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (nonatomic, readonly) NSNumber *dynamicDiskUsage;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *familyID;
@property (nonatomic, readonly) BOOL fileSharingEnabled;
@property (nonatomic, readonly) NSDictionary *groupContainers;
@property (nonatomic, readonly) NSArray *groupIdentifiers;
@property (nonatomic, readonly) BOOL hasMIDBasedSINF;
@property (nonatomic, readonly) BOOL hasSettingsBundle;
@property (nonatomic, readonly) BOOL iconIsPrerendered;
@property (nonatomic, readonly) NSProgress *installProgress;
@property (nonatomic, readonly) unsigned int installType;
@property (nonatomic, readonly) BOOL isAdHocCodeSigned;
@property (nonatomic, readonly) BOOL isAppUpdate;
@property (nonatomic, readonly) BOOL isBetaApp;
@property (nonatomic, readonly) BOOL isContainerized;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, readonly) BOOL isNewsstandApp;
@property (nonatomic, readonly) BOOL isPlaceholder;
@property (nonatomic, readonly) BOOL isPurchasedReDownload;
@property (nonatomic, readonly) BOOL isRestricted;
@property (nonatomic, readonly) BOOL isWatchKitApp;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, readonly) NSString *minimumSystemVersion;
@property (nonatomic, readonly) BOOL missingRequiredSINF;
@property (nonatomic, readonly) unsigned int originalInstallType;
@property (nonatomic, readonly) NSArray *plugInKitPlugins;
@property (nonatomic, readonly) NSString *preferredArchitecture;
@property (nonatomic, readonly) BOOL profileValidated;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) NSDate *registeredDate;
@property (nonatomic, readonly) NSArray *requiredDeviceCapabilities;
@property (nonatomic, readonly) NSString *roleIdentifier;
@property (nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSNumber *staticDiskUsage;
@property (nonatomic, readonly) NSString *storeCohortMetadata;
@property (nonatomic, readonly) NSNumber *storeFront;
@property (nonatomic, readonly) BOOL supportsAudiobooks;
@property (nonatomic, readonly) BOOL supportsExternallyPlayableContent;
@property (nonatomic, readonly) BOOL supportsOpenInPlace;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) NSString *vendorName;
@property (getter=isWhitelisted, nonatomic, readonly) BOOL whitelisted;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(BOOL)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned long)arg1;
+ (BOOL)supportsSecureCoding;

- (id)ODRDiskUsage;
- (id)UIBackgroundModes;
- (id)VPNPlugins;
- (id)_initWithBundleUnit:(unsigned long)arg1 applicationIdentifier:(id)arg2;
- (id)appStoreReceiptURL;
- (id)appTags;
- (id)applicationDSID;
- (id)applicationIdentifier;
- (id)applicationType;
- (id)applicationVariant;
- (id)audioComponents;
- (id)betaExternalVersionIdentifier;
- (long)bundleModTime;
- (id)companionApplicationIdentifier;
- (void)dealloc;
- (id)description;
- (id)deviceFamily;
- (id)deviceIdentifierForVendor;
- (id)directionsModes;
- (id)downloaderDSID;
- (id)dynamicDiskUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAccessoryProtocols;
- (id)externalVersionIdentifier;
- (id)familyID;
- (BOOL)fileSharingEnabled;
- (id)groupContainers;
- (id)groupIdentifiers;
- (BOOL)hasMIDBasedSINF;
- (BOOL)hasSettingsBundle;
- (unsigned int)hash;
- (id)iconDataForVariant:(int)arg1;
- (BOOL)iconIsPrerendered;
- (id)iconStyleDomain;
- (id)initWithCoder:(id)arg1;
- (id)installProgress;
- (id)installProgressSync;
- (unsigned int)installType;
- (BOOL)isAdHocCodeSigned;
- (BOOL)isAppUpdate;
- (BOOL)isBetaApp;
- (BOOL)isContainerized;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isInstalled;
- (BOOL)isNewsstandApp;
- (BOOL)isPlaceholder;
- (BOOL)isPurchasedReDownload;
- (BOOL)isRestricted;
- (BOOL)isWatchKitApp;
- (BOOL)isWhitelisted;
- (id)itemID;
- (id)itemName;
- (id)localizedName;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedShortName;
- (id)machOUUIDs;
- (id)minimumSystemVersion;
- (BOOL)missingRequiredSINF;
- (unsigned int)originalInstallType;
- (id)plugInKitPlugins;
- (void)populateNotificationData;
- (id)preferredArchitecture;
- (BOOL)privateDocumentIconAllowOverride;
- (id)privateDocumentIconNames;
- (id)privateDocumentTypeOwner;
- (id)privateIconsDictionary;
- (BOOL)profileValidated;
- (id)purchaserDSID;
- (id)registeredDate;
- (id)requiredDeviceCapabilities;
- (id)resourcesDirectoryURL;
- (id)roleIdentifier;
- (id)sdkVersion;
- (void)setPrivateDocumentIconAllowOverride:(BOOL)arg1;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (id)shortVersionString;
- (id)sourceAppIdentifier;
- (id)staticDiskUsage;
- (id)storeCohortMetadata;
- (id)storeFront;
- (BOOL)supportsAudiobooks;
- (BOOL)supportsExternallyPlayableContent;
- (BOOL)supportsOpenInPlace;
- (id)teamID;
- (id)uniqueIdentifier;
- (id)userActivityStringForAdvertisementData:(id)arg1;
- (id)vendorName;
- (id)versionIdentifier;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (struct CGSize { float x1; float x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification

+ (id)un_applicationProxyForBundleIdentifier:(id)arg1;
+ (id)un_bundleForBundleIdentifier:(id)arg1;

- (BOOL)_un_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (id)un_bundle;
- (id)un_infoDictionary;
- (BOOL)un_isSystemApplication;
- (id)un_pathForSoundName:(id)arg1;
- (BOOL)un_requiresLocalNotification;
- (BOOL)un_shouldUseDefaultDataProvider;
- (BOOL)un_usesLocalNotification;

@end
