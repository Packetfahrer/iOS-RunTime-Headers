/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelClusterMovementInstance : PBCodable <NSCopying> {
    unsigned long long  _distance;
    struct { 
        unsigned int distance : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long distance;
@property (nonatomic) BOOL hasDistance;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)distance;
- (BOOL)hasDistance;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDistance:(unsigned long long)arg1;
- (void)setHasDistance:(BOOL)arg1;
- (void)writeTo:(id)arg1;

@end
