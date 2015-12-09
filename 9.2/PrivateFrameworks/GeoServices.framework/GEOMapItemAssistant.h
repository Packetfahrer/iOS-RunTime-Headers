/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAssistant : NSObject <GEOMapItemPrivate> {
    NSDictionary * _addressDictionary;
    NSString * _attributionID;
    NSURL * _businessURL;
    GEOLocation * _location;
    unsigned long long  _muid;
    NSString * _name;
    float  _normalizedUserRatingScore;
    NSString * _phoneNumber;
    GEOPlace * _place;
    unsigned int  _sampleSizeForUserRatingScore;
}

@property (getter=_acceptsApplePay, nonatomic, readonly) BOOL acceptsApplePay;
@property (getter=_additionalPlaceInfos, nonatomic, readonly) NSArray *additionalPlaceInfos;
@property (nonatomic, readonly) NSDictionary *addressDictionary;
@property (getter=_addressGeocodeAccuracy, nonatomic, readonly) int addressGeocodeAccuracy;
@property (getter=_areaInMeters, nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (getter=_attribution, nonatomic, readonly) GEOMapItemPlaceAttribution *attribution;
@property (getter=_businessClaim, nonatomic, readonly) GEOPDBusinessClaim *businessClaim;
@property (getter=_businessURL, nonatomic, readonly) NSString *businessURL;
@property (nonatomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (getter=_clientAttributes, nonatomic, readonly) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic, readonly) int contactAddressType;
@property (nonatomic, readonly) BOOL contactIsMe;
@property (nonatomic, readonly) NSString *contactName;
@property (nonatomic, readonly) NSString *contactSpokenName;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegionOrNil;
@property (getter=isDisputed, nonatomic, readonly) BOOL disputed;
@property (nonatomic, readonly) NSData *encodedData;
@property (getter=_encyclopedicAttribution, nonatomic, readonly) GEOMapItemAttribution *encyclopedicAttribution;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventName;
@property (getter=_factoids, nonatomic, readonly) NSArray *factoids;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) GEOAddress *geoAddress;
@property (nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (getter=_goodForKids, nonatomic, readonly) BOOL goodForKids;
@property (getter=_hasAcceptsApplePayAmenity, nonatomic, readonly) BOOL hasAcceptsApplePayAmenity;
@property (getter=_hasAnyAmenities, nonatomic, readonly) BOOL hasAnyAmenities;
@property (getter=_hasAreaInMeters, nonatomic, readonly) BOOL hasAreaInMeters;
@property (getter=_hasBusinessClaim, nonatomic, readonly) BOOL hasBusinessClaim;
@property (getter=_hasCurrentOperatingHours, nonatomic, readonly) BOOL hasCurrentOperatingHours;
@property (getter=_hasDelivery, nonatomic, readonly) BOOL hasDelivery;
@property (getter=_hasDeliveryAmenity, nonatomic, readonly) BOOL hasDeliveryAmenity;
@property (getter=_hasFlyover, nonatomic, readonly) BOOL hasFlyover;
@property (getter=_hasGoodForKidsAmenity, nonatomic, readonly) BOOL hasGoodForKidsAmenity;
@property (getter=_hasMUID, nonatomic, readonly) BOOL hasMUID;
@property (getter=_hasOperatingHours, nonatomic, readonly) BOOL hasOperatingHours;
@property (getter=_hasPairOfFactoids, nonatomic, readonly) BOOL hasPairOfFactoids;
@property (getter=_hasPriceRange, nonatomic, readonly) BOOL hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) BOOL hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) BOOL hasResultProviderID;
@property (getter=_hasTakesReservationsAmenity, nonatomic, readonly) BOOL hasTakesReservationsAmenity;
@property (getter=_hasTelephone, nonatomic, readonly) BOOL hasTelephone;
@property (getter=_hasTextBlock, nonatomic, readonly) BOOL hasTextBlock;
@property (getter=_hasTransit, nonatomic, readonly) BOOL hasTransit;
@property (getter=_hasUserRatingScore, nonatomic, readonly) BOOL hasUserRatingScore;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isEventAllDay;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) BOOL needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned int openingHoursOptions;
@property (getter=_operatingHours, nonatomic, readonly) NSArray *operatingHours;
@property (getter=_photos, nonatomic, readonly) NSArray *photos;
@property (getter=_photosAttribution, nonatomic, readonly) GEOMapItemPhotosAttribution *photosAttribution;
@property (getter=_place, nonatomic, readonly) GEOPlace *place;
@property (getter=_placeData, nonatomic, readonly) GEOPDPlace *placeData;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (getter=_placeType, nonatomic, readonly) int placeType;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_priceRange, nonatomic, readonly) unsigned int priceRange;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (nonatomic, readonly) int referenceFrame;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_resultSnippetDistanceDisplayThreshold, nonatomic, readonly) unsigned int resultSnippetDistanceDisplayThreshold;
@property (getter=_resultSnippetLocationString, nonatomic, readonly) NSString *resultSnippetLocationString;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_roadAccessPoints, nonatomic, readonly) NSArray *roadAccessPoints;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (getter=_takesReservations, nonatomic, readonly) BOOL takesReservations;
@property (getter=_telephone, nonatomic, readonly) NSString *telephone;
@property (getter=_textBlockText, nonatomic, readonly) NSString *textBlockText;
@property (getter=_textBlockTitle, nonatomic, readonly) NSString *textBlockTitle;
@property (nonatomic, readonly) NSTimeZone *timezone;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOMapItemTransitAttribution> *transitAttribution;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (getter=isValid, nonatomic, readonly) BOOL valid;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;

