/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHealthKitActivityRingEvent : PBCodable <NSCopying> {
    unsigned int  _activeSeconds;
    unsigned int  _age;
    unsigned int  _biologicalSex;
    unsigned int  _briskMinutes;
    unsigned int  _energyBurned;
    unsigned int  _energyBurnedGoal;
    unsigned long long  _eventTimestamp;
    struct { 
        unsigned int eventTimestamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int activeSeconds : 1; 
        unsigned int age : 1; 
        unsigned int biologicalSex : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int height : 1; 
        unsigned int weight : 1; 
    }  _has;
    unsigned int  _height;
    unsigned long long  _timestamp;
    unsigned int  _weight;
}

@property (nonatomic) unsigned int activeSeconds;
@property (nonatomic) unsigned int age;
@property (nonatomic) unsigned int biologicalSex;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) unsigned int energyBurned;
@property (nonatomic) unsigned int energyBurnedGoal;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic) BOOL hasActiveSeconds;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic) BOOL hasEventTimestamp;
@property (nonatomic) BOOL hasHeight;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int weight;

- (unsigned int)activeSeconds;
- (unsigned int)age;
- (unsigned int)biologicalSex;
- (unsigned int)briskMinutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)energyBurned;
- (unsigned int)energyBurnedGoal;
- (unsigned long long)eventTimestamp;
- (BOOL)hasActiveSeconds;
- (BOOL)hasAge;
- (BOOL)hasBiologicalSex;
- (BOOL)hasBriskMinutes;
- (BOOL)hasEnergyBurned;
- (BOOL)hasEnergyBurnedGoal;
- (BOOL)hasEventTimestamp;
- (BOOL)hasHeight;
- (BOOL)hasTimestamp;
- (BOOL)hasWeight;
- (unsigned int)hash;
- (unsigned int)height;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setActiveSeconds:(unsigned int)arg1;
- (void)setAge:(unsigned int)arg1;
- (void)setBiologicalSex:(unsigned int)arg1;
- (void)setBriskMinutes:(unsigned int)arg1;
- (void)setEnergyBurned:(unsigned int)arg1;
- (void)setEnergyBurnedGoal:(unsigned int)arg1;
- (void)setEventTimestamp:(unsigned long long)arg1;
- (void)setHasActiveSeconds:(BOOL)arg1;
- (void)setHasAge:(BOOL)arg1;
- (void)setHasBiologicalSex:(BOOL)arg1;
- (void)setHasBriskMinutes:(BOOL)arg1;
- (void)setHasEnergyBurned:(BOOL)arg1;
- (void)setHasEnergyBurnedGoal:(BOOL)arg1;
- (void)setHasEventTimestamp:(BOOL)arg1;
- (void)setHasHeight:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasWeight:(BOOL)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)weight;
- (void)writeTo:(id)arg1;

@end
