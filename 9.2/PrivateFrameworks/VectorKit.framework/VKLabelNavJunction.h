/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelNavJunction : NSObject <VKLabelNavFeature> {
    BOOL  _areLabelsDisabled;
    unsigned int  _depthFromRoute;
    float  _distanceFromPreviousShieldLabel;
    BOOL  _foundRoads;
    struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; } * _geoJunction;
    BOOL  _hasSharedRouteDirection;
    VKLabelNavRoad * _incomingRoad;
    BOOL  _isOnDualCarriageway;
    BOOL  _isOverpass;
    BOOL  _isRouteOverpass;
    BOOL  _isRouteRefineJunction;
    VKLabelNavRoadLabel * _junctionSign;
    struct { struct { id x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned long long x_1_1_7; BOOL x_1_1_8; unsigned long long x_1_1_9; float x_1_1_10; unsigned long long x_1_1_11; id x_1_1_12; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; } x3; struct { /* ? */ } *x4; float x5; unsigned int x6; unsigned char x7; BOOL x8; BOOL x9; } * _labelFeature;
    int  _largestRoadClass;
    NSString * _name;
    VKLabelNavRoad * _outgoingRoad;
    VKLabelNavJunction * _overpassJunction;
    int  _preferredLabelPlacement;
    NSMutableArray * _roads;
    struct PolylineCoordinate { 
        unsigned int index; 
        float offset; 
    }  _routeOffset;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _sharedRouteDirection;
    double  _sortValue;
    VKLabelTile * _tile;
    struct Matrix<float, 2, 1> { 
        float _e[2]; 
    }  _tileCoordinate;
    struct VKPoint { 
        double x; 
        double y; 
        double z; 
    }  _worldCoordinate;
    double  _worldUnitsPerMeter;
}

@property (nonatomic) unsigned int depthFromRoute;
@property (nonatomic) float distanceFromPreviousShieldLabel;
@property (nonatomic, readonly) const struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*geoJunction;
@property (nonatomic, readonly) BOOL hasSharedRouteDirection;
@property (nonatomic, readonly) VKLabelNavRoad *incomingRoad;
@property (nonatomic, readonly) int intraRoadPriority;
@property (nonatomic, readonly) BOOL isAwayFromRoute;
@property (nonatomic, readonly) BOOL isGuidanceStepStart;
@property (nonatomic, readonly) BOOL isInGuidance;
@property (nonatomic, readonly) BOOL isIntersection;
@property (nonatomic, readonly) BOOL isIntraRamp;
@property (nonatomic, readonly) BOOL isMultiRoadIntersection;
@property (nonatomic, readonly) BOOL isOffRouteGraph;
@property (nonatomic) BOOL isOnDualCarriageway;
@property (nonatomic, readonly) BOOL isOnRoute;
@property (nonatomic, readonly) BOOL isOverpass;
@property (nonatomic, readonly) BOOL isRamp;
@property (nonatomic, readonly) BOOL isRoadTerminus;
@property (nonatomic) BOOL isRouteOverpass;
@property (nonatomic) BOOL isRouteRefineJunction;
@property (nonatomic, readonly) BOOL isStartOfRoadName;
@property (nonatomic, readonly) BOOL isTileEdgeJunction;
@property (nonatomic, readonly) VKLabelNavRoadLabel *junctionSign;
@property (nonatomic, readonly) int largestRoadClass;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) VKLabelNavRoad *outgoingRoad;
@property (nonatomic) VKLabelNavJunction *overpassJunction;
@property (nonatomic) int preferredLabelPlacement;
@property (nonatomic, readonly) int requiredLabelPlacement;
@property (nonatomic, readonly) NSArray *roads;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeOffset;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  sharedRouteDirection; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) NSString *shieldDisplayGroup;
@property (nonatomic, readonly) VKLabelTile *tile;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  tileCoordinate; /* unknown property attribute:  1>=[2f]} */
@property (nonatomic, readonly) double worldUnitsPerMeter;

- (id).cxx_construct;
- (struct VKPoint { double x1; double x2; double x3; })_anchorCoordinateForSignOrientation:(int)arg1;
- (int)_signOrientationWithDrivingSide:(BOOL)arg1;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge { struct PolylineCoordinate { unsigned int x_1_1_1; float x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; struct { /* ? */ } *x3; }*)arg1 atA:(BOOL)arg2;
- (void)createLabelWithNavContext:(struct NavContext { int (**x1)(); struct LabelManager {} *x2; }*)arg1 isDrivingSideRight:(BOOL)arg2;
- (void)dealloc;
- (unsigned int)depthFromRoute;
- (id)description;
- (float)distanceFromPreviousShieldLabel;
- (void)evaluateCrossStreets;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;
- (void)findRoads;
- (const struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)geoJunction;
- (BOOL)hasSharedRouteDirection;
- (id)incomingRoad;
- (id)initWithGEOJunction:(struct { unsigned int x1; unsigned int x2; struct { /* ? */ } *x3; }*)arg1 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 tile:(id)arg3;
- (id)initWithRoadEdge:(const struct { struct { /* ? */ } *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct { /* ? */ } *x6; struct { /* ? */ } *x7; }*)arg1 atA:(BOOL)arg2 routeOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg3 tile:(id)arg4;
- (int)intraRoadPriority;
- (BOOL)isAwayFromRoute;
- (BOOL)isGuidanceStepStart;
- (BOOL)isInGuidance;
- (BOOL)isIntersection;
- (BOOL)isIntraRamp;
- (BOOL)isMultiRoadIntersection;
- (BOOL)isOffRouteGraph;
- (BOOL)isOnDualCarriageway;
- (BOOL)isOnRoute;
- (BOOL)isOverpass;
- (BOOL)isRamp;
- (BOOL)isRoadTerminus;
- (BOOL)isRouteOverpass;
- (BOOL)isRouteRefineJunction;
- (BOOL)isStartOfRoadName;
- (BOOL)isTileEdgeJunction;
- (id)junctionSign;
- (int)largestRoadClass;
- (BOOL)matchesLocationForJunction:(id)arg1;
- (id)name;
- (id)outgoingRoad;
- (id)overpassJunction;
- (int)preferredLabelPlacement;
- (int)requiredLabelPlacement;
- (id)roads;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeOffset;
- (void)setDepthFromRoute:(unsigned int)arg1;
- (void)setDistanceFromPreviousShieldLabel:(float)arg1;
- (void)setIsOnDualCarriageway:(BOOL)arg1;
- (void)setIsRouteOverpass:(BOOL)arg1;
- (void)setIsRouteRefineJunction:(BOOL)arg1;
- (void)setOverpassJunction:(id)arg1;
- (void)setPreferredLabelPlacement:(int)arg1;
- (void)setRouteOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setSharedRouteDirection:(struct Matrix<float, 2, 1> { float x1[2]; })arg1;
- (struct Matrix<float, 2, 1> { float x1[2]; })sharedRouteDirection;
- (id)shieldDisplayGroup;
- (id)tile;
- (struct Matrix<float, 2, 1> { float x1[2]; })tileCoordinate;
- (double)worldUnitsPerMeter;

@end
