/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    NSMutableArray * _clientSuggestedRoutes;
    NSData * _directionsResponseId;
    GEORPUserSearchInput * _endWaypoint;
    struct { 
        unsigned int problematicLineIndex : 1; 
        unsigned int problematicStepIndex : 1; 
    }  _has;
    NSData * _overviewScreenshotImageData;
    unsigned int  _problematicLineIndex;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; } * _problematicRouteIndexs;
    unsigned int  _problematicRouteIndexsCount;
    unsigned int  _problematicRouteIndexsSpace;
    unsigned int  _problematicStepIndex;
    GEORPUserSearchInput * _startWaypoint;
}

@property (nonatomic, retain) NSMutableArray *clientSuggestedRoutes;
@property (nonatomic, retain) NSData *directionsResponseId;
@property (nonatomic, retain) GEORPUserSearchInput *endWaypoint;
@property (nonatomic, readonly) BOOL hasDirectionsResponseId;
@property (nonatomic, readonly) BOOL hasEndWaypoint;
@property (nonatomic, readonly) BOOL hasOverviewScreenshotImageData;
@property (nonatomic) BOOL hasProblematicLineIndex;
@property (nonatomic) BOOL hasProblematicStepIndex;
@property (nonatomic, readonly) BOOL hasStartWaypoint;
@property (nonatomic, retain) NSData *overviewScreenshotImageData;
@property (nonatomic) unsigned int problematicLineIndex;
@property (nonatomic, readonly) struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*problematicRouteIndexs;
@property (nonatomic, readonly) unsigned int problematicRouteIndexsCount;
@property (nonatomic) unsigned int problematicStepIndex;
@property (nonatomic, retain) GEORPUserSearchInput *startWaypoint;

- (void)addClientSuggestedRoute:(id)arg1;
- (void)addProblematicRouteIndex:(struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })arg1;
- (void)clearClientSuggestedRoutes;
- (void)clearProblematicRouteIndexs;
- (id)clientSuggestedRouteAtIndex:(unsigned int)arg1;
- (id)clientSuggestedRoutes;
- (unsigned int)clientSuggestedRoutesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseId;
- (id)endWaypoint;
- (BOOL)hasDirectionsResponseId;
- (BOOL)hasEndWaypoint;
- (BOOL)hasOverviewScreenshotImageData;
- (BOOL)hasProblematicLineIndex;
- (BOOL)hasProblematicStepIndex;
- (BOOL)hasStartWaypoint;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)overviewScreenshotImageData;
- (unsigned int)problematicLineIndex;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; })problematicRouteIndexAtIndex:(unsigned int)arg1;
- (struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)problematicRouteIndexs;
- (unsigned int)problematicRouteIndexsCount;
- (unsigned int)problematicStepIndex;
- (BOOL)readFrom:(id)arg1;
- (void)setClientSuggestedRoutes:(id)arg1;
- (void)setDirectionsResponseId:(id)arg1;
- (void)setEndWaypoint:(id)arg1;
- (void)setHasProblematicLineIndex:(BOOL)arg1;
- (void)setHasProblematicStepIndex:(BOOL)arg1;
- (void)setOverviewScreenshotImageData:(id)arg1;
- (void)setProblematicLineIndex:(unsigned int)arg1;
- (void)setProblematicRouteIndexs:(struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; struct { unsigned int x_5_1_1 : 1; unsigned int x_5_1_2 : 1; unsigned int x_5_1_3 : 1; unsigned int x_5_1_4 : 1; } x5; }*)arg1 count:(unsigned int)arg2;
- (void)setProblematicStepIndex:(unsigned int)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;
- (void)writeTo:(id)arg1;

@end
