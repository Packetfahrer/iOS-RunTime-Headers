/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {
    int  _changeType;
    struct { 
        unsigned int changeType : 1; 
    }  _has;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic) int changeType;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic, readonly) BOOL hasZoneIdentifier;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (int)changeType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasChangeType;
- (BOOL)hasZoneIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setHasChangeType:(BOOL)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
