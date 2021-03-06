/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKOverlayContainerModel : VKMapTileModel <VKMapLayer, VKRouteContextObserver, VKRouteMatchedAnnotationPresentationObserver, VKStyleManagerObserver> {
    unsigned char  _applicationState;
    struct ClearItem { unsigned char x1; struct Matrix<float, 4, 1> { float x_2_1_1[4]; } x2; bool x3; float x4; unsigned char x5; int x6; unsigned char x7; struct Box<unsigned int, 2> { struct Matrix<unsigned int, 2, 1> { unsigned int x_1_2_1[2]; } x_8_1_1; struct Matrix<unsigned int, 2, 1> { unsigned int x_2_2_1[2]; } x_8_1_2; } x8; } * _clearItem;
    <VKOverlayContainerDelegate> * _delegate;
    BOOL  _isShowingRouteInStandardMode;
    NSMutableArray * _overlayPainters;
    NSMutableSet * _overlaysToAdd;
    NSMapTable * _overlaysToPainters;
    NSMutableSet * _overlaysToRemove;
    NSMutableSet * _paintersToRemove;
    NSMutableSet * _persistentOverlays;
    NSMapTable * _persistentOverlaysToPainters;
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        double course; 
        BOOL onRoute; 
    }  _puckPosition;
    VKRouteContext * _routeContext;
    <VKOverlayContainerRouteDelegate> * _routeDelegate;
    <VKRouteMatchedAnnotationPresentation> * _routeLineSplitAnnotation;
    BOOL  _shouldCheckForOcclusion;
    BOOL  _shouldOccludeTraffic;
    BOOL  _shouldShowTraffic;
    VKSkyModel * _skyModel;
    struct shared_ptr<gss::StyleManager> { 
        struct StyleManager {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _styleManager;
    NSMutableSet * _visibleOverlays;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VKOverlayContainerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isInRealisticMode, nonatomic, readonly) BOOL inRealisticMode;
@property (getter=isInTransitMode, nonatomic, readonly) BOOL inTransitMode;
@property (nonatomic, readonly) BOOL isShowingRouteInStandardMode;
@property (nonatomic, readonly) NSSet *persistentOverlays;
@property (nonatomic, readonly) struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; } puckPosition;
@property (nonatomic, retain) VKRouteContext *routeContext;
@property (nonatomic) <VKOverlayContainerRouteDelegate> *routeDelegate;
@property (nonatomic, retain) <VKRouteMatchedAnnotationPresentation> *routeLineSplitAnnotation;
@property (nonatomic) BOOL shouldCheckForOcclusion;
@property (nonatomic) BOOL shouldOccludeTraffic;
@property (nonatomic) BOOL shouldShowTraffic;
@property (nonatomic, retain) VKSkyModel *skyModel;
@property (nonatomic) struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; } styleManager;
@property (readonly) Class superclass;

+ (BOOL)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updatePainterOrdering;
- (void)addPainterToRemove:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)annotationPresentationDidChangePresentationCoordinate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didReceiveMemoryWarning:(BOOL)arg1;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue { int (**x1)(); struct shared_ptr<ggl::RenderQueue> { struct RenderQueue {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; }*)arg3;
- (id)init;
- (BOOL)isInRealisticMode;
- (BOOL)isInTransitMode;
- (BOOL)isShowingRouteInStandardMode;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned long long)mapLayerPosition;
- (id)persistentOverlays;
- (struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; })puckPosition;
- (void)removePersistentOverlay:(id)arg1;
- (void)reset;
- (id)routeContext;
- (void)routeContextStateDidChange:(id)arg1;
- (id)routeDelegate;
- (id)routeLineSplitAnnotation;
- (void)setApplicationState:(unsigned char)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setRouteDelegate:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setShouldCheckForOcclusion:(BOOL)arg1;
- (void)setShouldOccludeTraffic:(BOOL)arg1;
- (void)setShouldShowTraffic:(BOOL)arg1;
- (void)setSkyModel:(id)arg1;
- (void)setStyleManager:(struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (BOOL)shouldCheckForOcclusion;
- (BOOL)shouldLayoutWithoutStyleManager;
- (BOOL)shouldOccludeTraffic;
- (BOOL)shouldShowTraffic;
- (id)skyModel;
- (struct shared_ptr<gss::StyleManager> { struct StyleManager {} *x1; struct __shared_weak_count {} *x2; })styleManager;
- (void)stylesheetDidChange;
- (void)updatedMatchedSection:(struct fast_shared_ptr<vk::RouteLineSection> { struct _fast_shared_ptr_control {} *x1; })arg1 index:(struct PolylineCoordinate { unsigned int x1; float x2; }*)arg2;

@end
