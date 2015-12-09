/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate, UIGestureRecognizerDelegate> {
    <FMFMapViewDelegateInternalDelegate> * _delegate;
    FMFWildcardGestureRecognizer * _gr;
    BOOL  _isMapCenteringDisabled;
    struct { 
        double latitude; 
        double longitude; 
    }  _lastUserLocationCoordinate;
    MKMapView * _mapView;
    BOOL  _respondingToUserTouch;
    FMAnnotationView * _selectedAnnotationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMFMapViewDelegateInternalDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FMFWildcardGestureRecognizer *gr;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isMapCenteringDisabled;
@property (nonatomic) struct { double x1; double x2; } lastUserLocationCoordinate;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) BOOL respondingToUserTouch;
@property (nonatomic) FMAnnotationView *selectedAnnotationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_moveCenterByOffset:(struct CGPoint { float x1; float x2; })arg1 from:(struct { double x1; double x2; })arg2 mapView:(id)arg3;
- (id)accuracyCircleForLocation:(id)arg1;
- (BOOL)canSelectAnnotation:(id)arg1;
- (id)delegate;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsetsWithMinApplied:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)endTouches;
- (id)fmfOverlayColor;
- (id)fmfOverlayColorSatellite;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)gr;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;
- (BOOL)isMapCenteringDisabled;
- (struct { double x1; double x2; })lastUserLocationCoordinate;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectMakeWithRadialDistanceForCoordinate:(struct { double x1; double x2; })arg1 andRadius:(double)arg2;
- (id)mapView;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (BOOL)regionIsValid:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)respondingToUserTouch;
- (void)selectAnnotation:(id)arg1;
- (id)selectedAnnotationView;
- (void)setDelegate:(id)arg1;
- (void)setGr:(id)arg1;
- (void)setIsMapCenteringDisabled:(BOOL)arg1;
- (void)setLastUserLocationCoordinate:(struct { double x1; double x2; })arg1;
- (void)setMapView:(id)arg1;
- (void)setRespondingToUserTouch:(BOOL)arg1;
- (void)setSelectedAnnotationView:(id)arg1;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(BOOL)arg2 disallowAnimation:(BOOL)arg3;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;

@end