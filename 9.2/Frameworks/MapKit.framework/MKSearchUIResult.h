/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchUIResult : NSObject <SearchUIResult> {
    <SearchUIActionButtonItem> * _actionButton;
    id  _attributionObserver;
    <SearchUIAuxiliaryInfo> * _auxiliaryInfo;
    NSArray * _cardSections;
    BOOL  _centered;
    NSURL * _destinationURL;
    NSString * _footnote;
    UIImage * _image;
    CLLocation * _referenceLocation;
    id /* block */  _requestUIUpdateBlock;
    NSArray * _richTextItems;
    NSArray * _rowSections;
    NSString * _secondaryTitle;
    NSString * _title;
    unsigned int  _titleMaxLines;
    int  resultType;
}

@property (nonatomic, readonly) <SearchUIActionButtonItem> *actionButton;
@property (nonatomic, readonly) <SearchUIAuxiliaryInfo> *auxiliaryInfo;
@property (nonatomic, readonly, copy) NSArray *cardSections;
@property (nonatomic, readonly, copy) NSURL *cardURL;
@property (nonatomic, readonly) BOOL centered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *destinationURL;
@property (nonatomic, readonly, copy) NSString *footnote;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) float imageCornerRadius;
@property (nonatomic, readonly) BOOL requiresTwoLineTitles;
@property (nonatomic, readonly) NSArray *richTextItems;
@property (nonatomic, readonly, copy) NSArray *rowSections;
@property (nonatomic, readonly) UIImage *secondaryImage;
@property (nonatomic, readonly, copy) NSString *secondaryTitle;
@property (nonatomic, readonly) BOOL secondaryTitleDetached;
@property (nonatomic, readonly) BOOL shouldCropImageToCircle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned int titleMaxLines;

- (void).cxx_destruct;
- (id)_defaultPrimaryText:(id)arg1;
- (id)_defaultRichTextItems:(id)arg1 currentLocation:(id)arg2;
- (id)_defaultSearchUIActionButtonItem:(id)arg1 currentLocation:(id)arg2;
- (id)_defaultSecondaryText:(id)arg1;
- (int)_resultsTypeFromMapItem:(id)arg1;
- (id)actionButton;
- (id)auxiliaryInfo;
- (id)cardSections;
- (BOOL)centered;
- (void)dealloc;
- (id)destinationURL;
- (void)didDisplayResultWithRefreshHandler:(id /* block */)arg1;
- (id)footnote;
- (id)image;
- (id)imageFromMapItem:(id)arg1 iconSize:(unsigned int)arg2;
- (id)initWithMapItem:(id)arg1 iconSize:(unsigned int)arg2 currentLocation:(id)arg3;
- (id)initWithMapsIndexableFavoriteSpotlightRepresentation:(id)arg1 iconSize:(unsigned int)arg2 currentLocation:(id)arg3;
- (id)richTextItems;
- (id)rowSections;
- (id)secondaryTitle;
- (id)title;
- (unsigned int)titleMaxLines;

@end
