/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate> {
    NSString * _UUID;
    NSObject<OS_dispatch_queue> * _celsiusQueue;
    WeatherCloudPreferences * _cloudPreferences;
    BOOL  _isCelsius;
    NSArray * _lastUbiquitousWrittenDefaults;
    <WeatherPreferencesPersistence> * _persistence;
    BOOL  _serviceDebugging;
    NSString * _serviceHost;
    <SynchronizedDefaultsDelegate> * _syncDelegate;
    NSString * _twcURLString;
    BOOL  _userGroupPrefsLockedWhenInit;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *celsiusQueue;
@property (retain) WeatherCloudPreferences *cloudPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) <SynchronizedDefaultsDelegate> *syncDelegate;
@property (nonatomic, copy) NSString *twcURLString;
@property (nonatomic) BOOL userGroupPrefsLockedWhenInit;
@property (nonatomic, copy) NSString *yahooWeatherURLString;

+ (id)_getGroupDefaultsFromURLInApp:(id)arg1;
+ (void)clearSharedPreferences;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;
+ (id)userDefaultsPersistence;

- (void).cxx_destruct;
- (id)UUID;
- (id)_cacheDirectoryPath;
- (BOOL)_checkAndPerformMigrationIfNeeded;
- (void)_clearCachedObjects;
- (id)_defaultCities;
- (BOOL)_defaultsAreValid;
- (BOOL)_defaultsCurrent;
- (BOOL)_ensurePrefsLoaded;
- (void)adjustPrefsForLocalWeatherEnabled:(BOOL)arg1;
- (BOOL)areCitiesDefault:(id)arg1;
- (id)celsiusQueue;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (BOOL)cityDictionaryHasValidCoordinates:(id)arg1;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (id)cloudPreferences;
- (void)dealloc;
- (BOOL)ensureValidSelectedCityID;
- (id)init;
- (void)initOnPrefLoadWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1;
- (BOOL)isCelsius;
- (BOOL)isLocalWeatherEnabled;
- (int)loadActiveCity;
- (int)loadDefaultSelectedCity;
- (id)loadDefaultSelectedCityID;
- (id)loadSavedCities;
- (id)localWeatherCity;
- (BOOL)performMigration;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (BOOL)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned int)arg2;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned int)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (BOOL)serviceDebugging;
- (id)serviceHost;
- (void)setActiveCity:(unsigned int)arg1;
- (void)setCelsius:(BOOL)arg1;
- (void)setCelsiusQueue:(id)arg1;
- (void)setCloudPreferences:(id)arg1;
- (void)setDefaultCities:(id)arg1;
- (void)setDefaultSelectedCity:(unsigned int)arg1;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)setLocalWeatherEnabled:(BOOL)arg1;
- (void)setSyncDelegate:(id)arg1;
- (void)setTwcURLString:(id)arg1;
- (void)setUserGroupPrefsLockedWhenInit:(BOOL)arg1;
- (void)setYahooWeatherURLString:(id)arg1;
- (void)setupUbiquitousStoreIfNeeded;
- (id)syncDelegate;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(BOOL)arg1;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)arg1;
- (id)twcURLString;
- (void)updateUnitsFromNotification;
- (BOOL)userGroupPrefsLockedWhenInit;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;
- (id)yahooWeatherURLString;

@end
