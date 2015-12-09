/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitLineDisplayHints : PBCodable <NSCopying> {
    struct { 
        unsigned int showVehicleNumber : 1; 
    }  _has;
    BOOL  _showVehicleNumber;
}

@property (nonatomic) BOOL hasShowVehicleNumber;
@property (nonatomic) BOOL showVehicleNumber;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasShowVehicleNumber;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasShowVehicleNumber:(BOOL)arg1;
- (void)setShowVehicleNumber:(BOOL)arg1;
- (BOOL)showVehicleNumber;
- (void)writeTo:(id)arg1;

@end
