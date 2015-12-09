/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCMTicketStatus : PBCodable <NSCopying> {
    NSString * _ticketId;
}

@property (nonatomic, readonly) BOOL hasTicketId;
@property (nonatomic, retain) NSString *ticketId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTicketId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTicketId:(id)arg1;
- (id)ticketId;
- (void)writeTo:(id)arg1;

@end
