/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocationBound : PBCodable <NSCopying> {
    struct { 
        unsigned int radius : 1; 
    }  _has;
    double  _radius;
}

@property (nonatomic) BOOL hasRadius;
@property (nonatomic) double radius;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRadius;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)radius;
- (BOOL)readFrom:(id)arg1;
- (void)setHasRadius:(BOOL)arg1;
- (void)setRadius:(double)arg1;
- (void)writeTo:(id)arg1;

@end
