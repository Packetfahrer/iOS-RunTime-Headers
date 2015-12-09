/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFormattedString : PBCodable <GEOServerFormattedString, NSCopying> {
    NSMutableArray * _formatArguments;
    NSString * _formatString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *formatArguments;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, retain) NSString *formatString;
@property (nonatomic, readonly) NSArray *formatTokens;
@property (nonatomic, readonly) BOOL hasFormatString;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)addFormatArgument:(id)arg1;
- (void)clearFormatArguments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formatArgumentAtIndex:(unsigned int)arg1;
- (id)formatArguments;
- (unsigned int)formatArgumentsCount;
- (id)formatString;
- (id)formatTokens;
- (BOOL)hasFormatString;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setFormatArguments:(id)arg1;
- (void)setFormatString:(id)arg1;
- (void)writeTo:(id)arg1;

@end