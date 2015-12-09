/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPPlaceDisplay : PBCodable <NSCopying> {
    GEOMapItemStorage * _placeMapItemStorage;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) BOOL hasPlaceMapItemStorage;
@property (nonatomic, retain) GEOMapItemStorage *placeMapItemStorage;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceMapItemStorage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeMapItemStorage;
- (BOOL)readFrom:(id)arg1;
- (void)setPlaceMapItemStorage:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
