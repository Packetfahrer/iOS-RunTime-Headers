/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserDefaults : NSObject {
    NSMutableDictionary * _cache;
    NSString * _containerIdentifer;
    BRCUserDefaults * _globalContainerUserDefault;
    NSDictionary * _serverContainerConfigurationDict;
}

@property (nonatomic, readonly) double accessTimeDeltaInHighUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInLowUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInMedUrgency;
@property (nonatomic, readonly) double accessTimeDeltaInVeryHighUrgency;
@property (nonatomic, readonly) double activeDownloadSizeRefreshInterval;
@property (nonatomic, readonly) unsigned int aliasDeletionBatchSize;
@property (nonatomic, readonly) NSDictionary *applyThrottleParams;
@property (nonatomic, readonly) double appsFetchPacerDelay;
@property (nonatomic, readonly) NSSet *blacklistedPackageExtensions;
@property (nonatomic, readonly) NSSet *blacklistedThumbnailExtensions;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *configurationUpdateXPCActivity;
@property (nonatomic, readonly) NSDictionary *containerAliasRemovalThrottleParams;
@property (nonatomic, readonly) NSDictionary *containerResetThrottleParams;
@property (nonatomic, readonly) NSDictionary *containerScanThrottleParams;
@property (nonatomic, readonly) unsigned int copyShareIDsBatchSize;
@property (nonatomic, readonly) double dbBatchDelay;
@property (nonatomic, readonly) int dbBatchSize;
@property (nonatomic, readonly) BOOL dbProfiled;
@property (nonatomic, readonly) BOOL dbTraced;
@property (nonatomic, readonly) double diskSpaceCheckInterval;
@property (nonatomic, readonly) unsigned long long diskSpaceRequiredToReturnToGreedyState;
@property (nonatomic, readonly) double documentAccessHighPriorityInterval;
@property (nonatomic, readonly) unsigned int downloadBatchCount;
@property (nonatomic, readonly) unsigned int downloadBatchRecordsCount;
@property (nonatomic, readonly) NSDictionary *downloadThrottleParams;
@property (nonatomic, readonly) BOOL forceBatchFailureWhenReceivingAssetTokenExpiration;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *forcedSyncXPCActivity;
@property (nonatomic, readonly) double foregroundGracePeriod;
@property (nonatomic, readonly) double fseventsLatency;
@property (nonatomic, readonly) double fseventsResetBackoff;
@property (nonatomic, readonly) double graveyardAgeDeltaInLowUrgency;
@property (nonatomic, readonly) double graveyardAgeDeltaInMedUrgency;
@property (nonatomic, readonly) double inactiveIntervalForGlobalDownloads;
@property (nonatomic, readonly) double intervalToWaitBeforeShowingAdditionalDescription;
@property (nonatomic, readonly) double lockedFileScanInterval;
@property (nonatomic, readonly) int logLevel;
@property (nonatomic, readonly) unsigned int logoutTimeout;
@property (nonatomic, readonly) NSDictionary *lostItemThrottleParams;
@property (nonatomic, readonly) unsigned int maxRecordCountInAppContainerModifyRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInFetchRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInModifyRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRecordCountInQuerySharedRecordsOperation;
@property (nonatomic, readonly) unsigned int maxRelativePathDepth;
@property (nonatomic, readonly) unsigned int maxSyncPathDepth;
@property (nonatomic, readonly) unsigned int maxXattrBlobSize;
@property (nonatomic, readonly) unsigned long long maximumAccountSizeToBeAlwaysGreedy;
@property (nonatomic, readonly) NSDictionary *migrationThrottleParams;
@property (nonatomic, readonly) long long minAutomaticallyEvictableFilesize;
@property (nonatomic, readonly) long long minFileSizeForGraveyard;
@property (nonatomic, readonly) long long minFileSizeForThumbnailTransfer;
@property (nonatomic, readonly) long long minimalSizeToShowAdditionalDescription;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToBeFunctional;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToBeGreedy;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToDownload;
@property (nonatomic, readonly) unsigned long long minimumDiskSpaceRequiredToDownloadUserInitiated;
@property (nonatomic, readonly) NSSet *nonAutoEvictableExtensions;
@property (nonatomic, readonly) unsigned int notifBatchSize;
@property (nonatomic, readonly) unsigned int notifGatherUpTo;
@property (nonatomic, readonly) unsigned int notifOverflowLimit;
@property (nonatomic, readonly) NSDictionary *operationFailureThrottleParams;
@property (nonatomic, readonly) double packageExtensionPlistWriteInterval;
@property (nonatomic, readonly) NSSet *packageExtensions;
@property (nonatomic, readonly) double periodicSyncTimeInterval;
@property (nonatomic, readonly) unsigned int publishURLTimeout;
@property (nonatomic, readonly) double purgePacerInterval;
@property (nonatomic, readonly) double quotaFetchPacerDelay;
@property (nonatomic, readonly) double readerIOsCancelDelay;
@property (nonatomic, readonly) double readerLostItemBackoff;
@property (nonatomic, readonly) int readerMaxConcurrentIOs;
@property (nonatomic, readonly) double readerPackageProcessingDelay;
@property (nonatomic, readonly) int readerScanBatchSize;
@property (nonatomic, readonly) NSDictionary *readerThrottleParams;
@property (nonatomic, readonly) NSString *serverConfigurationURL;
@property (nonatomic, readonly) BOOL sessionZombiesEnabled;
@property (nonatomic, readonly) NSSet *shareableExtensions;
@property (nonatomic, readonly) unsigned long long sharedDbSyncDownCoalesceNanoseconds;
@property (nonatomic, readonly) BOOL shouldContainerBeGreedy;
@property (nonatomic, readonly) BOOL shouldDisplayUploadNotification;
@property (nonatomic, readonly) BOOL shouldFetchAllChanges;
@property (nonatomic, readonly) unsigned int spotlightIndexerBatchSize;
@property (nonatomic, readonly) NSDictionary *spotlightIndexerFailureThrottleParams;
@property (nonatomic, readonly) unsigned int spotlightIndexerMaxHeirarchyDepth;
@property (nonatomic, readonly) double spotlightIndexerPacerInterval;
@property (nonatomic, readonly) unsigned short stageDirectoryUmask;
@property (nonatomic, readonly) unsigned short stageFileUmask;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *stageGCXPCActivity;
@property (nonatomic, readonly) unsigned short stageInPackageDirectoryUmask;
@property (nonatomic, readonly) unsigned short stageInPackageFileUmask;
@property (nonatomic, readonly) unsigned int statementCacheMaxCountForClientTruth;
@property (nonatomic, readonly) unsigned int statementCacheMaxCountForServerTruth;
@property (nonatomic, readonly) NSDictionary *syncAppContainerThrottleParams;
@property (nonatomic, readonly) BRCSyncOperationThrottleParams *syncDownThrottle;
@property (nonatomic, readonly) NSArray *syncThrottles;
@property (nonatomic, readonly) float syncUpDailyBudget;
@property (nonatomic, readonly) float syncUpDataCreateCost;
@property (nonatomic, readonly) float syncUpDataDeleteCost;
@property (nonatomic, readonly) float syncUpDataEditCost;
@property (nonatomic, readonly) float syncUpDocumentCreateCost;
@property (nonatomic, readonly) float syncUpDocumentDeleteCost;
@property (nonatomic, readonly) float syncUpDocumentEditCost;
@property (nonatomic, readonly) float syncUpHourlyBudget;
@property (nonatomic, readonly) float syncUpInitialItemCost;
@property (nonatomic, readonly) float syncUpMinimalBudget;
@property (nonatomic, readonly) float syncUpMinutelyBudget;
@property (nonatomic, readonly) float syncUpStructureCreateCost;
@property (nonatomic, readonly) float syncUpStructureDeleteCost;
@property (nonatomic, readonly) float syncUpStructureEditCost;
@property (nonatomic, readonly) BRCSyncOperationThrottleParams *syncUpThrottle;
@property (nonatomic, readonly) double systemLowDiskLatency;
@property (nonatomic, readonly) double systemPowerLatency;
@property (nonatomic, readonly) double systemReachabilityLatency;
@property (nonatomic, readonly) unsigned int thumbnailTransferQueueWidth;
@property (nonatomic, readonly) int transferQueueMaxConcurrentOperations;
@property (nonatomic, readonly) int transferQueueMinConcurrentOperations;
@property (nonatomic, readonly) double transferQueueTransferBudget;
@property (nonatomic, readonly) unsigned int treeEnumeratorBatchSize;
@property (nonatomic, readonly) unsigned int uploadBatchCount;
@property (nonatomic, readonly) unsigned int uploadBatchRecordsCount;
@property (nonatomic, readonly) long long uploadMaxFileSize;
@property (nonatomic, readonly) long long uploadMaxInPkgFileSize;
@property (nonatomic, readonly) NSDictionary *uploadThrottleParams;
@property (nonatomic, readonly) int writerApplyBatchSize;
@property (nonatomic, readonly) double writerIOsCancelDelay;
@property (nonatomic, readonly) int writerMaxConcurrentIOs;

