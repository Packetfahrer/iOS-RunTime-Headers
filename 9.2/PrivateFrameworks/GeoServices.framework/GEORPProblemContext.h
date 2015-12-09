/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemContext : PBCodable <NSCopying> {
    NSMutableArray * _auxiliaryControls;
    double  _creationDate;
    int  _deviceGmtOffset;
    NSMutableArray * _directionsRequests;
    NSMutableArray * _directionsResponses;
    struct { 
        unsigned int sessionId : 1; 
        unsigned int creationDate : 1; 
        unsigned int originatingAuxiliaryControlIndex : 1; 
        unsigned int deviceGmtOffset : 1; 
        unsigned int pinType : 1; 
    }  _has;
    NSString * _lastSearchString;
    NSString * _lastUserTypedSearchString;
    GEORPMapLocation * _mapLocation;
    GEOPlace * _originalPlace;
    unsigned long long  _originatingAuxiliaryControlIndex;
    int  _pinType;
    GEOPDPlace * _place;
    GEORPPlaceInfo * _placeInfo;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
    NSString * _tileStateLog;
    GEORPTransitLineTileInfo * _transitLineTileInfo;
    NSMutableArray * _visibleTileSets;
}

@property (nonatomic, retain) NSMutableArray *auxiliaryControls;
@property (nonatomic) double creationDate;
@property (nonatomic) int deviceGmtOffset;
@property (nonatomic, retain) NSMutableArray *directionsRequests;
@property (nonatomic, retain) NSMutableArray *directionsResponses;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) BOOL hasDeviceGmtOffset;
@property (nonatomic, readonly) BOOL hasLastSearchString;
@property (nonatomic, readonly) BOOL hasLastUserTypedSearchString;
@property (nonatomic, readonly) BOOL hasMapLocation;
@property (nonatomic, readonly) BOOL hasOriginalPlace;
@property (nonatomic) BOOL hasOriginatingAuxiliaryControlIndex;
@property (nonatomic) BOOL hasPinType;
@property (nonatomic, readonly) BOOL hasPlace;
@property (nonatomic, readonly) BOOL hasPlaceInfo;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic, readonly) BOOL hasTileStateLog;
@property (nonatomic, readonly) BOOL hasTransitLineTileInfo;
@property (nonatomic, retain) NSString *lastSearchString;
@property (nonatomic, retain) NSString *lastUserTypedSearchString;
@property (nonatomic, retain) GEORPMapLocation *mapLocation;
@property (nonatomic, retain) GEOPlace *originalPlace;
@property (nonatomic) unsigned long long originatingAuxiliaryControlIndex;
@property (nonatomic) int pinType;
@property (nonatomic, retain) GEOPDPlace *place;
@property (nonatomic, retain) GEORPPlaceInfo *placeInfo;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic, retain) NSString *tileStateLog;
@property (nonatomic, retain) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (nonatomic, retain) NSMutableArray *visibleTileSets;

- (void)addAuxiliaryControl:(id)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (void)addVisibleTileSet:(id)arg1;
- (id)auxiliaryControlAtIndex:(unsigned int)arg1;
- (id)auxiliaryControls;
- (unsigned int)auxiliaryControlsCount;
- (void)clearAuxiliaryControls;
- (void)clearDirectionsRequests;
- (void)clearDirectionsResponses;
- (void)clearVisibleTileSets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (void)dealloc;
- (id)description;
- (int)deviceGmtOffset;
- (id)dictionaryRepresentation;
- (id)directionsRequestAtIndex:(unsigned int)arg1;
- (id)directionsRequests;
- (unsigned int)directionsRequestsCount;
- (id)directionsResponseAtIndex:(unsigned int)arg1;
- (id)directionsResponses;
- (unsigned int)directionsResponsesCount;
- (BOOL)hasCreationDate;
- (BOOL)hasDeviceGmtOffset;
- (BOOL)hasLastSearchString;
- (BOOL)hasLastUserTypedSearchString;
- (BOOL)hasMapLocation;
- (BOOL)hasOriginalPlace;
- (BOOL)hasOriginatingAuxiliaryControlIndex;
- (BOOL)hasPinType;
- (BOOL)hasPlace;
- (BOOL)hasPlaceInfo;
- (BOOL)hasSessionId;
- (BOOL)hasTileStateLog;
- (BOOL)hasTransitLineTileInfo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lastSearchString;
- (id)lastUserTypedSearchString;
- (id)mapLocation;
- (void)mergeFrom:(id)arg1;
- (id)originalPlace;
- (unsigned long long)originatingAuxiliaryControlIndex;
- (int)pinType;
- (id)place;
- (id)placeInfo;
- (BOOL)readFrom:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setAuxiliaryControls:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setDeviceGmtOffset:(int)arg1;
- (void)setDirectionsRequests:(id)arg1;
- (void)setDirectionsResponses:(id)arg1;
- (void)setHasCreationDate:(BOOL)arg1;
- (void)setHasDeviceGmtOffset:(BOOL)arg1;
- (void)setHasOriginatingAuxiliaryControlIndex:(BOOL)arg1;
- (void)setHasPinType:(BOOL)arg1;
- (void)setHasSessionId:(BOOL)arg1;
- (void)setLastSearchString:(id)arg1;
- (void)setLastUserTypedSearchString:(id)arg1;
- (void)setMapLocation:(id)arg1;
- (void)setOriginalPlace:(id)arg1;
- (void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1;
- (void)setPinType:(int)arg1;
- (void)setPlace:(id)arg1;
- (void)setPlaceInfo:(id)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTileStateLog:(id)arg1;
- (void)setTransitLineTileInfo:(id)arg1;
- (void)setVisibleTileSets:(id)arg1;
- (id)tileStateLog;
- (id)transitLineTileInfo;
- (id)visibleTileSetAtIndex:(unsigned int)arg1;
- (id)visibleTileSets;
- (unsigned int)visibleTileSetsCount;
- (void)writeTo:(id)arg1;

@end
