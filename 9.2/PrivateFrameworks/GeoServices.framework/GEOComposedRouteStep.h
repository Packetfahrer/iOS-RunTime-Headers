/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteStep : NSObject {
    GEOComposedRoute * _composedRoute;
    GEOStep * _geoStep;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _maneuverPointRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _pointRange;
    int  _routeLegType;
    unsigned int  _stepIndex;
}

@property (nonatomic) GEOComposedRoute *composedRoute;
@property (nonatomic, readonly) unsigned int distance;
@property (nonatomic, readonly) unsigned int duration;
@property (nonatomic, readonly) struct { double x1; double x2; } endGeoCoordinate;
@property (nonatomic, readonly) unsigned int endPointIndex;
@property (nonatomic, readonly) GEOPBTransitStop *endingStop;
@property (nonatomic, readonly) GEOStep *geoStep;
@property (nonatomic, readonly) BOOL hasDuration;
@property (nonatomic, readonly) GEOInstructionSet *instructions;
@property (nonatomic, readonly) BOOL isArrivalStep;
@property (nonatomic, readonly) BOOL isUncertainArrival;
@property (nonatomic, readonly) unsigned int maneuverEndPointIndex;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } maneuverPointRange;
@property (nonatomic, readonly) unsigned int maneuverStartPointIndex;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *nextAlightingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *nextBoardingStep;
@property (getter=getNextStep, nonatomic, readonly) GEOComposedRouteStep *nextStep;
@property (nonatomic, readonly) GEOPBTransitStop *nextStop;
@property (nonatomic, readonly) unsigned int pointCount;
@property (nonatomic, readonly) struct _NSRange { unsigned int x1; unsigned int x2; } pointRange;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *previousAlightingStep;
@property (nonatomic, readonly) GEOComposedTransitTripRouteStep *previousBoardingStep;
@property (getter=getPreviousStep, nonatomic, readonly) GEOComposedRouteStep *previousStep;
@property (nonatomic, readonly) GEOPBTransitStop *previousStop;
@property (nonatomic, readonly) NSArray *routeDetailsPrimaryArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *routeDetailsSecondaryArtwork;
@property (nonatomic, readonly) int routeLegType;
@property (nonatomic, readonly) BOOL shouldCreateAlightExitGroup;
@property (nonatomic, readonly) BOOL shouldCreateArrivalGroup;
@property (nonatomic, readonly) BOOL shouldCreateEnterBoardGroup;
@property (nonatomic, readonly) BOOL shouldCreateFerryProgressionGroup;
@property (nonatomic, readonly) BOOL shouldCreateTransferGroup;
@property (nonatomic, readonly) BOOL shouldCreateTripProgressionGroup;
@property (nonatomic, readonly) struct { double x1; double x2; } startGeoCoordinate;
@property (nonatomic, readonly) unsigned int startPointIndex;
@property (nonatomic, readonly) unsigned int startTime;
@property (nonatomic, readonly) GEOPBTransitStop *startingStop;
@property (nonatomic, readonly) unsigned int stepIndex;
@property (nonatomic, readonly) NSArray *steppingArtwork;
@property (nonatomic, readonly) GEOTransitStep *transitStep;
@property (nonatomic, readonly) int transportType;

- (id)_artworkFromDecoderData:(id)arg1 artworkIndices:(unsigned int*)arg2 artworkCount:(unsigned int)arg3;
- (BOOL)_belongsToTransferGroup;
- (id)composedRoute;
- (void)dealloc;
- (id)description;
- (unsigned int)distance;
- (unsigned int)duration;
- (struct { double x1; double x2; })endGeoCoordinate;
- (unsigned int)endPointIndex;
- (id)endingStop;
- (id)firstNameOrBranch;
- (id)geoStep;
- (id)getNextStep;
- (id)getPreviousStep;
- (BOOL)hasDuration;
- (id)initWithComposedRoute:(id)arg1 GEOStep:(id)arg2 routeLegType:(int)arg3 stepIndex:(unsigned int)arg4 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 maneuverPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6;
- (id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 stepIndex:(unsigned int)arg3 pointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)instructions;
- (BOOL)isArrivalStep;
- (BOOL)isUncertainArrival;
- (int)maneuver;
- (unsigned int)maneuverEndPointIndex;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maneuverPointRange;
- (unsigned int)maneuverStartPointIndex;
- (id)nextAlightingStep;
- (id)nextBoardingStep;
- (id)nextStop;
- (unsigned int)pointCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pointRange;
- (id)previousAlightingStep;
- (id)previousBoardingStep;
- (id)previousStop;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (int)routeLegType;
- (void)setComposedRoute:(id)arg1;
- (BOOL)shouldCreateAlightExitGroup;
- (BOOL)shouldCreateArrivalGroup;
- (BOOL)shouldCreateEnterBoardGroup;
- (BOOL)shouldCreateFerryProgressionGroup;
- (BOOL)shouldCreateTransferGroup;
- (BOOL)shouldCreateTripProgressionGroup;
- (BOOL)shouldPreloadWithHighPriority;
- (struct { double x1; double x2; })startGeoCoordinate;
- (unsigned int)startPointIndex;
- (unsigned int)startTime;
- (id)startingStop;
- (unsigned int)stepIndex;
- (id)steppingArtwork;
- (id)transitStep;
- (int)transportType;

@end