+ (id)_userDefaultsManager;
+ (id)defaultsForContainerIdentifier:(id)arg1;
+ (id)defaultsForMetadataContainer;
+ (void)loadCachedServerConfigFromDB:(id)arg1;
+ (void)reset;
+ (void)saveServerConfigToDB:(id)arg1;
+ (void)setServerConfigurationURL:(id)arg1 whenLoaded:(id /* block */)arg2;

- (void).cxx_destruct;
- (float)_defaultSyncUpDailyBudget;
- (float)_defaultSyncUpHourlyBudget;
- (float)_defaultSyncUpMinutelyBudget;
- (id)_extensionSetForKey:(id)arg1 startingWithExtensions:(id)arg2;
- (unsigned short)_umaskForKey:(id)arg1;
- (double)accessTimeDeltaInHighUrgency;
- (double)accessTimeDeltaInLowUrgency;
- (double)accessTimeDeltaInMedUrgency;
- (double)accessTimeDeltaInVeryHighUrgency;
- (double)activeDownloadSizeRefreshInterval;
- (unsigned int)aliasDeletionBatchSize;
- (id)applyThrottleParams;
- (double)appsFetchPacerDelay;
- (id)blacklistedPackageExtensions;
- (id)blacklistedThumbnailExtensions;
- (BOOL)boolForKey:(id)arg1 byDefault:(BOOL)arg2;
- (BOOL)boolForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 byDefault:(BOOL)arg3;
- (id)configurationUpdateXPCActivity;
- (id)containerAliasRemovalThrottleParams;
- (id)containerResetThrottleParams;
- (id)containerScanThrottleParams;
- (unsigned int)copyShareIDsBatchSize;
- (double)dbBatchDelay;
- (int)dbBatchSize;
- (BOOL)dbProfiled;
- (BOOL)dbTraced;
- (double)diskSpaceCheckInterval;
- (unsigned long long)diskSpaceRequiredToReturnToGreedyState;
- (double)documentAccessHighPriorityInterval;
- (double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4;
- (unsigned int)downloadBatchCount;
- (unsigned int)downloadBatchRecordsCount;
- (id)downloadThrottleParams;
- (float)floatForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 min:(float)arg3 max:(float)arg4 byDefault:(float)arg5;
- (float)floatForKey:(id)arg1 min:(float)arg2 max:(float)arg3 byDefault:(float)arg4;
- (BOOL)forceBatchFailureWhenReceivingAssetTokenExpiration;
- (id)forcedSyncXPCActivity;
- (double)foregroundGracePeriod;
- (double)fseventsLatency;
- (double)fseventsResetBackoff;
- (double)graveyardAgeDeltaInLowUrgency;
- (double)graveyardAgeDeltaInMedUrgency;
- (double)inactiveIntervalForGlobalDownloads;
- (id)initAsGlobalContainerWithServerConfiguration:(id)arg1;
- (id)initWithServerConfiguration:(id)arg1 globalContainerUserDefault:(id)arg2 containerIdentfier:(id)arg3;
- (int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4;
- (double)intervalToWaitBeforeShowingAdditionalDescription;
- (double)lockedFileScanInterval;
- (int)logLevel;
- (unsigned int)logoutTimeout;
- (id)lostItemThrottleParams;
- (unsigned int)maxRecordCountInAppContainerModifyRecordsOperation;
- (unsigned int)maxRecordCountInFetchRecordsOperation;
- (unsigned int)maxRecordCountInModifyRecordsOperation;
- (unsigned int)maxRecordCountInQuerySharedRecordsOperation;
- (unsigned int)maxRelativePathDepth;
- (unsigned int)maxSyncPathDepth;
- (unsigned int)maxXattrBlobSize;
- (unsigned long long)maximumAccountSizeToBeAlwaysGreedy;
- (id)migrationThrottleParams;
- (long long)minAutomaticallyEvictableFilesize;
- (long long)minFileSizeForGraveyard;
- (long long)minFileSizeForThumbnailTransfer;
- (long long)minimalSizeToShowAdditionalDescription;
- (unsigned long long)minimumDiskSpaceRequiredToBeFunctional;
- (unsigned long long)minimumDiskSpaceRequiredToBeGreedy;
- (unsigned long long)minimumDiskSpaceRequiredToDownload;
- (unsigned long long)minimumDiskSpaceRequiredToDownloadUserInitiated;
- (id)nonAutoEvictableExtensions;
- (unsigned int)notifBatchSize;
- (unsigned int)notifGatherUpTo;
- (unsigned int)notifOverflowLimit;
- (id)objectForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 validateWithBlock:(id /* block */)arg3;
- (id)operationFailureThrottleParams;
- (double)packageExtensionPlistWriteInterval;
- (id)packageExtensions;
- (double)periodicSyncTimeInterval;
- (unsigned int)publishURLTimeout;
- (double)purgePacerInterval;
- (double)quotaFetchPacerDelay;
- (double)readerIOsCancelDelay;
- (double)readerLostItemBackoff;
- (int)readerMaxConcurrentIOs;
- (double)readerPackageProcessingDelay;
- (int)readerScanBatchSize;
- (id)readerThrottleParams;
- (id)serverConfigurationURL;
- (BOOL)sessionZombiesEnabled;
- (id)shareableExtensions;
- (unsigned long long)sharedDbSyncDownCoalesceNanoseconds;
- (BOOL)shouldContainerBeGreedy;
- (BOOL)shouldDisplayUploadNotification;
- (BOOL)shouldFetchAllChanges;
- (unsigned int)spotlightIndexerBatchSize;
- (id)spotlightIndexerFailureThrottleParams;
- (unsigned int)spotlightIndexerMaxHeirarchyDepth;
- (double)spotlightIndexerPacerInterval;
- (unsigned short)stageDirectoryUmask;
- (unsigned short)stageFileUmask;
- (id)stageGCXPCActivity;
- (unsigned short)stageInPackageDirectoryUmask;
- (unsigned short)stageInPackageFileUmask;
- (unsigned int)statementCacheMaxCountForClientTruth;
- (unsigned int)statementCacheMaxCountForServerTruth;
- (id)syncAppContainerThrottleParams;
- (id)syncDownThrottle;
- (id)syncThrottles;
- (float)syncUpDailyBudget;
- (float)syncUpDataCreateCost;
- (float)syncUpDataDeleteCost;
- (float)syncUpDataEditCost;
- (float)syncUpDocumentCreateCost;
- (float)syncUpDocumentDeleteCost;
- (float)syncUpDocumentEditCost;
- (float)syncUpHourlyBudget;
- (float)syncUpInitialItemCost;
- (float)syncUpMinimalBudget;
- (float)syncUpMinutelyBudget;
- (float)syncUpStructureCreateCost;
- (float)syncUpStructureDeleteCost;
- (float)syncUpStructureEditCost;
- (id)syncUpThrottle;
- (double)systemLowDiskLatency;
- (double)systemPowerLatency;
- (double)systemReachabilityLatency;
- (unsigned int)thumbnailTransferQueueWidth;
- (int)transferQueueMaxConcurrentOperations;
- (int)transferQueueMinConcurrentOperations;
- (double)transferQueueTransferBudget;
- (unsigned int)treeEnumeratorBatchSize;
- (unsigned int)unsignedIntForKey:(id)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3 byDefault:(unsigned int)arg4;
- (unsigned long long)unsignedLongLongForKey:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3 byDefault:(unsigned long long)arg4;
- (unsigned int)uploadBatchCount;
- (unsigned int)uploadBatchRecordsCount;
- (long long)uploadMaxFileSize;
- (long long)uploadMaxInPkgFileSize;
- (id)uploadThrottleParams;
- (int)writerApplyBatchSize;
- (double)writerIOsCancelDelay;
- (int)writerMaxConcurrentIOs;
- (id)xpcActivityDictionaryForKey:(id)arg1 byDefault:(id)arg2;

@end
