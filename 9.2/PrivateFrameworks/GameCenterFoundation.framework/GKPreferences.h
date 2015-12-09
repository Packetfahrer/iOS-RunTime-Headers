/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPreferences : NSObject {
    NSDictionary * _overrideValues;
    BOOL  _shouldSynchronizeOnNextRead;
    BOOL  _webKitInspectElementEnabled;
}

@property (nonatomic, readonly) BOOL HTTPShouldUsePipelining;
@property (nonatomic) BOOL _shouldSynchronizeOnNextRead;
@property (getter=isAccountModificationRestricted, nonatomic, readonly) BOOL accountModificationRestricted;
@property (getter=isAddingFriendsRestricted, nonatomic, readonly) BOOL addingFriendsRestricted;
@property (nonatomic) BOOL allowUnsignedBag;
@property (getter=isAppInstallationRestricted, nonatomic, readonly) BOOL appInstallationRestricted;
@property (nonatomic) double cacheTTLOverride;
@property (getter=isClipGestureEnabled, nonatomic) BOOL clipGestureEnabled;
@property (getter=isComprehensiveLoggingEnabled, nonatomic) BOOL comprehensiveLoggingEnabled;
@property (nonatomic) double debugRequestTimeout;
@property (nonatomic) int environment;
@property (nonatomic, readonly) unsigned int exchangeDataDefaultMaximumSize;
@property (nonatomic) unsigned int exchangeDataMaximumSize;
@property (nonatomic, readonly) unsigned int exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property (nonatomic) unsigned int exchangeMaxInitiatedExchangesPerPlayer;
@property (nonatomic) BOOL forceRelay;
@property (getter=isGameCenterRestricted, nonatomic, readonly) BOOL gameCenterRestricted;
@property (nonatomic) double garbageCollectionInterval;
@property (nonatomic) unsigned long logFilter;
@property (nonatomic) unsigned int loginDisableThreshold;
@property (nonatomic, readonly) unsigned int maxDefaultGameStateSizeTurnBased;
@property (nonatomic, readonly) unsigned int maxDefaultPlayersHosted;
@property (nonatomic, readonly) unsigned int maxDefaultPlayersP2P;
@property (nonatomic, readonly) unsigned int maxDefaultPlayersTurnBased;
@property (nonatomic) unsigned int maxGameStateSizeTurnBased;
@property (nonatomic) unsigned int maxPlayersHosted;
@property (nonatomic) unsigned int maxPlayersP2P;
@property (nonatomic) unsigned int maxPlayersTurnBased;
@property (nonatomic) unsigned int mescalSetupRetries;
@property (nonatomic) double minimumCacheTTL;
@property (getter=isMultiplayerGamingRestricted, nonatomic, readonly) BOOL multiplayerGamingRestricted;
@property (nonatomic) BOOL notificationAlertsEnabled;
@property (nonatomic) BOOL notificationBadgesEnabled;
@property (getter=isNotificationCenterEnabled, nonatomic) BOOL notificationCenterEnabled;
@property (nonatomic) BOOL notificationSoundsEnabled;
@property (nonatomic) unsigned int operationRetryCount;
@property (nonatomic) double operationRetryDelay;
@property (nonatomic) double operationTimeout;
@property (copy) NSDictionary *overrideValues;
@property (nonatomic) int pipeliningSetting;
@property (nonatomic) BOOL preemptiveRelay;
@property (nonatomic) <GKPreferencesDelegate> *preferencesDelegate;
@property (nonatomic) int pushEnvironment;
@property (nonatomic) BOOL shouldAddPlayerInfoToAddressBook;
@property (nonatomic) BOOL shouldAllowGameInvites;
@property (nonatomic) BOOL shouldAllowNearbyMultiplayer;
@property (nonatomic) BOOL shouldAnnotateImageUsage;
@property (nonatomic, readonly) BOOL shouldDisallowInvitesFromStrangers;
@property (nonatomic) BOOL shouldLinkPlayerToFacebook;
@property (nonatomic) BOOL shouldLinkPlayerToICloud;
@property (nonatomic) BOOL shouldLinkPlayerToTwitter;
@property (nonatomic) BOOL shouldTrackAtlasImageUsage;
@property (nonatomic) BOOL shouldUseTestIcons;
@property (nonatomic, retain) NSString *storeBagURL;
@property (getter=isStoreDemoModeEnabled, nonatomic, readonly) BOOL storeDemoModeEnabled;
@property (nonatomic) double terminationInterval;
@property (nonatomic, copy) NSString *testRunID;
@property (nonatomic) BOOL useInternalHeader;
@property (nonatomic) BOOL useTestProtocols;
@property (nonatomic) BOOL verboseLogging;
@property (getter=isWebKitInspectElementEnabled, nonatomic) BOOL webKitInspectElementEnabled;

