/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnitFormatter : NSFormatter {
    struct UAMeasureFormat { } * _formatter;
    NSString * _localeID;
    BOOL  _modified;
    NSNumberFormatter * _numberFormatter;
    struct UPluralRules { } * _prules;
    int  _unitStyle;
}

@property (copy) NSNumberFormatter *numberFormatter;
@property int unitStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)numberFormatter;
- (void)setNumberFormatter:(id)arg1;
- (void)setUnitStyle:(int)arg1;
- (id)stringForValue1:(double)arg1 unit1:(unsigned int)arg2 value2:(double)arg3 unit2:(unsigned int)arg4;
- (id)stringForValue:(double)arg1 unit:(unsigned int)arg2;
- (id)unitStringFromValue:(double)arg1 unit:(unsigned int)arg2;
- (int)unitStyle;

@end
