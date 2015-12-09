/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@interface ChartLabelInfoManager : NSObject {
    NSMutableArray * _integerLabelInfoArray;
    NSMutableArray * _monthLabelInfoArrays;
    BOOL  _use24hrTime;
    ChartLabelInfo * _yAxisLabelInfo;
}

+ (struct __CFString { }*)_CFDateFormatterPropertyForMonthLabelLength:(int)arg1;
+ (id)chartLabelFont;
+ (void)clearSharedManager;
+ (id)sharedLabelInfoManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)labelInfoForYAxis;
- (id)labelInfoWithString:(id)arg1;
- (id)labelInfoWithUnsignedInteger:(unsigned int)arg1;
- (id)monthLabelInfoArrayForLabelLength:(int)arg1;
- (void)resetLocale;
- (BOOL)use24hrTime;

@end