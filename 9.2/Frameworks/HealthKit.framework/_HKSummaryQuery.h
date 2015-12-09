/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSummaryQuery : HKQuery {
    id /* block */  _completionHandler;
    NSDate * _endDate;
    NSDate * _startDate;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) id /* block */ completionHandler;
@property (nonatomic, copy) id /* block */ updateHandler;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (Class)_queryServerDataObjectClass;

- (void).cxx_destruct;
- (void)_queue_cleanupAfterDeactivation;
- (void)_queue_configureQueryServerDataObject:(id)arg1;
- (id /* block */)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (BOOL)_requiresValidSampleType;
- (id /* block */)completionHandler;
- (void)deliverResetValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverUpdatedValuesByType:(id)arg1 forQuery:(id)arg2;
- (void)deliverValuesByType:(id)arg1 forQuery:(id)arg2;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id /* block */)updateHandler;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (Class)hd_queryServerClass;
+ (BOOL)hd_requiresPrivateEntitlements;

@end
