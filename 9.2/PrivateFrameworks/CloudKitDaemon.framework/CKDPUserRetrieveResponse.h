/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserRetrieveResponse : PBCodable <NSCopying> {
    CKDPRecord * _user;
}

@property (nonatomic, readonly) BOOL hasUser;
@property (nonatomic, retain) CKDPRecord *user;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasUser;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;
- (void)writeTo:(id)arg1;

@end
