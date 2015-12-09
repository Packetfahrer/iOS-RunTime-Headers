/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDVendorSpecificPlaceRefinementParameters : PBCodable <NSCopying> {
    int  _addressGeocodeAccuracyHint;
    GEOStructuredAddress * _addressHint;
    NSString * _externalItemId;
    NSMutableArray * _formattedAddressLineHints;
    struct { 
        unsigned int muid : 1; 
        unsigned int addressGeocodeAccuracyHint : 1; 
        unsigned int placeTypeHint : 1; 
        unsigned int resultProviderId : 1; 
    }  _has;
    GEOLatLng * _locationHint;
    unsigned long long  _muid;
    NSString * _placeNameHint;
    int  _placeTypeHint;
    int  _resultProviderId;
    NSString * _vendorId;
}

@property (nonatomic) int addressGeocodeAccuracyHint;
@property (nonatomic, retain) GEOStructuredAddress *addressHint;
@property (nonatomic, retain) NSString *externalItemId;
@property (nonatomic, retain) NSMutableArray *formattedAddressLineHints;
@property (nonatomic) BOOL hasAddressGeocodeAccuracyHint;
@property (nonatomic, readonly) BOOL hasAddressHint;
@property (nonatomic, readonly) BOOL hasExternalItemId;
@property (nonatomic, readonly) BOOL hasLocationHint;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic, readonly) BOOL hasPlaceNameHint;
@property (nonatomic) BOOL hasPlaceTypeHint;
@property (nonatomic) BOOL hasResultProviderId;
@property (nonatomic, readonly) BOOL hasVendorId;
@property (nonatomic, retain) GEOLatLng *locationHint;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *placeNameHint;
@property (nonatomic) int placeTypeHint;
@property (nonatomic) int resultProviderId;
@property (nonatomic, retain) NSString *vendorId;

- (void)addFormattedAddressLineHint:(id)arg1;
- (int)addressGeocodeAccuracyHint;
- (id)addressHint;
- (void)clearFormattedAddressLineHints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalItemId;
- (id)formattedAddressLineHintAtIndex:(unsigned int)arg1;
- (id)formattedAddressLineHints;
- (unsigned int)formattedAddressLineHintsCount;
- (BOOL)hasAddressGeocodeAccuracyHint;
- (BOOL)hasAddressHint;
- (BOOL)hasExternalItemId;
- (BOOL)hasLocationHint;
- (BOOL)hasMuid;
- (BOOL)hasPlaceNameHint;
- (BOOL)hasPlaceTypeHint;
- (BOOL)hasResultProviderId;
- (BOOL)hasVendorId;
- (unsigned int)hash;
- (id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2;
- (id)initWithMapItemToRefine:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 contentProvider:(id)arg3;
- (id)initWithMuid:(unsigned long long)arg1 locationHint:(struct { double x1; double x2; })arg2 placeNameHint:(id)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (id)initWithSearchURLQuery:(id)arg1 coordinate:(struct { double x1; double x2; })arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5;
- (BOOL)isEqual:(id)arg1;
- (id)locationHint;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)placeNameHint;
- (int)placeTypeHint;
- (BOOL)readFrom:(id)arg1;
- (int)resultProviderId;
- (void)setAddressGeocodeAccuracyHint:(int)arg1;
- (void)setAddressHint:(id)arg1;
- (void)setExternalItemId:(id)arg1;
- (void)setFormattedAddressLineHints:(id)arg1;
- (void)setHasAddressGeocodeAccuracyHint:(BOOL)arg1;
- (void)setHasMuid:(BOOL)arg1;
- (void)setHasPlaceTypeHint:(BOOL)arg1;
- (void)setHasResultProviderId:(BOOL)arg1;
- (void)setLocationHint:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setPlaceNameHint:(id)arg1;
- (void)setPlaceTypeHint:(int)arg1;
- (void)setResultProviderId:(int)arg1;
- (void)setVendorId:(id)arg1;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end
