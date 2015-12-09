/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

@interface _DRTopicStatisticsQuery : _DKQuery {
    NSObject<OS_dispatch_queue> * _defaultQueue;
    NSPredicate * _predicate;
    _DRTopicInterestSummary * _summary;
}

@property (retain) _DRTopicInterestSummary *summary;

+ (id)countExpression;
+ (id)sumExpression;
+ (id)topicStatisticsQuery;
+ (id)topicStatisticsQueryWithFilter:(id)arg1;

- (void).cxx_destruct;
- (void)clearSummary;
- (void)executeUsingCoreDataStorage:(id)arg1 reponseQueue:(id)arg2;
- (void)handleResults:(id)arg1 error:(id)arg2 responseQueue:(id)arg3;
- (id)initWithPredicate:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
