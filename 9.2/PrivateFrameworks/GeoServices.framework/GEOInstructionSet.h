/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOInstructionSet : PBCodable <NSCopying> {
    GEOFormattedString * _countStopsText;
    GEOFormattedString * _departureBar;
    GEOGenericInstruction * _genericInstruction;
    GEOTransitListInstruction * _transitListInstruction;
    GEOTransitSignInstruction * _transitSignInstruction;
}

@property (nonatomic, readonly) <GEOServerFormattedString> *countStopsFormattedString;
@property (nonatomic, retain) GEOFormattedString *countStopsText;
@property (nonatomic, retain) GEOFormattedString *departureBar;
@property (nonatomic, readonly) <GEOServerFormattedString> *departureBarFormattedString;
@property (nonatomic, retain) GEOGenericInstruction *genericInstruction;
@property (nonatomic, readonly) BOOL hasCountStopsText;
@property (nonatomic, readonly) BOOL hasDepartureBar;
@property (nonatomic, readonly) BOOL hasGenericInstruction;
@property (nonatomic, readonly) BOOL hasTransitListInstruction;
@property (nonatomic, readonly) BOOL hasTransitSignInstruction;
@property (nonatomic, retain) GEOTransitListInstruction *transitListInstruction;
@property (nonatomic, retain) GEOTransitSignInstruction *transitSignInstruction;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countStopsFormattedString;
- (id)countStopsText;
- (void)dealloc;
- (id)departureBar;
- (id)departureBarFormattedString;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genericInstruction;
- (BOOL)hasCountStopsText;
- (BOOL)hasDepartureBar;
- (BOOL)hasGenericInstruction;
- (BOOL)hasTransitListInstruction;
- (BOOL)hasTransitSignInstruction;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCountStopsText:(id)arg1;
- (void)setDepartureBar:(id)arg1;
- (void)setGenericInstruction:(id)arg1;
- (void)setTransitListInstruction:(id)arg1;
- (void)setTransitSignInstruction:(id)arg1;
- (id)transitListInstruction;
- (id)transitSignInstruction;
- (void)writeTo:(id)arg1;

@end
