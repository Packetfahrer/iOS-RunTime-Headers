/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMNetworkMonitor : NSObject {
    NWPathEvaluator * _evaluator;
}

@property (nonatomic, retain) NWPathEvaluator *evaluator;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)evaluator;
- (BOOL)isMonitoring;
- (BOOL)isNetworkUp;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setEvaluator:(id)arg1;
- (void)startMonitoring;
- (void)stopMonitoring;

@end
