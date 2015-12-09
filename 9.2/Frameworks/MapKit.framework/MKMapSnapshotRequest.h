/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotRequest : NSObject {
    NSString * _attributionString;
    id  _context;
    struct { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    MKMapSnapshotCreator * _delegate;
    UIImage * _image;
    id  _requester;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    VKMapSnapshotCreator * _snapshotCreator;
    unsigned int  _zoomLevel;
}

@property (nonatomic, retain) NSString *attributionString;
@property (nonatomic, retain) id context;
@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) MKMapSnapshotCreator *delegate;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, retain) id requester;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic) unsigned int zoomLevel;

- (void).cxx_destruct;
- (id)attributionString;
- (void)cancel;
- (id)context;
- (struct { double x1; double x2; })coordinate;
- (id)delegate;
- (id)description;
- (id)image;
- (id)requester;
- (void)setAttributionString:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setZoomLevel:(unsigned int)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)start;
- (unsigned int)zoomLevel;

@end
