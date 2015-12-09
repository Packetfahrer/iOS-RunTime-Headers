/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
 */

@interface HKDataUnitGroupChartingRules : NSObject {
    int  _allowedDecimalPrecision;
    int  _defaultChartStyle;
    int  _defaultStyle;
    NSArray * _defaultYAxisChartBoundsRules;
    NSDictionary * _defaultYAxisChartBoundsRulesByUnit;
    <HKInteractiveChartsAxisScalingRule> * _interactiveChartsAxisScalingRule;
    NSDictionary * _perUnitDecimalPrecision;
    NSMutableDictionary * _rulesByTimeScope;
    BOOL  _shouldConnectSamplesWithLines;
    BOOL  _shouldHideAverageLine;
    BOOL  _shouldOverrideMinYValue;
    BOOL  _shouldPadMinMaxValues;
    BOOL  _shouldStartDayAtNoon;
}

@property (nonatomic, readonly) int defaultChartStyle;
@property (nonatomic, retain) NSArray *defaultYAxisChartBoundsRules;
@property (nonatomic, retain) NSDictionary *defaultYAxisChartBoundsRulesByUnit;
@property (nonatomic, retain) <HKInteractiveChartsAxisScalingRule> *interactiveChartsAxisScalingRule;
@property (nonatomic) BOOL shouldConnectSamplesWithLines;
@property (nonatomic) BOOL shouldHideAverageLine;
@property (nonatomic) BOOL shouldOverrideMinYValue;
@property (nonatomic) BOOL shouldPadMinMaxValues;
@property (nonatomic) BOOL shouldStartDayAtNoon;

- (void).cxx_destruct;
- (id)_ruleForKey:(id)arg1 timeScope:(int)arg2;
- (void)_setRule:(id)arg1 forKey:(id)arg2 timeScope:(int)arg3;
- (int)allowedDecimalPrecisionForUnit:(id)arg1;
- (void)calculateAdjustedBoundsForMin:(double)arg1 max:(double)arg2 minOut:(double*)arg3 maxOut:(double*)arg4 decimalPrecision:(int*)arg5 unit:(id)arg6;
- (float)chartPointLineWidthForTimeScope:(int)arg1;
- (float)chartPointRadiusForTimeScope:(int)arg1;
- (int)chartStyleForTimeScope:(int)arg1;
- (int)defaultChartStyle;
- (id)defaultYAxisChartBoundsRules;
- (id)defaultYAxisChartBoundsRulesByUnit;
- (id)defaultYAxisChartBoundsRulesForUnit:(id)arg1;
- (id)initWithDefaultChartStyle:(int)arg1;
- (id)interactiveChartsAxisScalingRule;
- (id)intervalComponentsForTimeScope:(int)arg1;
- (void)setAllowedDecimalPrecision:(int)arg1 perUnitPrecision:(id)arg2;
- (void)setChartPointLineWidth:(float)arg1 forTimeScope:(int)arg2;
- (void)setChartPointRadius:(float)arg1 forTimeScope:(int)arg2;
- (void)setChartStyle:(int)arg1 forTimeScope:(int)arg2;
- (void)setDefaultYAxisChartBoundsRules:(id)arg1;
- (void)setDefaultYAxisChartBoundsRulesByUnit:(id)arg1;
- (void)setInteractiveChartsAxisScalingRule:(id)arg1;
- (void)setIntervalComponents:(id)arg1 forTimeScope:(int)arg2;
- (void)setShouldConnectSamplesWithLines:(BOOL)arg1;
- (void)setShouldHideAverageLine:(BOOL)arg1;
- (void)setShouldOverrideMinYValue:(BOOL)arg1;
- (void)setShouldPadMinMaxValues:(BOOL)arg1;
- (void)setShouldStartDayAtNoon:(BOOL)arg1;
- (BOOL)shouldConnectSamplesWithLines;
- (BOOL)shouldHideAverageLine;
- (BOOL)shouldOverrideMinYValue;
- (BOOL)shouldPadMinMaxValues;
- (BOOL)shouldStartDayAtNoon;

@end