+ (id)displayNameForEnvironment:(int)arg1;
+ (id)hostNameForEnvironment:(int)arg1;
+ (id)sharedPreferences;

- (BOOL)HTTPShouldUsePipelining;
- (void)_didWriteKey:(struct __CFString { }*)arg1;
- (BOOL)_shouldSynchronizeOnNextRead;
- (BOOL)allowUnsignedBag;
- (void)applicationWillEnterBackground:(id)arg1;
- (BOOL)booleanValueForKey:(struct __CFString { }*)arg1;
- (BOOL)booleanValueForKey:(struct __CFString { }*)arg1 defaultValue:(BOOL)arg2;
- (double)cacheTTLOverride;
- (void)dealloc;
- (double)debugRequestTimeout;
- (int)environment;
- (unsigned int)exchangeDataDefaultMaximumSize;
- (unsigned int)exchangeDataMaximumSize;
- (unsigned int)exchangeDefaultMaxInitiatedExchangesPerPlayer;
- (unsigned int)exchangeMaxInitiatedExchangesPerPlayer;
- (BOOL)forceRelay;
- (double)garbageCollectionInterval;
- (id)init;
- (id)initWithUIKitNotifications;
- (id)initWithoutUIKitNotifications;
- (int)integerValueForKey:(struct __CFString { }*)arg1 defaultValue:(int)arg2;
- (void)invalidate;
- (BOOL)isAccountModificationRestricted;
- (BOOL)isAddingFriendsRestricted;
- (BOOL)isAppInstallationRestricted;
- (BOOL)isClipGestureEnabled;
- (BOOL)isComprehensiveLoggingEnabled;
- (BOOL)isGameCenterRestricted;
- (BOOL)isInternalBuild;
- (BOOL)isMultiplayerGamingRestricted;
- (BOOL)isNotificationCenterEnabled;
- (BOOL)isStoreDemoModeEnabled;
- (BOOL)isWebKitInspectElementEnabled;
- (unsigned long)logFilter;
- (unsigned int)loginDisableThreshold;
- (unsigned int)maxDefaultGameStateSizeTurnBased;
- (unsigned int)maxDefaultPlayersHosted;
- (unsigned int)maxDefaultPlayersP2P;
- (unsigned int)maxDefaultPlayersTurnBased;
- (unsigned int)maxGameStateSizeTurnBased;
- (unsigned int)maxPlayersHosted;
- (unsigned int)maxPlayersP2P;
- (unsigned int)maxPlayersTurnBased;
- (unsigned int)mescalSetupRetries;
- (double)minimumCacheTTL;
- (BOOL)notificationAlertsEnabled;
- (BOOL)notificationBadgesEnabled;
- (BOOL)notificationSoundsEnabled;
- (unsigned int)operationRetryCount;
- (double)operationRetryDelay;
- (double)operationTimeout;
- (id)overrideValues;
- (int)pipeliningSetting;
- (BOOL)preemptiveRelay;
- (id)preferencesDelegate;
- (id)preferencesValueForKey:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (int)pushEnvironment;
- (void)removeOverrideForKey:(id)arg1;
- (BOOL)restrictionEnabledForKey:(id)arg1;
- (void)setAllowUnsignedBag:(BOOL)arg1;
- (void)setBooleanValue:(BOOL)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setCacheTTLOverride:(double)arg1;
- (void)setClipGestureEnabled:(BOOL)arg1;
- (void)setComprehensiveLoggingEnabled:(BOOL)arg1;
- (void)setDebugRequestTimeout:(double)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setExchangeDataMaximumSize:(unsigned int)arg1;
- (void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned int)arg1;
- (void)setForceRelay:(BOOL)arg1;
- (void)setGarbageCollectionInterval:(double)arg1;
- (void)setIntegerValue:(int)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setLogFilter:(unsigned long)arg1;
- (void)setLoginDisableThreshold:(unsigned int)arg1;
- (void)setMaxGameStateSizeTurnBased:(unsigned int)arg1;
- (void)setMaxPlayersHosted:(unsigned int)arg1;
- (void)setMaxPlayersP2P:(unsigned int)arg1;
- (void)setMaxPlayersTurnBased:(unsigned int)arg1;
- (void)setMescalSetupRetries:(unsigned int)arg1;
- (void)setMinimumCacheTTL:(double)arg1;
- (void)setNotificationAlertsEnabled:(BOOL)arg1;
- (void)setNotificationBadgesEnabled:(BOOL)arg1;
- (void)setNotificationCenterEnabled:(BOOL)arg1;
- (void)setNotificationSoundsEnabled:(BOOL)arg1;
- (void)setOperationRetryCount:(unsigned int)arg1;
- (void)setOperationRetryDelay:(double)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOverrideValues:(id)arg1;
- (void)setPipeliningSetting:(int)arg1;
- (void)setPreemptiveRelay:(BOOL)arg1;
- (void)setPreferencesDelegate:(id)arg1;
- (void)setPushEnvironment:(int)arg1;
- (void)setShouldAddPlayerInfoToAddressBook:(BOOL)arg1;
- (void)setShouldAllowGameInvites:(BOOL)arg1;
- (void)setShouldAllowNearbyMultiplayer:(BOOL)arg1;
- (void)setShouldAnnotateImageUsage:(BOOL)arg1;
- (void)setShouldLinkPlayerToFacebook:(BOOL)arg1;
- (void)setShouldLinkPlayerToICloud:(BOOL)arg1;
- (void)setShouldLinkPlayerToTwitter:(BOOL)arg1;
- (void)setShouldTrackAtlasImageUsage:(BOOL)arg1;
- (void)setShouldUseTestIcons:(BOOL)arg1;
- (void)setStoreBagURL:(id)arg1;
- (void)setStringValue:(id)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setTerminationInterval:(double)arg1;
- (void)setTestRunID:(id)arg1;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setUnsignedIntegerValue:(int)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setUseInternalHeader:(BOOL)arg1;
- (void)setUseTestProtocols:(BOOL)arg1;
- (void)setVerboseLogging:(BOOL)arg1;
- (void)setWebKitInspectElementEnabled:(BOOL)arg1;
- (void)set_shouldSynchronizeOnNextRead:(BOOL)arg1;
- (BOOL)shouldAddPlayerInfoToAddressBook;
- (BOOL)shouldAllowGameInvites;
- (BOOL)shouldAllowNearbyMultiplayer;
- (BOOL)shouldAnnotateImageUsage;
- (BOOL)shouldDisallowInvitesFromStrangers;
- (BOOL)shouldLinkPlayerToFacebook;
- (BOOL)shouldLinkPlayerToICloud;
- (BOOL)shouldLinkPlayerToTwitter;
- (BOOL)shouldTrackAtlasImageUsage;
- (BOOL)shouldUseTestIcons;
- (id)storeBagURL;
- (id)stringValueForKey:(struct __CFString { }*)arg1 defaultValue:(id)arg2;
- (void)synchronize;
- (double)terminationInterval;
- (id)testRunID;
- (double)timeIntervalForKey:(struct __CFString { }*)arg1 defaultValue:(double)arg2;
- (int)unsignedIntegerValueForKey:(struct __CFString { }*)arg1 defaultValue:(int)arg2;
- (BOOL)useInternalHeader;
- (BOOL)useTestProtocols;
- (BOOL)verboseLogging;

@end
