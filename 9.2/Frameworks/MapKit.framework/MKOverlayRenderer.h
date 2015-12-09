/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayRenderer : NSObject {
    float  _alpha;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingMapRect;
    float  _contentScaleFactor;
    <MKOverlay> * _overlay;
    id  _renderer;
}

@property float alpha;
@property (readonly) float contentScaleFactor;
@property (nonatomic, readonly) <MKOverlay> *overlay;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_boundingMapRect;
- (id)_mk_overlayLayer;
- (id)_mk_overlayView;
- (struct { double x1; double x2; })_originMapPoint;
- (id)_renderer;
- (float)alpha;
- (BOOL)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (float)contentScaleFactor;
- (void)dealloc;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2 inContext:(struct CGContext { }*)arg3;
- (id)init;
- (id)initWithOverlay:(id)arg1;
- (struct { double x1; double x2; })mapPointForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)overlay;
- (BOOL)overlay:(id)arg1 canDrawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2;
- (void)overlay:(id)arg1 drawKey:(const struct { unsigned int x1; unsigned int x2; unsigned int x3; }*)arg2 inContext:(struct CGContext { }*)arg3;
- (struct CGPoint { float x1; float x2; })pointForMapPoint:(struct { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAlpha:(float)arg1;
- (void)setContentScaleFactor:(float)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (void)set_boundingMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_renderer:(id)arg1;

@end
