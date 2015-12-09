/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibrary : NSObject <NSSecureCoding> {
    NSMutableArray * _additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> * _additionalLibraryFilterPredicatesAccessQueue;
    int  _cloudFilteringType;
    QueryCriteriaResultsCache * _collectionsForCriteriaCache;
    QueryCriteriaResultsCache * _collectionsResultSetsForCriteriaCache;
    NSHashTable * _connectionAssertions;
    float  _connectionProgress;
    CADisplayLink * _connectionProgressDisplayLink;
    double  _connectionProgressStartTime;
    NSMutableDictionary * _countOfCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache * _countOfCollectionsForCriteriaCache;
    NSMutableDictionary * _countOfItemsDidLoadForCriteria;
    QueryCriteriaResultsCache * _countOfItemsForCriteriaCache;
    BOOL  _determinedHasAudibleAudioBooks;
    unsigned int  _determinedHasAudiobooks;
    BOOL  _determinedHasCompilations;
    unsigned int  _determinedHasComposers;
    unsigned int  _determinedHasGeniusMixes;
    BOOL  _determinedHasHomeVideos;
    BOOL  _determinedHasITunesU;
    unsigned int  _determinedHasMedia;
    BOOL  _determinedHasMovieRentals;
    BOOL  _determinedHasMovies;
    BOOL  _determinedHasMusicVideos;
    unsigned int  _determinedHasPlaylists;
    unsigned int  _determinedHasPodcasts;
    unsigned int  _determinedHasSongs;
    BOOL  _determinedHasTVShows;
    unsigned int  _determinedHasUbiquitousBookmarkableItems;
    BOOL  _determinedHasVideoITunesU;
    BOOL  _determinedHasVideoPodcasts;
    BOOL  _determinedHasVideos;
    BOOL  _disconnectAfterReleasingAssertions;
    NSObject<OS_dispatch_queue> * _entityCacheQueue;
    BOOL  _filteringDisabled;
    NSObject<OS_dispatch_queue> * _fixedQueue;
    BOOL  _hasAudibleAudioBooks;
    unsigned int  _hasAudiobooks;
    NSMutableDictionary * _hasCollectionsDidLoadForCriteria;
    QueryCriteriaResultsCache * _hasCollectionsForCriteriaCache;
    BOOL  _hasCompilations;
    unsigned int  _hasComposers;
    unsigned int  _hasGeniusMixes;
    BOOL  _hasHomeVideos;
    BOOL  _hasITunesU;
    NSMutableDictionary * _hasItemsDidLoadForCriteria;
    QueryCriteriaResultsCache * _hasItemsForCriteriaCache;
    unsigned int  _hasMedia;
    BOOL  _hasMovieRentals;
    BOOL  _hasMovies;
    BOOL  _hasMusicVideos;
    unsigned int  _hasPlaylists;
    unsigned int  _hasPodcasts;
    unsigned int  _hasSongs;
    BOOL  _hasTVShows;
    unsigned int  _hasUbiquitousBookmarkableContent;
    BOOL  _hasVideoITunesU;
    BOOL  _hasVideoPodcasts;
    BOOL  _hasVideos;
    QueryCriteriaResultsCache * _itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache * _itemsForCriteriaCache;
    int  _libraryChangeObservers;
    <MPMediaLibraryDataProviderPrivate> * _libraryDataProvider;
    NSArray * _notificationObservers;
    unsigned char  _originalCellNetworkFlags;
    unsigned char  _originalWiFiNetworkFlags;
    int  _removalReason;
}

@property (nonatomic, readonly) NSString *_syncValidity;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSURL *protectedContentSupportStorageURL;
@property (nonatomic) int removalReason;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)_mediaLibraries;
+ (void)addLibraryDataProvider:(id)arg1;
+ (void)beginDiscoveringMediaLibraries;
+ (BOOL)companionDeviceActiveStoreAccountIsSubscriber;
+ (id)defaultMediaLibrary;
+ (id)deviceMediaLibrary;
+ (void)endDiscoveringMediaLibraries;
+ (void)initialize;
+ (BOOL)isLibraryServerDisabled;
+ (id)libraryDataProviders;
+ (id)mediaLibraries;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(int)arg2;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (void)setLibraryServerDisabled:(BOOL)arg1;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;

