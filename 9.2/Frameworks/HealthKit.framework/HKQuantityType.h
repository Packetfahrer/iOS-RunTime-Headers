/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantityType : HKSampleType {
    int  _aggregationStyle;
    HKUnit * _canonicalUnit;
    long  _canonicalUnitToken;
    NSString * _unitString;
}

@property (readonly) int aggregationStyle;
@property (nonatomic, readonly) HKUnit *canonicalUnit;
@property (nonatomic, readonly) _HKDimension *dimension;

+ (void)_insertCode:(int)arg1 forIdentifier:(id)arg2;
+ (id)_quantityTypeWithCode:(int)arg1;

- (void).cxx_destruct;
- (id)_initWithDefinition:(struct { int x1; char *x2; char *x3; int x4; char *x5; char *x6; }*)arg1;
- (int)aggregationStyle;
- (id)canonicalUnit;
- (id)dimension;
- (BOOL)isCompatibleWithUnit:(id)arg1;
- (void)validateUnit:(id)arg1;
- (void)validateUnitFromString:(id)arg1;

@end
