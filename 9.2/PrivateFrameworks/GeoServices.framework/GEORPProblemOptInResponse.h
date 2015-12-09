/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemOptInResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    int  _statusCode;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end
