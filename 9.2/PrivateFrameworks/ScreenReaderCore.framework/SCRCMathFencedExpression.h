/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathFencedExpression : SCRCMathRowExpression {
    NSString * _closeString;
    NSString * _openString;
}

@property (nonatomic, copy) NSString *closeString;
@property (nonatomic, copy) NSString *openString;

- (id)_binomialCoefficientContent;
- (BOOL)_isBinomialCoefficient;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;
- (id)closeString;
- (void)dealloc;
- (id)description;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (unsigned int)fractionLevel;
- (id)initWithDictionary:(id)arg1;
- (id)latexDescriptionInMathMode:(BOOL)arg1;
- (id)mathMLAttributes;
- (id)mathMLTag;
- (id)openString;
- (void)setCloseString:(id)arg1;
- (void)setOpenString:(id)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;

@end
