/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKGraphSeriesDataSource : NSObject {
    <HKGraphSeriesDataSourceDelegate> * _delegate;
    NSDate * _firstBlockStartDate;
    int  _maximumZoom;
    int  _minimumZoom;
}

@property (nonatomic) <HKGraphSeriesDataSourceDelegate> *delegate;
@property (nonatomic, readonly) NSDate *firstBlockStartDate;
@property (nonatomic) int maximumZoom;
@property (nonatomic) int minimumZoom;

- (void).cxx_destruct;
- (struct { int x1; int x2; })blockPathForX:(id)arg1 zoom:(int)arg2;
- (void)blocksRequestedFromPath:(struct { int x1; int x2; })arg1 toPath:(struct { int x1; int x2; })arg2;
- (id)cachedBlockForPath:(struct { int x1; int x2; })arg1;
- (id)delegate;
- (id)firstBlockStartDate;
- (id)init;
- (int)maximumZoom;
- (int)minimumZoom;
- (void)setDelegate:(id)arg1;
- (void)setMaximumZoom:(int)arg1;
- (void)setMinimumZoom:(int)arg1;

@end
