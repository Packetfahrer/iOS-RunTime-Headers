/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapModel : VKModelObject <GEOExperimentConfigurationObserver, GEOResourceManifestTileGroupObserver, VKLabelModelDelegate, VKOverlayContainerDelegate, VKPolylineGroupOverlayObserver, VKPolylineOverlayRouteRibbonObserver, VKTileProviderClient> {
    BOOL  _activeMapLayers;
    struct shared_ptr<gss::StyleManager> { 
        struct StyleManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _activeStyleManager;
    GEOResourceManifestConfiguration * _additionalManifestConfiguration;
    int  _annotationMarkerStyle;
    VKAnnotationModel * _annotationModel;
    NSMutableSet * _blockingStylesheetObservers;
    VKBuildingFootprintMapModel * _buildingFootprintModel;
    BOOL  _buildingsAreVisible;
    struct Matrix<float, 4, 1> { 
        float _e[4]; 
    }  _clearColor;
    struct ClearItem { 
        unsigned char colorMask; 
        struct Matrix<float, 4, 1> { 
            float _e[4]; 
        } color; 
        bool clearDepthBuffer; 
        float depth; 
        unsigned char clearStencilBuffer; 
        int stencil; 
        unsigned char scissorRegion; 
        struct Box<unsigned int, 2> { 
            struct Matrix<unsigned int, 2, 1> { 
                unsigned int _e[2]; 
            } _minimum; 
            struct Matrix<unsigned int, 2, 1> { 
                unsigned int _e[2]; 
            } _maximum; 
        } scissorRect; 
    }  _clearItem;
    float  _contentScale;
    struct shared_ptr<md::DataOverrideManager> { 
        struct DataOverrideManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _dataOverrideManager;
    BOOL  _debugDynamicMapModesEnabled;
    VKDebugModel * _debugModel;
    struct shared_ptr<gss::StyleManager> { 
        struct StyleManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _defaultStyleManager;
    <VKMapModelDelegate> * _delegate;
    int  _desiredMapMode;
    BOOL  _disableBuildingFootprints;
    BOOL  _disableGrid;
    BOOL  _disableLabels;
    BOOL  _disablePolygons;
    BOOL  _disableRasters;
    BOOL  _disableRoadClass;
    BOOL  _disableRoads;
    BOOL  _disableTransitLines;
    NSMutableArray * _drawOrder;
    BOOL  _dynamicMapModesEnabled;
    NSMutableArray * _externalAnchors;
    BOOL  _forceMapDrawStyleUpdate;
    double  _forcedMaxZoomLevel;
    BOOL  _fullyDrawn;
    VKGridModel * _gridModel;
    BOOL  _hasFailedTile;
    VKHybridRasterMapModel * _hybridRasterModel;
    VKRoadMapModel * _hybridRoadModel;
    struct shared_ptr<gss::StyleManager> { 
        struct StyleManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _hybridStyleManager;
    BOOL  _isTransitioningToTransit;
    VKLabelModel * _labelModel;
    NSMapTable * _layerToSourceMaps;
    BOOL  _limitingNavCameraHeight;
    int  _loadingCount;
    NSLocale * _locale;
    double  _lodBias;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOFeatureStyleAttributes * _mapFeatureStyleAttributes;
    NSMutableArray * _mapLayerSubmodels;
    int  _mapMode;
    <VKMapModeObserver> * _mapModeObserver;
    unsigned int  _mapPurpose;
    NSMutableArray * _mapTileSubmodels;
    int  _mapType;
    int  _metroArea;
    VKTimedAnimation * _modeTransitionAnimation;
    float  _navigationPuckSize;
    VKOverlayContainerModel * _overlayContainerModel;
    VKPolygonMapModel * _polygonModel;
    NSMutableSet * _polylineOverlays;
    VKRasterMapModel * _rasterModel;
    VKRasterOverlayMapModel * _rasterOverlayModel;
    VKTileProvider * _rasterOverlayProvider;
    VKRasterOverlayTileSource * _rasterOverlayTileSource;
    VKRasterMapModel * _rasterViewer;
    VKMapRasterizer * _rasterizer;
    VKRealisticMapModel * _realisticModel;
    struct shared_ptr<gss::StyleManager> { 
        struct StyleManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _realisticStyleManager;
    VKRiverMapModel * _riverLineModel;
    VKRoadMapModel * _roadModel;
    VKRoadTrafficMapModel * _roadTrafficModel;
    <GEORoutePreloadSession> * _routePreloadSession;
    struct shared_ptr<gss::StyleManager> { 
        struct StyleManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _satelliteStyleManager;
    VKPolylineOverlay * _selectedPolyline;
    VKSelectedTransitLineMapModel * _selectedTransitLineModel;
    VKSharedResources * _sharedResources;
    BOOL  _shouldNotifyFullyDrawn;
    BOOL  _shouldRasterize;
    BOOL  _showsBuildings;
    VKSkyModel * _skyModel;
    VKRasterMapModel * _standardRasterModel;
    struct shared_ptr<gss::StyleQuery> { 
        struct StyleQuery {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleQuery;
    float  _styleTransitionProgress;
    unsigned char  _targetDisplay;
    VKTileProvider * _tileProviders;
    int  _tileSize;
    NSMapTable * _tileSources;
    BOOL  _trafficEnabled;
    BOOL  _trafficIncidentsEnabled;
    VKTrafficTileSource * _trafficSource;
    VKTransitLineMapModel * _transitLineModel;
    BOOL  _transitioningToNav;
    struct VehicleState { 
        bool _isParked; 
    }  _vehicleState;
    double  _zoomLevel;
}

@property (nonatomic, retain) GEOResourceManifestConfiguration *additionalManifestConfiguration;
@property (nonatomic, readonly) VKBuildingFootprintMapModel *buildingFootprintModel;
@property (nonatomic, readonly) BOOL buildingsAreVisible;
@property (nonatomic) /* Warning: unhandled struct encoding: '{Matrix<float' */ struct  clearColor; /* unknown property attribute:  1>=[4f]} */
@property (nonatomic) float contentScale;
@property (nonatomic, readonly) int currentMapMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL debugDynamicMapModesEnabled;
@property (nonatomic) <VKMapModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableBuildingFootprints;
@property (nonatomic) BOOL disableGrid;
@property (nonatomic) BOOL disableLabels;
@property (nonatomic) BOOL disablePolygons;
@property (nonatomic) BOOL disableRasters;
@property (nonatomic) BOOL disableRealisticLand;
@property (nonatomic) BOOL disableRealisticRoads;
@property (nonatomic) BOOL disableRoads;
@property (nonatomic) BOOL disableTransitLines;
@property (nonatomic) BOOL dynamicMapModesEnabled;
@property (nonatomic, retain) NSArray *externalTrafficIncidents;
@property (nonatomic, retain) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isFullyDrawn;
@property (nonatomic) BOOL labelMarkerSelectionEnabled;
@property (nonatomic) unsigned char labelScaleFactor;
@property (nonatomic) BOOL limitingNavCameraHeight;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) double lodBias;
@property (nonatomic, readonly) GEOResourceManifestConfiguration *manifestConfiguration;
@property (nonatomic) int mapType;
@property (nonatomic) float navigationPuckSize;
@property (nonatomic) int navigationShieldSize;
@property (nonatomic) unsigned int neighborMode;
@property (nonatomic) <VKOverlayContainerRouteDelegate> *overlayContainerRouteDelegate;
@property (nonatomic, readonly) NSArray *overlays;
@property (nonatomic, readonly) NSSet *persistentOverlays;
@property (nonatomic, readonly) NSArray *rasterOverlays;
@property (nonatomic) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;
@property (nonatomic, retain) <GEORoutePreloadSession> *routePreloadSession;
@property (nonatomic) struct PolylineCoordinate { unsigned int x1; float x2; } routeUserOffset;
@property (nonatomic, readonly) VKAnnotationMarker *selectedAnnotationMarker;
@property (nonatomic, readonly) VKLabelMarker *selectedLabelMarker;
@property (nonatomic, readonly) VKSharedResources *sharedResources;
@property (nonatomic) int shieldIdiom;
@property (nonatomic) int shieldSize;
@property (nonatomic) BOOL shouldLoadFallbackTiles;
@property (nonatomic, readonly) BOOL shouldRasterize;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;
@property (nonatomic) unsigned char targetDisplay;
@property (nonatomic, readonly) VKMercatorTerrainHeightCache *terrainHeightCache;
@property (nonatomic, readonly) VKTileProvider *tileProvider;
@property (getter=isTrafficEnabled, nonatomic) BOOL trafficEnabled;
@property (getter=isTrafficIncidentsEnabled, nonatomic) BOOL trafficIncidentsEnabled;
@property (nonatomic) struct VehicleState { bool x1; } vehicleState;
@property (nonatomic, readonly) NSArray *visibleTileSets;

+ (const char *)nameForRoadClass:(int)arg1;
+ (unsigned long)numberOfRoadClasses;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_activateModel:(id)arg1;
- (void)_deactivateModel:(id)arg1;
- (void)_forceLayout;
- (void)_localeChanged:(id)arg1;
- (void)_mapConfigurationDidChange;
- (id)_rasterOverlayTileSourceForLevel:(unsigned int)arg1;
- (void)_resetMaximumZoomLevel;
- (void)_setMaximumZoomLevel:(double)arg1;
- (void)_setStyleManagerFromMapType:(int)arg1;
- (void)_setStyleTransitionProgress:(float)arg1 targetStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg2 step:(int)arg3;
- (float)_styleTransitionProgress;
- (float)_tileSelectionScaleForContext:(id)arg1;
- (void)_transitFadeOutCompletionCallback;
- (void)_transitionFromMode:(int)arg1 toMode:(int)arg2 animated:(BOOL)arg3;
- (void)_tryTransitionAndPreloadIfNecessary:(id)arg1;
- (void)_updateOverlayTileSource;
- (void)_updateRasterOverlayZoomOverride;
- (void)_updateRegularTileProviderMode;
- (void)_updateTileExclusionAreas;
- (void)_updateZoomLevel:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (void)addExternalAnchor:(id)arg1;
- (void)addOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)addSubmodel:(id)arg1;
- (id)additionalManifestConfiguration;
- (id /* block */)annotationCoordinateTest;
- (id /* block */)annotationMarkerDeselectionCallback;
- (id)annotationMarkerForSelectionAtPoint:(struct VKPoint { double x1; double x2; double x3; })arg1 avoidCurrent:(BOOL)arg2 canvasSize:(struct CGSize { float x1; float x2; })arg3;
- (id)annotationMarkers;
- (id /* block */)annotationRectTest;
- (id)attributionsForCurrentRegion;
- (void)beginStyleAnimationGroup;
- (id)buildingFootprintModel;
- (id)buildingMarkerAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1 groundPoint:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (BOOL)buildingsAreVisible;
- (int)buildingsMapMode;
- (void)cancelTileRequests;
- (struct Matrix<float, 4, 1> { float x1[4]; })clearColor;
- (void)clearScene;
- (id)closestRoadMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)configureTileSources;
- (float)contentScale;
- (id)createSourceForLayer:(unsigned long long)arg1 tileSet:(id)arg2 mode:(int)arg3;
- (void)createTrafficTileSourceIfNecessary:(id)arg1;
- (int)currentMapMode;
- (void)dealloc;
- (BOOL)debugDynamicMapModesEnabled;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1 viewTransform:(id)arg2;
- (id)delegate;
- (void)deselectAnnotationMarker:(id)arg1;
- (void)deselectLabelMarker;
- (void)deselectTransitLineMarker;
- (id)detailedDescription;
- (void)didBeginTransitionToNavigation;
- (void)didBeginTransitionToTransit;
- (void)didEndNavigation;
- (void)didEndTransitionToTransit;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)didStopLoadingTilesWithError:(id)arg1;
- (void)didTapZoom;
- (BOOL)disableBuildingFootprints;
- (BOOL)disableGrid;
- (BOOL)disableLabels;
- (BOOL)disablePolygons;
- (BOOL)disableRasters;
- (BOOL)disableRealisticLand;
- (BOOL)disableRealisticRoads;
- (void)disableRoadClass:(BOOL)arg1 withRoadClass:(int)arg2;
- (BOOL)disableRoads;
- (BOOL)disableTransitLines;
- (BOOL)dynamicMapModesEnabled;
- (void)endStyleAnimationGroup;
- (void)experimentConfigurationDidChange:(id)arg1;
- (id)externalAnchors;
- (id)externalTrafficIncidents;
- (id)featureMarkerAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1 groundPoint:(struct VKPoint { double x1; double x2; double x3; })arg2;
- (void)finishStyleBlend;
- (void)flushCaches:(BOOL)arg1;
- (id)focusedLabelsPolylinePainter;
- (void)forceMapType:(int)arg1 animated:(BOOL)arg2;
- (void)foreachActiveLayer:(id /* block */)arg1;
- (void)gatherNavigationRenderingPreloadItems:(struct vector<ggl::ShaderLoadItem, std::__1::allocator<ggl::ShaderLoadItem> > { }*)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (double)heightAtPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (id)initShouldRasterize:(BOOL)arg1 mapPurpose:(unsigned int)arg2 manifestConfiguration:(id)arg3 locale:(id)arg4 contentScale:(float)arg5;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (BOOL)isFullyDrawn;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (BOOL)isShowingNoDataPlaceholders;
- (BOOL)isTrafficEnabled;
- (BOOL)isTrafficIncidentsEnabled;
- (id)labelDebugString;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 selectableLabelsOnly:(BOOL)arg2;
- (BOOL)labelMarkerSelectionEnabled;
- (id)labelMarkers;
- (id)labelModel:(id)arg1 mapTileForTile:(id)arg2 layer:(unsigned long long)arg3;
- (void)labelModel:(id)arg1 selectedLabelMarkerWillDisappear:(id)arg2;
- (void)labelModelDidLayoutLabels:(id)arg1;
- (unsigned char)labelScaleFactor;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (BOOL)limitingNavCameraHeight;
- (BOOL)localizeLabels;
- (double)lodBias;
- (id)manifestConfiguration;
- (int)mapType;
- (double)maxTileHeightAtPoint:(struct VKPoint { double x1; double x2; double x3; })arg1;
- (int)maximumZoomLevelInView:(id)arg1;
- (int)minimumZoomLevelInView:(id)arg1;
- (id)navTileSource;
- (float)navigationPuckSize;
- (int)navigationShieldSize;
- (unsigned int)neighborMode;
- (double)northYawAtZoom:(int)arg1;
- (id)overlayContainer:(id)arg1 painterForOverlay:(id)arg2;
- (id)overlayContainer:(id)arg1 roadTileForTile:(id)arg2;
- (void)overlayContainer:(id)arg1 showingRouteInStandardModeDidChange:(BOOL)arg2;
- (BOOL)overlayContainerIsInRealisticMode:(id)arg1;
- (BOOL)overlayContainerIsInTransitMode:(id)arg1;
- (id)overlayContainerRouteDelegate;
- (id)overlays;
- (void)performStylesheetDidChange;
- (void)performStylesheetDoneChanging;
- (void)performStylesheetTransitionDidProgress;
- (void)performStylesheetWillTransitionToDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;
- (void)performstylesheetDidReload;
- (id)persistentOverlays;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (void)polylineOverlay:(id)arg1 didUpdateRouteRibbon:(id)arg2;
- (float)ppi;
- (id)rasterOverlays;
- (void)reloadStylesheet;
- (void)removeAnnotationMarker:(id)arg1;
- (void)removeExternalAnchor:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)removeRasterOverlay:(id)arg1;
- (void)requestStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg2 setupHandler:(id /* block */)arg3;
- (void)reserveStencilRangeBetweenPolygonLayersForScene:(id)arg1 context:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (void)resetTileContainers;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)roadMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)roadMarkersForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)routeLineSplitAnnotation;
- (id)routePreloadSession;
- (struct PolylineCoordinate { unsigned int x1; float x2; })routeUserOffset;
- (void)selectAnnotationMarker:(id)arg1;
- (void)selectLabelMarker:(id)arg1;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedAnnotationMarker;
- (id)selectedLabelMarker;
- (void)setAdditionalManifestConfiguration:(id)arg1;
- (void)setAnnotationMarkerDeselectionCallback:(id /* block */)arg1;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setClearColor:(struct Matrix<float, 4, 1> { float x1[4]; })arg1;
- (void)setContentScale:(float)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setDebugDynamicMapModesEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
- (void)setDisableBuildingFootprints:(BOOL)arg1;
- (void)setDisableGrid:(BOOL)arg1;
- (void)setDisableLabels:(BOOL)arg1;
- (void)setDisablePolygons:(BOOL)arg1;
- (void)setDisableRasters:(BOOL)arg1;
- (void)setDisableRealisticLand:(BOOL)arg1;
- (void)setDisableRealisticRoads:(BOOL)arg1;
- (void)setDisableRoads:(BOOL)arg1;
- (void)setDisableTransitLines:(BOOL)arg1;
- (void)setDynamicMapModesEnabled:(BOOL)arg1;
- (void)setExternalTrafficIncidents:(id)arg1;
- (void)setFocusedLabelsPolylinePainter:(id)arg1;
- (void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
- (void)setLabelScaleFactor:(unsigned char)arg1;
- (void)setLimitingNavCameraHeight:(BOOL)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setLodBias:(double)arg1;
- (void)setMapType:(int)arg1;
- (void)setMapType:(int)arg1 animated:(BOOL)arg2;
- (void)setNavigationPuckSize:(float)arg1;
- (void)setNavigationShieldSize:(int)arg1;
- (void)setNeighborMode:(unsigned int)arg1;
- (void)setOverlayContainerRouteDelegate:(id)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setRoutePreloadSession:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate { unsigned int x1; float x2; })arg1;
- (void)setShieldIdiom:(int)arg1;
- (void)setShieldSize:(int)arg1;
- (void)setShouldLoadFallbackTiles:(BOOL)arg1;
- (void)setShowsBuildings:(BOOL)arg1;
- (void)setShowsPointsOfInterest:(BOOL)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })arg1 forRealistic:(bool)arg2;
- (void)setStylesheetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;
- (void)setTargetDisplay:(unsigned char)arg1;
- (void)setTrafficEnabled:(BOOL)arg1;
- (void)setTrafficIncidentsEnabled:(BOOL)arg1;
- (void)setVehicleState:(struct VehicleState { bool x1; })arg1;
- (id)sharedResources;
- (int)shieldIdiom;
- (int)shieldSize;
- (void)shouldFlushCaches:(id)arg1;
- (BOOL)shouldLoadFallbackTiles;
- (BOOL)shouldRasterize;
- (BOOL)showsBuildings;
- (BOOL)showsPointsOfInterest;
- (void)sizeDidChange:(struct CGSize { float x1; float x2; })arg1;
- (id)sourceForLayer:(unsigned long long)arg1 mode:(int)arg2;
- (struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })sourceMapDisplayStyle;
- (void)startStylesheetAnimation:(id)arg1 targetMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg2;
- (struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetAnimationDidEnd:(BOOL)arg1;
- (void)stylesheetAnimationDidProgress:(float)arg1;
- (void)stylesheetAnimationWillStartFromStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg1 toStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg2;
- (bool)supportsMapDisplayStyle:(struct DisplayStyle { unsigned char x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned char)targetDisplay;
- (id)terrainHeightCache;
- (id)tileProvider;
- (BOOL)tileProviderMayUseNetwork:(id)arg1;
- (void)tileProviderNeedsUpdate:(id)arg1;
- (id)tileSetForMapLayer:(unsigned long long)arg1 tileGroup:(id)arg2;
- (int)tileSize;
- (int)tileStyleForMapLayer:(unsigned long long)arg1;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)updateMapDrawStyleWithContext:(id)arg1;
- (void)updateOverlayType;
- (void)updateRasterOverlayProviders:(id)arg1 withContext:(id)arg2;
- (struct VehicleState { bool x1; })vehicleState;
- (id)visibleTileSets;
- (void)willStartLoadingTiles;
- (void)willTapZoom;

@end
