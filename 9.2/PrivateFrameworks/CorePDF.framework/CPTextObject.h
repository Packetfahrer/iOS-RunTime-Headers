/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPTextObject : CPChunk {
    struct CGPoint { 
        float x; 
        float y; 
    }  anchor;
    double  maxFontLineHeight;
    float  maxFontSize;
    BOOL  metricInfoCalculated;
}

- (void)calculateMetrics;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)translateObjectYBy:(float)arg1;

@end
