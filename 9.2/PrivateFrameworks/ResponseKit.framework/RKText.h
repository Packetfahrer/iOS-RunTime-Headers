/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKText : NSObject {
    NSMutableArray * _annotations;
    NSString * _languageID;
    NSString * _processedText;
    NSString * _string;
    BOOL  _trainVerbatim;
    double  _trainingWeight;
}

@property (retain) NSMutableArray *annotations;
@property (retain) NSString *languageID;
@property (retain) NSString *processedText;
@property (retain) NSString *string;
@property BOOL trainVerbatim;
@property double trainingWeight;

+ (id)annotationNameFromType:(unsigned int)arg1;
+ (unsigned int)annotationTypeFromName:(id)arg1;
+ (BOOL)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned int)arg2;
+ (BOOL)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned int)arg2 dataProvider:(id)arg3;
+ (void)initialize;
+ (id)polarityNameFromType:(unsigned int)arg1;
+ (unsigned int)polarityTypeFromName:(id)arg1;

- (void).cxx_destruct;
- (void)annotateRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(unsigned int)arg2;
- (void)annotateRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(unsigned int)arg2 machineGenerated:(BOOL)arg3;
- (unsigned int)annotatedPolarity;
- (id)annotations;
- (BOOL)cleanupData;
- (void)enumerateAnnotationsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(BOOL)arg4;
- (id)languageID;
- (id)lsmText;
- (unsigned int)polarityClassificationWithOptions:(unsigned int)arg1;
- (unsigned int)polarityClassificationWithOptions:(unsigned int)arg1 dataProvider:(id)arg2;
- (id)processedText;
- (void)setAnnotations:(id)arg1;
- (void)setLanguageID:(id)arg1;
- (void)setProcessedText:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTrainVerbatim:(BOOL)arg1;
- (void)setTrainingWeight:(double)arg1;
- (id)string;
- (id)subTextWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)subTextsByPolarity;
- (id)taggedText;
- (BOOL)trainVerbatim;
- (double)trainingWeight;

@end
