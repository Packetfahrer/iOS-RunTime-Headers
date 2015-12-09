/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying> {
    double  _dateValue;
    struct { 
        unsigned int dateValue : 1; 
        unsigned int numberDoubleValue : 1; 
        unsigned int numberIntValue : 1; 
    }  _has;
    NSString * _key;
    double  _numberDoubleValue;
    long long  _numberIntValue;
    NSString * _stringValue;
}

@property (nonatomic) double dateValue;
@property (nonatomic) BOOL hasDateValue;
@property (nonatomic, readonly) BOOL hasKey;
@property (nonatomic) BOOL hasNumberDoubleValue;
@property (nonatomic) BOOL hasNumberIntValue;
@property (nonatomic, readonly) BOOL hasStringValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) double numberDoubleValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic, retain) NSString *stringValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)dateValue;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasDateValue;
- (BOOL)hasKey;
- (BOOL)hasNumberDoubleValue;
- (BOOL)hasNumberIntValue;
- (BOOL)hasStringValue;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (double)numberDoubleValue;
- (long long)numberIntValue;
- (BOOL)readFrom:(id)arg1;
- (void)setDateValue:(double)arg1;
- (void)setHasDateValue:(BOOL)arg1;
- (void)setHasNumberDoubleValue:(BOOL)arg1;
- (void)setHasNumberIntValue:(BOOL)arg1;
- (void)setKey:(id)arg1;
- (void)setNumberDoubleValue:(double)arg1;
- (void)setNumberIntValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end