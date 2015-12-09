/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreOfferMediaItemCollection : MPMediaItemCollection {
    MPStoreOfferContentRating * _collectionContentRating;
    BOOL  _hasHiddenRestrictedContent;
    MPMediaItemCollection * _localCollection;
    MPMediaQuery * _localItemsQuery;
    int  _preferredStoreOfferVariant;
    MPStoreCompletionOfferResponse * _storeOfferResponse;
    NSArray * _unmergedStoreMediaItems;
}

@property (nonatomic, readonly) BOOL isCollectionOfferPresentable;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *itemsByRemovingLocalItems;
@property (nonatomic, readonly) NSArray *itemsByRemovingStoreOffers;

+ (id)albumOrderedChildItemIDsForLookupCollectionPropertyValues:(id)arg1;
+ (id)collectionLookupKeyForMediaProperty:(id)arg1;
+ (id)contentRatingForCollectionPropertyValues:(id)arg1;
+ (id)defaultPropertyValues;
+ (id)mediaValueForStoreLookupCollectionPropertyValues:(id)arg1 mediaProperty:(id)arg2;
+ (id)offerDictionariesForLookupCollectionPropertyValues:(id)arg1;
+ (int)offerPassTypeForLookupCollectionPropertyValues:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_checkIsUsableOffer;
- (BOOL)_hasRestrictedContent;
- (void)_loadLocalCollection;
- (id)_lookupOfferDictionaries;
- (BOOL)_offeredItemAlreadyExists;
- (id)buyOfferForVariant:(int)arg1;
- (id)copyByOverlayingMediaItemsWithItemsQuery:(id)arg1 preferredStoreOfferVariant:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countOfItemsByRemovingLocalItems;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasDownloadableStoreOfferItemsForVariant:(int)arg1;
- (BOOL)hasPurchasableStoreOfferItemsForVariant:(int)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(int)arg2;
- (id)initWithStoreOfferResponse:(id)arg1 preferredStoreOfferVariant:(int)arg2 offerMediaItems:(id)arg3 localItemsQuery:(id)arg4;
- (BOOL)isCheaperToPurchaseIndividualItems;
- (BOOL)isCollectionOfferPresentable;
- (BOOL)isDownloadable;
- (BOOL)isEqual:(id)arg1;
- (id)itemsByRemovingLocalItems;
- (id)itemsByRemovingStoreOffers;
- (id)mediaLibrary;
- (unsigned long long)persistentID;
- (int)preferredStoreOfferVariant;
- (id)title;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;

@end