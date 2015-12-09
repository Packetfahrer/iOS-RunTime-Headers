/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerStateMachine : PBCodable <NSCopying> {
    struct { 
        unsigned int stateDuration : 1; 
        unsigned int stateChanges : 1; 
    }  _has;
    unsigned int  _stateChanges;
    unsigned long long  _stateDuration;
}

@property (nonatomic) BOOL hasStateChanges;
@property (nonatomic) BOOL hasStateDuration;
@property (nonatomic) unsigned int stateChanges;
@property (nonatomic) unsigned long long stateDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasStateChanges;
- (BOOL)hasStateDuration;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasStateChanges:(BOOL)arg1;
- (void)setHasStateDuration:(BOOL)arg1;
- (void)setStateChanges:(unsigned int)arg1;
- (void)setStateDuration:(unsigned long long)arg1;
- (unsigned int)stateChanges;
- (unsigned long long)stateDuration;
- (void)writeTo:(id)arg1;

@end
