/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitArrivalInfo : PBCodable <NSCopying> {
    int  _destinationLocation;
    struct { 
        unsigned int destinationLocation : 1; 
    }  _has;
}

@property (nonatomic) int destinationLocation;
@property (nonatomic) BOOL hasDestinationLocation;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationLocation;
- (id)dictionaryRepresentation;
- (BOOL)hasDestinationLocation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDestinationLocation:(int)arg1;
- (void)setHasDestinationLocation:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
