/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentServerLocalProxy : NSObject <GEOExperimentServerProxy, GEOResourceManifestTileGroupObserver> {
    GEOABExperimentRequest * _currentRequest;
    NSLock * _currentRequestLock;
    <GEOExperimentServerProxyDelegate> * _delegate;
    GEOABExperimentResponse * _experimentsInfo;
    NSLock * _experimentsInfoLock;
    NSObject<OS_dispatch_source> * _updateTimer;
    NSLock * _updateTimerLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOExperimentServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOABExperimentResponse *experimentsInfo;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(int)arg2 dispatcherRequestType:(int)arg3;
- (void)_invalidateTileCache:(BOOL)arg1 placesCache:(BOOL)arg2;
- (void)_loadExperimentsConfiguration:(id /* block */)arg1;
- (BOOL)_removeOldExperimentsInfoIfNecessary;
- (void)_scheduleUpdateTimer:(double)arg1;
- (double)_timeToNextUpdate;
- (void)_updateIfNecessary;
- (void)dealloc;
- (id)delegate;
- (id)experimentsInfo;
- (void)forceUpdate;
- (id)initWithDelegate:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
