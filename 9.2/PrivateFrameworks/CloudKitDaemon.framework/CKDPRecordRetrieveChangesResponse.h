/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying> {
    NSMutableArray * _changedRecords;
    NSMutableArray * _changedShares;
    NSData * _clientChangeToken;
    struct { 
        unsigned int status : 1; 
    }  _has;
    int  _status;
    NSData * _syncContinuationToken;
}

@property (nonatomic, retain) NSMutableArray *changedRecords;
@property (nonatomic, retain) NSMutableArray *changedShares;
@property (nonatomic, retain) NSData *clientChangeToken;
@property (nonatomic, readonly) BOOL hasClientChangeToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic, readonly) BOOL hasSyncContinuationToken;
@property (nonatomic) int status;
@property (nonatomic, retain) NSData *syncContinuationToken;

- (void).cxx_destruct;
- (void)addChangedRecord:(id)arg1;
- (void)addChangedShare:(id)arg1;
- (id)changedRecordAtIndex:(unsigned int)arg1;
- (id)changedRecords;
- (unsigned int)changedRecordsCount;
- (id)changedShareAtIndex:(unsigned int)arg1;
- (id)changedShares;
- (unsigned int)changedSharesCount;
- (void)clearChangedRecords;
- (void)clearChangedShares;
- (id)clientChangeToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasClientChangeToken;
- (BOOL)hasStatus;
- (BOOL)hasSyncContinuationToken;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setChangedRecords:(id)arg1;
- (void)setChangedShares:(id)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)setSyncContinuationToken:(id)arg1;
- (int)status;
- (id)syncContinuationToken;
- (void)writeTo:(id)arg1;

@end
