/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {
    int  _actionComponent;
    struct { 
        unsigned int actionComponent : 1; 
    }  _has;
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _placeDataComponents;
}

@property (nonatomic) int actionComponent;
@property (nonatomic) BOOL hasActionComponent;
@property (nonatomic, readonly) int*placeDataComponents;
@property (nonatomic, readonly) unsigned int placeDataComponentsCount;

- (int)actionComponent;
- (void)addPlaceDataComponents:(int)arg1;
- (void)clearPlaceDataComponents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasActionComponent;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int*)placeDataComponents;
- (int)placeDataComponentsAtIndex:(unsigned int)arg1;
- (unsigned int)placeDataComponentsCount;
- (BOOL)readFrom:(id)arg1;
- (void)setActionComponent:(int)arg1;
- (void)setHasActionComponent:(BOOL)arg1;
- (void)setPlaceDataComponents:(int*)arg1 count:(unsigned int)arg2;
- (void)writeTo:(id)arg1;

@end
