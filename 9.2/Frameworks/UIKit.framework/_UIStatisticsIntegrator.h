/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatisticsIntegrator : NSObject {
    NSObject<OS_dispatch_queue> * _reportingQueue;
}

+ (void)createSharedInstanceIfNecessary;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)incrementValueBy:(long long)arg1 forKey:(id)arg2;
- (id)init;
- (void)recordDistributionTime:(unsigned long long)arg1 forKey:(id)arg2;
- (void)recordDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)resetDistributionForKey:(id)arg1;
- (void)resetDistributionToValue:(double)arg1 forKey:(id)arg2;
- (void)resetValueForKey:(id)arg1;
- (void)setValue:(long long)arg1 forKey:(id)arg2;

@end