- (void).cxx_destruct;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 mediaType:(unsigned int)arg3 queryHasEntitiesBlock:(id /* block */)arg4;
- (BOOL)_checkHasContent:(BOOL*)arg1 determined:(BOOL*)arg2 queryHasEntitiesBlock:(id /* block */)arg3;
- (void)_clearCachedContentDataAndResultSets:(BOOL)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(BOOL)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (void)_connectionProgressDisplayLinkCallback:(id)arg1;
- (unsigned int)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned int)_countOfItemsForQueryCriteria:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(id /* block */)arg5 loadValueFromDataProviderBlock:(id /* block */)arg6;
- (BOOL)_hasCollectionsForQueryCriteria:(id)arg1;
- (BOOL)_hasItemsForQueryCriteria:(id)arg1;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemsForQueryCriteria:(id)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(id /* block */)arg1;
- (void)_setupNotifications;
- (void)_stopConnectionProgressDisplayLink;
- (id)_syncValidity;
- (void)_tearDownNotifications;
- (void)addAdvertisementItemWithDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)addLibraryFilterPredicate:(id)arg1;
- (void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(id /* block */)arg2;
- (void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(id /* block */)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(BOOL)arg2;
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)addTracksToMyLibrary:(id)arg1;
- (id)additionalLibraryFilterPredicates;
- (id)artworkDataSource;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)clearLocationPropertiesOfItem:(id)arg1;
- (int)cloudFilteringType;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long)arg2 groupingType:(int)arg3 existentPID:(unsigned long long*)arg4;
- (BOOL)collectionExistsWithName:(id)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2;
- (BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2 verifyExistence:(BOOL)arg3;
- (id)completeMyCollectionArtworkDataSource;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)connectWithCompletionHandler:(id /* block */)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (float)connectionProgress;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (id)decodeItemWithCoder:(id)arg1;
- (BOOL)deleteItems:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)downloadAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingLibraryChangeNotifications;
- (id)entityCache;
- (id)entityWithLibraryURL:(id)arg1;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (id)entityWithSpotlightIdentifier:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(BOOL)arg3 usingBlock:(id /* block */)arg4;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)errorResolverForItem:(id)arg1;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)hasAlbums;
- (BOOL)hasArtists;
- (BOOL)hasAudibleAudioBooks;
- (BOOL)hasAudioITunesUContent;
- (BOOL)hasAudiobooks;
- (BOOL)hasCompilations;
- (BOOL)hasComposers;
- (BOOL)hasGeniusMixes;
- (BOOL)hasGenres;
- (BOOL)hasHomeVideos;
- (BOOL)hasITunesUContent;
- (BOOL)hasMedia;
- (BOOL)hasMediaOfType:(unsigned int)arg1;
- (BOOL)hasMovieRentals;
- (BOOL)hasMovies;
- (BOOL)hasMusicVideos;
- (BOOL)hasPlaylists;
- (BOOL)hasPodcasts;
- (BOOL)hasSongs;
- (BOOL)hasTVShows;
- (BOOL)hasUbiquitousBookmarkableItems;
- (BOOL)hasVideoITunesUContent;
- (BOOL)hasVideoPodcasts;
- (BOOL)hasVideos;
- (unsigned int)hash;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(int)arg2 artworkToken:(id)arg3 artworkType:(int)arg4 sourceType:(int)arg5;
- (BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(int)arg3 sourceType:(int)arg4 mediaType:(unsigned int)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGeniusEnabled;
- (BOOL)isValidAssetURL:(id)arg1;
- (BOOL)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(BOOL)arg2;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)lastModifiedDate;
- (id)libraryDataProvider;
- (BOOL)libraryHasBeenModifiedWithToken:(id)arg1;
- (id)localizedSectionHeaderForSectionIndex:(unsigned int)arg1;
- (id)localizedSectionIndexTitles;
- (id)modificationToken;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)name;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)pathForAssetURL:(id)arg1;
- (void)performReadTransactionWithBlock:(id /* block */)arg1;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)performTransactionWithBlock:(id /* block */)arg1;
- (id)playbackHistoryPlaylist;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(int)arg3;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (id)protectedContentSupportStorageURL;
- (int)removalReason;
- (BOOL)removeItems:(id)arg1;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (BOOL)removePlaylist:(id)arg1;
- (BOOL)requiresAuthentication;
- (void)setCloudFilteringType:(int)arg1;
- (void)setLibraryFilterPredicates;
- (void)setRemovalReason:(int)arg1;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (int)status;
- (unsigned long long)syncGenerationID;
- (unsigned long long)syncPlaylistId;
- (id)syncValidity;
- (id)uniqueIdentifier;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)writable;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_entityWithContentItemIdentifierCollection:(id)arg1 options:(unsigned int)arg2;
- (id)_MPU_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(unsigned int)arg3;

@end