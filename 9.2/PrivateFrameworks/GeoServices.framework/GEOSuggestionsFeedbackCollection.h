/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSuggestionsFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionID : 1; 
        unsigned int suggestionEntryIndex : 1; 
        unsigned int suggestionsEntryListIndex : 1; 
    }  _has;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    GEOPDAutocompleteEntry * _suggestionEntry;
    int  _suggestionEntryIndex;
    NSData * _suggestionEntryMetadata;
    NSData * _suggestionMetadata;
    int  _suggestionsEntryListIndex;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic, readonly) BOOL hasSuggestionEntry;
@property (nonatomic) BOOL hasSuggestionEntryIndex;
@property (nonatomic, readonly) BOOL hasSuggestionEntryMetadata;
@property (nonatomic, readonly) BOOL hasSuggestionMetadata;
@property (nonatomic) BOOL hasSuggestionsEntryListIndex;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, retain) GEOPDAutocompleteEntry *suggestionEntry;
@property (nonatomic) int suggestionEntryIndex;
@property (nonatomic, retain) NSData *suggestionEntryMetadata;
@property (nonatomic, retain) NSData *suggestionMetadata;
@property (nonatomic) int suggestionsEntryListIndex;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasSessionID;
- (BOOL)hasSuggestionEntry;
- (BOOL)hasSuggestionEntryIndex;
- (BOOL)hasSuggestionEntryMetadata;
- (BOOL)hasSuggestionMetadata;
- (BOOL)hasSuggestionsEntryListIndex;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (void)setHasSessionID:(BOOL)arg1;
- (void)setHasSuggestionEntryIndex:(BOOL)arg1;
- (void)setHasSuggestionsEntryListIndex:(BOOL)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSuggestionEntry:(id)arg1;
- (void)setSuggestionEntryIndex:(int)arg1;
- (void)setSuggestionEntryMetadata:(id)arg1;
- (void)setSuggestionMetadata:(id)arg1;
- (void)setSuggestionsEntryListIndex:(int)arg1;
- (id)suggestionEntry;
- (int)suggestionEntryIndex;
- (id)suggestionEntryMetadata;
- (id)suggestionMetadata;
- (int)suggestionsEntryListIndex;
- (void)writeTo:(id)arg1;

@end