/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitIncident : PBCodable <NSCopying> {
    NSMutableArray * _affectedEntitys;
    BOOL  _blocking;
    unsigned int  _creationDatetime;
    unsigned int  _endDatetime;
    struct { 
        unsigned int incidentMuid : 1; 
        unsigned int creationDatetime : 1; 
        unsigned int endDatetime : 1; 
        unsigned int iconEnum : 1; 
        unsigned int startDatetime : 1; 
        unsigned int updatedDatetime : 1; 
        unsigned int blocking : 1; 
    }  _has;
    int  _iconEnum;
    unsigned long long  _incidentMuid;
    NSString * _longDescriptionString;
    NSString * _messageForAllBlocking;
    NSString * _messageForIncidentType;
    NSString * _messageString;
    NSString * _shortDescriptionString;
    unsigned int  _startDatetime;
    NSString * _titleString;
    unsigned int  _updatedDatetime;
}

@property (nonatomic, retain) NSMutableArray *affectedEntitys;
@property (nonatomic) BOOL blocking;
@property (nonatomic) unsigned int creationDatetime;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic) BOOL hasBlocking;
@property (nonatomic) BOOL hasCreationDatetime;
@property (nonatomic) BOOL hasEndDatetime;
@property (nonatomic) BOOL hasIconEnum;
@property (nonatomic) BOOL hasIncidentMuid;
@property (nonatomic, readonly) BOOL hasLongDescriptionString;
@property (nonatomic, readonly) BOOL hasMessageForAllBlocking;
@property (nonatomic, readonly) BOOL hasMessageForIncidentType;
@property (nonatomic, readonly) BOOL hasMessageString;
@property (nonatomic, readonly) BOOL hasShortDescriptionString;
@property (nonatomic) BOOL hasStartDatetime;
@property (nonatomic, readonly) BOOL hasTitleString;
@property (nonatomic) BOOL hasUpdatedDatetime;
@property (nonatomic) int iconEnum;
@property (nonatomic) unsigned long long incidentMuid;
@property (nonatomic, retain) NSString *longDescriptionString;
@property (nonatomic, retain) NSString *messageForAllBlocking;
@property (nonatomic, retain) NSString *messageForIncidentType;
@property (nonatomic, retain) NSString *messageString;
@property (nonatomic, retain) NSString *shortDescriptionString;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic, retain) NSString *titleString;
@property (nonatomic) unsigned int updatedDatetime;

- (void)addAffectedEntity:(id)arg1;
- (id)affectedEntityAtIndex:(unsigned int)arg1;
- (id)affectedEntitys;
- (unsigned int)affectedEntitysCount;
- (BOOL)blocking;
- (void)clearAffectedEntitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)creationDatetime;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endDatetime;
- (BOOL)hasBlocking;
- (BOOL)hasCreationDatetime;
- (BOOL)hasEndDatetime;
- (BOOL)hasIconEnum;
- (BOOL)hasIncidentMuid;
- (BOOL)hasLongDescriptionString;
- (BOOL)hasMessageForAllBlocking;
- (BOOL)hasMessageForIncidentType;
- (BOOL)hasMessageString;
- (BOOL)hasShortDescriptionString;
- (BOOL)hasStartDatetime;
- (BOOL)hasTitleString;
- (BOOL)hasUpdatedDatetime;
- (unsigned int)hash;
- (int)iconEnum;
- (unsigned long long)incidentMuid;
- (BOOL)isEqual:(id)arg1;
- (id)longDescriptionString;
- (void)mergeFrom:(id)arg1;
- (id)messageForAllBlocking;
- (id)messageForIncidentType;
- (id)messageString;
- (BOOL)readFrom:(id)arg1;
- (void)setAffectedEntitys:(id)arg1;
- (void)setBlocking:(BOOL)arg1;
- (void)setCreationDatetime:(unsigned int)arg1;
- (void)setEndDatetime:(unsigned int)arg1;
- (void)setHasBlocking:(BOOL)arg1;
- (void)setHasCreationDatetime:(BOOL)arg1;
- (void)setHasEndDatetime:(BOOL)arg1;
- (void)setHasIconEnum:(BOOL)arg1;
- (void)setHasIncidentMuid:(BOOL)arg1;
- (void)setHasStartDatetime:(BOOL)arg1;
- (void)setHasUpdatedDatetime:(BOOL)arg1;
- (void)setIconEnum:(int)arg1;
- (void)setIncidentMuid:(unsigned long long)arg1;
- (void)setLongDescriptionString:(id)arg1;
- (void)setMessageForAllBlocking:(id)arg1;
- (void)setMessageForIncidentType:(id)arg1;
- (void)setMessageString:(id)arg1;
- (void)setShortDescriptionString:(id)arg1;
- (void)setStartDatetime:(unsigned int)arg1;
- (void)setTitleString:(id)arg1;
- (void)setUpdatedDatetime:(unsigned int)arg1;
- (id)shortDescriptionString;
- (unsigned int)startDatetime;
- (id)titleString;
- (unsigned int)updatedDatetime;
- (void)writeTo:(id)arg1;

@end
