/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasMainMenuSectionMetrics : NSObject {
    struct CGSize { float x1; float x2; } * _calculatedSizes;
    <MPUExtrasMainMenuSectionMetricsDataSource> * _dataSource;
    float  _desiredCellSpacing;
    UIFontDescriptor * _desiredFontDescriptor;
    float  _desiredWidth;
    float  _fittingCellSpacing;
    UIFontDescriptor * _fittingFontDescriptor;
    float  _fittingWidth;
    int  _itemCount;
    float  _minimumCellSpacing;
    UIFontDescriptor * _minimumFontDescriptor;
    BOOL  _needsUpdate;
    struct CGSize { 
        float width; 
        float height; 
    }  _totalFittingSize;
}

@property (nonatomic) <MPUExtrasMainMenuSectionMetricsDataSource> *dataSource;
@property (nonatomic) float desiredCellSpacing;
@property (nonatomic, retain) UIFontDescriptor *desiredFontDescriptor;
@property (nonatomic) float desiredWidth;
@property (nonatomic, readonly) float fittingCellSpacing;
@property (nonatomic, readonly) UIFontDescriptor *fittingFontDescriptor;
@property (nonatomic) float minimumCellSpacing;
@property (nonatomic, retain) UIFontDescriptor *minimumFontDescriptor;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } totalFittingSize;

- (void).cxx_destruct;
- (struct CGSize { float x1; float x2; })_horizontalFittingSizeForFontDescriptor:(id)arg1 gutterSize:(float)arg2 itemCount:(int)arg3 itemSizes:(out struct CGSize { float x1; float x2; }*)arg4;
- (void)_recalculateSizes;
- (void)_setNeedsUpdate;
- (void)_updateAllMetrics;
- (id)dataSource;
- (void)dealloc;
- (float)desiredCellSpacing;
- (id)desiredFontDescriptor;
- (float)desiredWidth;
- (float)fittingCellSpacing;
- (id)fittingFontDescriptor;
- (float)minimumCellSpacing;
- (id)minimumFontDescriptor;
- (void)setDataSource:(id)arg1;
- (void)setDesiredCellSpacing:(float)arg1;
- (void)setDesiredFontDescriptor:(id)arg1;
- (void)setDesiredWidth:(float)arg1;
- (void)setFittingWidth:(float)arg1;
- (void)setMinimumCellSpacing:(float)arg1;
- (void)setMinimumFontDescriptor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForCellAtIndex:(int)arg1;
- (struct CGSize { float x1; float x2; })totalFittingSize;
- (void)updateSizes;

@end
