/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupBrowseProductsModel : NSObject {
    NSString * _filterString;
    unsigned int  _filterType;
    NSArray * _likelyFilteredProducts;
    NSArray * _likelyProductIdentifiers;
    NSArray * _products;
    NSArray * _unlikelyFilteredProducts;
}

@property (nonatomic, copy) NSString *filterString;
@property (nonatomic) unsigned int filterType;
@property (nonatomic, copy) NSArray *likelyProductIdentifiers;
@property (nonatomic, readonly, copy) NSArray *likelyProducts;
@property (nonatomic, readonly, copy) NSArray *unifiedProducts;
@property (nonatomic, readonly, copy) NSArray *unlikelyProducts;

- (void)_updatedFilteredProducts;
- (void)dealloc;
- (id)filterString;
- (unsigned int)filterType;
- (id)initWithProducts:(id)arg1;
- (id)likelyProductAtIndex:(unsigned int)arg1;
- (id)likelyProductIdentifiers;
- (id)likelyProducts;
- (unsigned int)numberOfLikelyProducts;
- (unsigned int)numberOfUnifiedProducts;
- (unsigned int)numberOfUnlikelyProducts;
- (void)setFilterString:(id)arg1;
- (void)setFilterType:(unsigned int)arg1;
- (void)setLikelyProductIdentifiers:(id)arg1;
- (unsigned int)unfilteredCountForType:(unsigned int)arg1;
- (id)unifiedProductAtIndex:(unsigned int)arg1;
- (id)unifiedProducts;
- (id)unlikelyProductAtIndex:(unsigned int)arg1;
- (id)unlikelyProducts;

@end
