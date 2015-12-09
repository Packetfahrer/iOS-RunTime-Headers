/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISSoftwareMap : NSObject {
    NSArray * _applications;
}

@property (nonatomic, readonly) NSArray *applications;

+ (id)_newSoftwareUpdateDictionaryForApplication:(id)arg1;
+ (void)_startWatchingInstallationNotifications;
+ (id)applicationForBundleIdentifier:(id)arg1;
+ (id)applicationForBundleIdentifier:(id)arg1 applicationType:(id)arg2;
+ (id)containerPathForApp:(id)arg1 homeDirectory:(id)arg2 systemMetadataDirectory:(id)arg3;
+ (id)copySoftwareUpdatesPropertyListWithApplications:(id)arg1 updatesContext:(id)arg2;
+ (id)currentMap;
+ (BOOL)currentMapIsValid;
+ (void)enumerateApplicationsForProxies:(id)arg1 usingBlock:(id /* block */)arg2;
+ (BOOL)haveApplicationsOfType:(id)arg1;
+ (void)invalidateCurrentMap;
+ (id)loadedMap;
+ (void)setCurrentMap:(id)arg1;
+ (void)startObservingNotifications;

- (void)_loadFromMobileInstallation;
- (id)applicationForBundleIdentifier:(id)arg1;
- (id)applicationForItemIdentifier:(id)arg1;
- (id)applications;
- (id)copySoftwareUpdatesPropertyList;
- (id)copySoftwareUpdatesPropertyListWithUpdatesContext:(id)arg1;
- (void)dealloc;
- (id)init;

@end
