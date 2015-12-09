/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStepFeedback : PBCodable <NSCopying> {
    BOOL  _completedStep;
    double  _completionTimeStamp;
    struct { 
        unsigned int completionTimeStamp : 1; 
        unsigned int routeIndex : 1; 
        unsigned int stepID : 1; 
        unsigned int completedStep : 1; 
    }  _has;
    NSData * _routeID;
    unsigned int  _routeIndex;
    unsigned int  _stepID;
}

@property (nonatomic) BOOL completedStep;
@property (nonatomic) double completionTimeStamp;
@property (nonatomic) BOOL hasCompletedStep;
@property (nonatomic) BOOL hasCompletionTimeStamp;
@property (nonatomic, readonly) BOOL hasRouteID;
@property (nonatomic) BOOL hasRouteIndex;
@property (nonatomic) BOOL hasStepID;
@property (nonatomic, retain) NSData *routeID;
@property (nonatomic) unsigned int routeIndex;
@property (nonatomic) unsigned int stepID;

- (BOOL)completedStep;
- (double)completionTimeStamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCompletedStep;
- (BOOL)hasCompletionTimeStamp;
- (BOOL)hasRouteID;
- (BOOL)hasRouteIndex;
- (BOOL)hasStepID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)routeID;
- (unsigned int)routeIndex;
- (void)setCompletedStep:(BOOL)arg1;
- (void)setCompletionTimeStamp:(double)arg1;
- (void)setHasCompletedStep:(BOOL)arg1;
- (void)setHasCompletionTimeStamp:(BOOL)arg1;
- (void)setHasRouteIndex:(BOOL)arg1;
- (void)setHasStepID:(BOOL)arg1;
- (void)setRouteID:(id)arg1;
- (void)setRouteIndex:(unsigned int)arg1;
- (void)setStepID:(unsigned int)arg1;
- (unsigned int)stepID;
- (void)writeTo:(id)arg1;

@end
