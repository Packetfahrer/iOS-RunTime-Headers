/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitRoutePreloaderData : NSObject {
    _GEOTransitPreloadCamera * _camera;
    unsigned int  _currentBatchGeneration;
    BOOL  _isSufficientlyLoaded;
    NSMutableSet * _placecardsLoadingOrLoaded;
    NSMutableSet * _placecardsMissed;
    NSMutableSet * _placecardsReceived;
    NSMutableArray * _preloadBatches;
    GEOTileKeyList * _tilesLoadingOrLoaded;
    GEOTileKeyList * _tilesMissed;
    GEOTileKeyList * _tilesReceived;
}

@property (nonatomic, retain) _GEOTransitPreloadCamera *camera;
@property (nonatomic) unsigned int currentBatchGeneration;
@property (nonatomic) BOOL isSufficientlyLoaded;
@property (nonatomic, retain) NSMutableSet *placecardsLoadingOrLoaded;
@property (nonatomic, retain) NSMutableSet *placecardsMissed;
@property (nonatomic, retain) NSMutableSet *placecardsReceived;
@property (nonatomic, retain) NSMutableArray *preloadBatches;
@property (nonatomic, retain) GEOTileKeyList *tilesLoadingOrLoaded;
@property (nonatomic, retain) GEOTileKeyList *tilesMissed;
@property (nonatomic, retain) GEOTileKeyList *tilesReceived;

- (id)camera;
- (unsigned int)currentBatchGeneration;
- (void)dealloc;
- (id)init;
- (BOOL)isSufficientlyLoaded;
- (id)placecardsLoadingOrLoaded;
- (id)placecardsMissed;
- (id)placecardsReceived;
- (id)preloadBatches;
- (void)setCamera:(id)arg1;
- (void)setCurrentBatchGeneration:(unsigned int)arg1;
- (void)setIsSufficientlyLoaded:(BOOL)arg1;
- (void)setPlacecardsLoadingOrLoaded:(id)arg1;
- (void)setPlacecardsMissed:(id)arg1;
- (void)setPlacecardsReceived:(id)arg1;
- (void)setPreloadBatches:(id)arg1;
- (void)setTilesLoadingOrLoaded:(id)arg1;
- (void)setTilesMissed:(id)arg1;
- (void)setTilesReceived:(id)arg1;
- (id)tilesLoadingOrLoaded;
- (id)tilesMissed;
- (id)tilesReceived;

@end
