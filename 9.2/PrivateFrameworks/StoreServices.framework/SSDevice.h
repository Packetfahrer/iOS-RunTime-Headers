/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDevice : NSObject <SSRequestDelegate> {
    NSString * _appleTVProductVersion;
    double  _batteryLevel;
    unsigned int  _batteryMonitorNotification;
    struct IONotificationPort { } * _batteryMonitorPort;
    id  _cloudMediaLibraryIdentifier;
    int  _deviceType;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SSKeyValueStore * _keyValueStore;
    NSString * _legacyUserAgent;
    NSString * _localStoreFrontIdentifier;
    BOOL  _localStoreFrontIsTransient;
    id  _mediaLibraryIdentifier;
    NSString * _phoneNumber;
    BOOL  _pluggedIn;
    int  _pluggedInToken;
    int  _powerMonitorCount;
    NSString * _productType;
    NSString * _productVersion;
    id  _softwareLibraryIdentifier;
    NSString * _synchedStoreFrontIdentifier;
    int  _telephonyCapability;
    NSString * _udid;
    SSURLBag * _urlBag;
    NSString * _userAgent;
}

@property (readonly) NSSet *automaticDownloadKinds;
@property (readonly) double batteryLevel;
@property (copy) NSString *cloudMediaLibraryIdentifier;
@property (readonly) NSString *compatibleProductType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) int deviceType;
@property (readonly) unsigned long deviceTypeIdentifier;
@property (readonly) unsigned int hash;
@property (readonly) NSString *legacyUserAgent;
@property (copy) NSString *mediaLibraryIdentifier;
@property (readonly) NSString *phoneNumber;
@property (getter=isPluggedIn, readonly) BOOL pluggedIn;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *serialNumber;
@property (copy) NSString *softwareLibraryIdentifier;
@property (readonly) NSString *storeFrontIdentifier;
@property (getter=isStoreFrontIdentifierTransient, readonly) BOOL storeFrontIdentifierTransient;
@property (readonly) Class superclass;
@property (readonly) NSString *synchedStoreFrontIdentifier;
@property (readonly) NSString *thinnedApplicationVariantIdentifier;
@property (readonly) NSString *uniqueDeviceIdentifier;
@property (readonly) NSString *userAgent;

+ (id)copyCachedAvailableItemKinds;
+ (id)currentDevice;
+ (BOOL)promptNeedsDisplay:(id)arg1;
+ (BOOL)setCachedAvailableItemKinds:(id)arg1;
+ (void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2;
+ (void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2;

- (id)_appleTVProductVersion;
- (void)_cacheKeyValueStoreValues;
- (id)_copyCarrierBundleEligibilityWithStatus:(id)arg1;
- (id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2;
- (id)_copyProductType;
- (int)_deviceClass;
- (int)_deviceType;
- (int)_deviceTypeForProductType:(id)arg1;
- (int)_deviceTypeForUnknownAppleTV:(id)arg1;
- (int)_deviceTypeForUnknownIPad:(id)arg1;
- (int)_deviceTypeForUnknownIPhone:(id)arg1;
- (int)_deviceTypeForUnknownIPod:(id)arg1;
- (id)_diskCapacityString;
- (id)_fairPlayDeviceTypeString;
- (BOOL)_getDeviceType:(unsigned int*)arg1 error:(id*)arg2;
- (void)_invalidatePhoneNumber;
- (void)_invalidateSoftwareCUID;
- (BOOL)_is1080pCapable;
- (BOOL)_is720pCapable;
- (id)_newLegacyUserAgent:(BOOL*)arg1;
- (id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(BOOL*)arg3;
- (void)_postStoreFrontDidChangeNotification;
- (id)_productVersion;
- (void)_reloadAfterStoreFrontChange;
- (void)_reloadPluggedInState;
- (BOOL)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_updateBatteryLevelFromService:(unsigned int)arg1;
- (id)_userAgentClientNameForAppleTVBundleID:(id)arg1;
- (id)_userAgentClientNameForBundleID:(id)arg1;
- (id)_userAgentClientNameForInfoPlist:(id)arg1;
- (id)automaticDownloadKinds;
- (double)batteryLevel;
- (id)carrierBundleStatusForService:(int)arg1;
- (id)cloudMediaLibraryIdentifier;
- (id)compatibleProductType;
- (id)copyStoreFrontRequestHeaders;
- (void)dealloc;
- (int)deviceType;
- (unsigned long)deviceTypeIdentifier;
- (void)enableAllAutomaticDownloadKindsWithCompletionBlock:(id /* block */)arg1;
- (void)getAvailableItemKindsWithBlock:(id /* block */)arg1;
- (void)getCarrierBundleStatusForService:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)getCellularNetworkingAllowedWithBlock:(id /* block */)arg1;
- (BOOL)getMachineIdentifier:(id*)arg1 otp:(id*)arg2 forAccountIdentifier:(id)arg3;
- (id)init;
- (BOOL)isPluggedIn;
- (BOOL)isStoreFrontIdentifierTransient;
- (id)legacyUserAgent;
- (void)loadStoreFrontWithCompletionHandler:(id /* block */)arg1;
- (id)mediaLibraryIdentifier;
- (void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)phoneNumber;
- (id)productType;
- (id)productVersion;
- (void)reloadStoreFrontIdentifier;
- (void)resetStoreFrontForSignOut;
- (id)serialNumber;
- (void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)setCellularNetworkingAllowed:(BOOL)arg1;
- (void)setCloudMediaLibraryIdentifier:(id)arg1;
- (void)setMediaLibraryIdentifier:(id)arg1;
- (void)setSoftwareLibraryIdentifier:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(BOOL)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(BOOL)arg3;
- (void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2;
- (void)setStoreFrontWithResponseHeaders:(id)arg1;
- (void)showPromptWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)softwareLibraryIdentifier;
- (void)startPowerMonitoring;
- (void)stopPowerMonitoring;
- (id)storeFrontIdentifier;
- (BOOL)supportsDeviceCapability:(int)arg1;
- (id)synchedStoreFrontIdentifier;
- (void)synchronizeAutomaticDownloadKinds;
- (id)thinnedApplicationVariantIdentifier;
- (void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)uniqueDeviceIdentifier;
- (id)userAgent;
- (id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2;
- (id)userAgentWithClientName:(id)arg1 version:(id)arg2;

@end
