/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {
    NSMutableDictionary * _cachedCanShareLocationWithHandleByHandle;
    NSSet * _cachedGetHandlesFollowingMyLocation;
    NSSet * _cachedGetHandlesSharingLocationsWithMe;
    NSMutableDictionary * _cachedLocationForHandleByHandle;
    NSMutableDictionary * _cachedOfferExpirationForHandleByHandle;
    NSXPCConnection * _connection;
    <FMFSessionDelegate> * _delegate;
    NSOperationQueue * _delegateQueue;
    NSMutableSet * _internalHandles;
    BOOL  _isModelInitialized;
}

@property (nonatomic, retain) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle;
@property (nonatomic, retain) NSSet *cachedGetHandlesFollowingMyLocation;
@property (nonatomic, retain) NSSet *cachedGetHandlesSharingLocationsWithMe;
@property (nonatomic, retain) NSMutableDictionary *cachedLocationForHandleByHandle;
@property (nonatomic, retain) NSMutableDictionary *cachedOfferExpirationForHandleByHandle;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMFSessionDelegate> *delegate;
@property (nonatomic, retain) NSOperationQueue *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *handles;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableSet *internalHandles;
@property (nonatomic) BOOL isModelInitialized;
@property (readonly) Class superclass;

+ (BOOL)FMFAllowed;
+ (BOOL)FMFRestricted;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (void)_configureLogging;
- (BOOL)_isNoMappingPacketReturnedError:(id)arg1;
- (void)_registerForFMFDLaunchedNotification;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (oneway void)abDidChange;
- (oneway void)abPreferencesDidChange;
- (void)addHandles:(id)arg1;
- (void)approveFriendshipRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)cachedCanShareLocationWithHandleByHandle;
- (id)cachedGetHandlesFollowingMyLocation;
- (id)cachedGetHandlesSharingLocationsWithMe;
- (id)cachedLocationForHandle:(id)arg1;
- (id)cachedLocationForHandleByHandle;
- (id)cachedOfferExpirationForHandleByHandle;
- (BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)canOfferToHandles:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (id)connection;
- (void)crashDaemon;
- (void)dealloc;
- (void)declineFriendshipRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)delegateQueue;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)dispatchOnDelegateQueue:(id /* block */)arg1;
- (void)dumpStateWithCompletion:(id /* block */)arg1;
- (void)exit5XXGracePeriod;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (void)favoritesForMaxCount:(id)arg1 completion:(id /* block */)arg2;
- (void)forceRefresh;
- (void)getAbRecordIdForHandle:(id)arg1 completion:(id /* block */)arg2;
- (id)getActiveLocationSharingDevice;
- (void)getActiveLocationSharingDevice:(id /* block */)arg1;
- (id)getAllDevices;
- (void)getAllDevices:(id /* block */)arg1;
- (void)getAllLocations:(id /* block */)arg1;
- (id)getFavoritesSharingLocationWithMe;
- (id)getHandlesFollowingMyLocation;
- (void)getHandlesFollowingMyLocation:(id /* block */)arg1;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(id /* block */)arg2;
- (id)getHandlesSharingLocationsWithMe;
- (void)getHandlesSharingLocationsWithMe:(id /* block */)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(id /* block */)arg2;
- (id)getHandlesWithPendingOffers;
- (void)getHandlesWithPendingOffers:(id /* block */)arg1;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)getPendingFriendshipRequestsWithCompletion:(id /* block */)arg1;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(id /* block */)arg3;
- (void)getPrettyNameForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(id /* block */)arg2;
- (id)handles;
- (BOOL)hasModelInitialized;
- (oneway void)iCloudAccountNameWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)internalConnection;
- (id)internalHandles;
- (void)invalidate;
- (void)invalidateWithError:(id)arg1;
- (BOOL)is5XXError:(id)arg1;
- (void)isIn5XXGracePeriodWithCompletion:(id /* block */)arg1;
- (BOOL)isModelInitialized;
- (BOOL)isMyLocationEnabled;
- (void)isMyLocationEnabled:(id /* block */)arg1;
- (void)locatingInProgressChanged:(id)arg1;
- (void)locationForHandle:(id)arg1 completion:(id /* block */)arg2;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (double)maxLocatingInterval;
- (oneway void)modelDidLoad;
- (void)nearbyLocationsWithCompletion:(id /* block */)arg1;
- (oneway void)networkReachabilityUpdated:(BOOL)arg1;
- (void)receivedMappingPacket:(id)arg1 completion:(id /* block */)arg2;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(int)arg3 completion:(id /* block */)arg4;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(int)arg3 completion:(id /* block */)arg4;
- (void)reloadDataIfNotLoaded;
- (void)removeDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)removeHandles:(id)arg1;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id /* block */)arg5;
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (id)serverProxy;
- (void)sessionWasCreatedRefresh;
- (void)setActiveDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)setCachedCanShareLocationWithHandleByHandle:(id)arg1;
- (void)setCachedGetHandlesFollowingMyLocation:(id)arg1;
- (void)setCachedGetHandlesSharingLocationsWithMe:(id)arg1;
- (void)setCachedLocationForHandleByHandle:(id)arg1;
- (void)setCachedOfferExpirationForHandleByHandle:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setExpiredInitTimestamp;
- (void)setHandles:(id)arg1;
- (void)setHideMyLocationEnabled:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setInternalHandles:(id)arg1;
- (void)setIsModelInitialized:(BOOL)arg1;
- (oneway void)setLocations:(id)arg1;
- (BOOL)shouldHandleErrorInFWK:(id)arg1;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id /* block */)arg4;
- (id)verifyRestrictionsAndShowDialogIfRequired;

@end
