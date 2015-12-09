/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONamedFeature : PBCodable <NSCopying> {
    NSString * _name;
    double  _value;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) double value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (BOOL)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(double)arg1;
- (double)value;
- (void)writeTo:(id)arg1;

@end