/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCISlowmoResults : NSObject {
    double  _minTimeBetweenFrames;
    NSMutableDictionary * _results;
    BOOL  _verbose;
}

@property double minTimeBetweenFrames;
@property (readonly) NSDictionary *results;
@property BOOL verbose;

- (void)addFrame:(double)arg1 frameValue:(int)arg2;
- (void)addVerboseResult:(id)arg1;
- (id)copyClusters;
- (void)dumpClusters;
- (id)init;
- (void)mergeClusters:(id)arg1 cluster2:(id)arg2;
- (double)minTimeBetweenFrames;
- (void)performPass1Clustering;
- (void)performPass2Clustering;
- (id)results;
- (void)setMinTimeBetweenFrames:(double)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setVerbose:(BOOL)arg1;
- (BOOL)verbose;
- (void)writeToFile:(id)arg1;

@end
