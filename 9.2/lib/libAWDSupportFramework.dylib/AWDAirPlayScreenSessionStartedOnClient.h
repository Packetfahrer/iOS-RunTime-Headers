/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDAirPlayScreenSessionStartedOnClient : PBCodable <NSCopying> {
    unsigned int  _audioCompressionType;
    unsigned int  _bonjourMs;
    unsigned int  _configMs;
    unsigned int  _connectMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int audioCompressionType : 1; 
        unsigned int bonjourMs : 1; 
        unsigned int configMs : 1; 
        unsigned int connectMs : 1; 
        unsigned int prepareMs : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    }  _has;
    unsigned int  _prepareMs;
    NSString * _sessionUUID;
    int  _status;
    unsigned long long  _timestamp;
    unsigned int  _transportType;
}

@property (nonatomic) unsigned int audioCompressionType;
@property (nonatomic) unsigned int bonjourMs;
@property (nonatomic) unsigned int configMs;
@property (nonatomic) unsigned int connectMs;
@property (nonatomic) BOOL hasAudioCompressionType;
@property (nonatomic) BOOL hasBonjourMs;
@property (nonatomic) BOOL hasConfigMs;
@property (nonatomic) BOOL hasConnectMs;
@property (nonatomic) BOOL hasPrepareMs;
@property (nonatomic, readonly) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int prepareMs;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;

- (unsigned int)audioCompressionType;
- (unsigned int)bonjourMs;
- (unsigned int)configMs;
- (unsigned int)connectMs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasAudioCompressionType;
- (BOOL)hasBonjourMs;
- (BOOL)hasConfigMs;
- (BOOL)hasConnectMs;
- (BOOL)hasPrepareMs;
- (BOOL)hasSessionUUID;
- (BOOL)hasStatus;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)prepareMs;
- (BOOL)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setAudioCompressionType:(unsigned int)arg1;
- (void)setBonjourMs:(unsigned int)arg1;
- (void)setConfigMs:(unsigned int)arg1;
- (void)setConnectMs:(unsigned int)arg1;
- (void)setHasAudioCompressionType:(BOOL)arg1;
- (void)setHasBonjourMs:(BOOL)arg1;
- (void)setHasConfigMs:(BOOL)arg1;
- (void)setHasConnectMs:(BOOL)arg1;
- (void)setHasPrepareMs:(BOOL)arg1;
- (void)setHasStatus:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setPrepareMs:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
