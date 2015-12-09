/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightView : UIView {
    NSMutableArray * _arcs;
    UIVisualEffectView * _backBlurView;
    UIView * _borderLineViewLandscape;
    UIView * _borderLineViewPortrait;
    MKGeodesicPolyline * _currentArc;
    int  _currentFocus;
    UIView * _errorView;
    FUFlight * _flight;
    UIButton * _flightButton;
    UIView * _flightInfoView;
    BOOL  _highlightCurrentFlightLeg;
    FULabel * _labelAirlineName;
    FULabel * _labelArrivalCity;
    FULabel * _labelArrivalCode;
    FULabel * _labelArrivalDate;
    FULabel * _labelArrivalDelay;
    FULabel * _labelArrivalGate;
    FULabel * _labelArrivalTerminal;
    FULabel * _labelArrivalTitle;
    FULabel * _labelDepartureCity;
    FULabel * _labelDepartureCode;
    FULabel * _labelDepartureDate;
    FULabel * _labelDepartureDelay;
    FULabel * _labelDepartureGate;
    FULabel * _labelDepartureTerminal;
    FULabel * _labelDepartureTitle;
    FULabel * _labelFlightCode;
    FULabel * _labelStatus;
    FULabel * _labelStatusTitle;
    UIView * _loadingView;
    MKMapView * _mapView;
    FUPlaneTrackerAnnotationView * _planeTracker;
}

@property UIVisualEffectView *backBlurView;
@property UIView *borderLineViewLandscape;
@property UIView *borderLineViewPortrait;
@property int currentFocus;
@property (retain) UIView *errorView;
@property (nonatomic, retain) FUFlight *flight;
@property UIButton *flightButton;
@property UIView *flightInfoView;
@property (nonatomic) BOOL highlightCurrentFlightLeg;
@property FULabel *labelAirlineName;
@property FULabel *labelArrivalCity;
@property FULabel *labelArrivalCode;
@property FULabel *labelArrivalDate;
@property FULabel *labelArrivalDelay;
@property FULabel *labelArrivalGate;
@property FULabel *labelArrivalTerminal;
@property FULabel *labelArrivalTitle;
@property FULabel *labelDepartureCity;
@property FULabel *labelDepartureCode;
@property FULabel *labelDepartureDate;
@property FULabel *labelDepartureDelay;
@property FULabel *labelDepartureGate;
@property FULabel *labelDepartureTerminal;
@property FULabel *labelDepartureTitle;
@property FULabel *labelFlightCode;
@property FULabel *labelStatus;
@property FULabel *labelStatusTitle;
@property (retain) UIView *loadingView;
@property MKMapView *mapView;

- (void).cxx_destruct;
- (void)addArc:(id)arg1;
- (id)arrivalCamera;
- (void)awakeFromNib;
- (id)backBlurView;
- (id)borderLineViewLandscape;
- (id)borderLineViewPortrait;
- (void)cleanupView;
- (int)currentFocus;
- (id)departureCamera;
- (id)errorView;
- (void)fitMap:(BOOL)arg1;
- (id)flight;
- (id)flightButton;
- (void)flightButtonTapped:(id)arg1;
- (id)flightCamera;
- (id)flightInfoView;
- (BOOL)highlightCurrentFlightLeg;
- (id)labelAirlineName;
- (id)labelArrivalCity;
- (id)labelArrivalCode;
- (id)labelArrivalDate;
- (id)labelArrivalDelay;
- (id)labelArrivalGate;
- (id)labelArrivalTerminal;
- (id)labelArrivalTitle;
- (id)labelDepartureCity;
- (id)labelDepartureCode;
- (id)labelDepartureDate;
- (id)labelDepartureDelay;
- (id)labelDepartureGate;
- (id)labelDepartureTerminal;
- (id)labelDepartureTitle;
- (id)labelFlightCode;
- (id)labelStatus;
- (id)labelStatusTitle;
- (void)layoutSubviews;
- (id)loadingView;
- (id)mapView;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2;
- (void)setBackBlurView:(id)arg1;
- (void)setBorderLineViewLandscape:(id)arg1;
- (void)setBorderLineViewPortrait:(id)arg1;
- (void)setCurrentFocus:(int)arg1;
- (void)setErrorView:(id)arg1;
- (void)setFlight:(id)arg1;
- (void)setFlightButton:(id)arg1;
- (void)setFlightInfoView:(id)arg1;
- (void)setHighlightCurrentFlightLeg:(BOOL)arg1;
- (void)setLabelAirlineName:(id)arg1;
- (void)setLabelArrivalCity:(id)arg1;
- (void)setLabelArrivalCode:(id)arg1;
- (void)setLabelArrivalDate:(id)arg1;
- (void)setLabelArrivalDelay:(id)arg1;
- (void)setLabelArrivalGate:(id)arg1;
- (void)setLabelArrivalTerminal:(id)arg1;
- (void)setLabelArrivalTitle:(id)arg1;
- (void)setLabelDepartureCity:(id)arg1;
- (void)setLabelDepartureCode:(id)arg1;
- (void)setLabelDepartureDate:(id)arg1;
- (void)setLabelDepartureDelay:(id)arg1;
- (void)setLabelDepartureGate:(id)arg1;
- (void)setLabelDepartureTerminal:(id)arg1;
- (void)setLabelDepartureTitle:(id)arg1;
- (void)setLabelFlightCode:(id)arg1;
- (void)setLabelStatus:(id)arg1;
- (void)setLabelStatusTitle:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setMapView:(id)arg1;
- (void)setupLabelStyles;
- (void)showError;
- (void)showInfo;
- (void)showLoading;
- (void)updateMapCamera;

@end
