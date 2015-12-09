/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitConnection : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _fromRideIndexs;
    NSMutableArray * _steps;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _toRideIndexs;
}

@property (nonatomic, readonly) unsigned int*fromRideIndexs;
@property (nonatomic, readonly) unsigned int fromRideIndexsCount;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, readonly) unsigned int*toRideIndexs;
@property (nonatomic, readonly) unsigned int toRideIndexsCount;

- (void)addFromRideIndex:(unsigned int)arg1;
- (void)addStep:(id)arg1;
- (void)addToRideIndex:(unsigned int)arg1;
- (void)clearFromRideIndexs;
- (void)clearSteps;
- (void)clearToRideIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fromRideIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)fromRideIndexs;
- (unsigned int)fromRideIndexsCount;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFromRideIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setSteps:(id)arg1;
- (void)setToRideIndexs:(unsigned int*)arg1 count:(unsigned int)arg2;
- (id)stepAtIndex:(unsigned int)arg1;
- (id)steps;
- (unsigned int)stepsCount;
- (unsigned int)toRideIndexAtIndex:(unsigned int)arg1;
- (unsigned int*)toRideIndexs;
- (unsigned int)toRideIndexsCount;
- (void)writeTo:(id)arg1;

@end