/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDEventKitSyncCompletedNightlySync : PBCodable <NSCopying> {
    unsigned int  _eventsSynced;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int eventsSynced : 1; 
        unsigned int success : 1; 
    }  _has;
    BOOL  _success;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int eventsSynced;
@property (nonatomic) BOOL hasEventsSynced;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL success;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventsSynced;
- (BOOL)hasEventsSynced;
- (BOOL)hasSuccess;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEventsSynced:(unsigned int)arg1;
- (void)setHasEventsSynced:(BOOL)arg1;
- (void)setHasSuccess:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setSuccess:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (BOOL)success;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
