/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDBltPrimaryDeviceSendInTime : PBCodable <NSCopying> {
    unsigned int  _connectionType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int connectionType : 1; 
        unsigned int origConnectionType : 1; 
    }  _has;
    unsigned int  _origConnectionType;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) BOOL hasOrigConnectionType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int origConnectionType;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)connectionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasConnectionType;
- (BOOL)hasOrigConnectionType;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)origConnectionType;
- (BOOL)readFrom:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setHasConnectionType:(BOOL)arg1;
- (void)setHasOrigConnectionType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setOrigConnectionType:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
