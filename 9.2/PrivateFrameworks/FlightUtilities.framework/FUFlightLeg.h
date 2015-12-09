/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightLeg : NSObject <NSCopying> {
    NSString * _aircraftcode;
    float  _altitude;
    FUFlightStep * _arrival;
    FUFlightStep * _departure;
    float  _heading;
    struct { 
        double latitude; 
        double longitude; 
    }  _location;
    float  _speed;
    int  _status;
}

@property (retain) NSString *aircraftcode;
@property float altitude;
@property (retain) FUFlightStep *arrival;
@property (retain) FUFlightStep *departure;
@property (readonly) double duration;
@property float heading;
@property struct { double x1; double x2; } location;
@property float speed;
@property int status;

- (void).cxx_destruct;
- (id)aircraftcode;
- (float)altitude;
- (id)arrival;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departure;
- (id)description;
- (double)duration;
- (float)heading;
- (BOOL)isEqual:(id)arg1;
- (struct { double x1; double x2; })location;
- (void)setAircraftcode:(id)arg1;
- (void)setAltitude:(float)arg1;
- (void)setArrival:(id)arg1;
- (void)setDeparture:(id)arg1;
- (void)setHeading:(float)arg1;
- (void)setLocation:(struct { double x1; double x2; })arg1;
- (void)setSpeed:(float)arg1;
- (void)setStatus:(int)arg1;
- (float)speed;
- (int)status;

@end