- (BOOL)_acceptsApplePay;
- (id)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (double)_areaInMeters;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_asPlaceInfo;
- (id)_attribution;
- (id)_businessClaim;
- (id)_businessURL;
- (id)_clientAttributes;
- (unsigned long long)_customIconID;
- (id)_disambiguationName;
- (id)_encyclopedicAttribution;
- (id)_factoids;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (BOOL)_goodForKids;
- (BOOL)_hasAcceptsApplePayAmenity;
- (BOOL)_hasAnyAmenities;
- (BOOL)_hasAreaInMeters;
- (BOOL)_hasBusinessClaim;
- (BOOL)_hasCurrentOperatingHours;
- (BOOL)_hasDelivery;
- (BOOL)_hasDeliveryAmenity;
- (BOOL)_hasFlyover;
- (BOOL)_hasGoodForKidsAmenity;
- (BOOL)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (BOOL)_hasMUID;
- (BOOL)_hasOperatingHours;
- (BOOL)_hasPairOfFactoids;
- (BOOL)_hasPriceRange;
- (BOOL)_hasResolvablePartialInformation;
- (BOOL)_hasResultProviderID;
- (BOOL)_hasTakesReservationsAmenity;
- (BOOL)_hasTelephone;
- (BOOL)_hasTextBlock;
- (BOOL)_hasTransit;
- (BOOL)_hasTravelTimeForTransportType:(int)arg1;
- (BOOL)_hasUserRatingScore;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_mapItemByStrippingOptionalData;
- (unsigned long long)_muid;
- (BOOL)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned int)_openingHoursOptions;
- (id)_operatingHours;
- (id)_photos;
- (id)_photosAttribution;
- (id)_place;
- (id)_placeData;
- (id)_placeDataAsData;
- (int)_placeType;
- (id)_poiSurveyURLString;
- (unsigned int)_priceRange;
- (id)_providerURL;
- (int)_recommendedTransportType;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (id)_resultSnippetLocationString;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_spokenAddressForLocale:(id)arg1;
- (id)_styleAttributes;
- (BOOL)_takesReservations;
- (id)_telephone;
- (id)_textBlockText;
- (id)_textBlockTitle;
- (id)_transitAttribution;
- (id)_transitInfo;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_urlForPhotoWithUID:(id)arg1;
- (id)_urlForReview:(id)arg1;
- (id)_urlForWritingAReview;
- (id)_vendorID;
- (id)_webURL;
- (id)addressDictionary;
- (id)areasOfInterest;
- (struct { double x1; double x2; })centerCoordinate;
- (int)contactAddressType;
- (BOOL)contactIsMe;
- (id)contactName;
- (id)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (id)displayMapRegion;
- (id)displayMapRegionOrNil;
- (id)encodedData;
- (id)eventDate;
- (id)eventName;
- (id)geoAddress;
- (id)geoFenceMapRegion;
- (id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned int)arg9 normalizedUserRatingScore:(float)arg10;
- (BOOL)isDisputed;
- (BOOL)isEventAllDay;
- (BOOL)isValid;
- (id)name;
- (int)referenceFrame;
- (id)spokenNameForLocale:(id)arg1;
- (id)timezone;

@end
