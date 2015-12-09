/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
 */

@interface _DRTopicEnumerationQuery : _DKQuery {
    NSObject<OS_dispatch_queue> * _defaultQueue;
    id /* block */  _topicEnumerator;
}

@property (copy) id /* block */ topicEnumerator;

+ (id)enumerationCountExpresion;
+ (id)enumerationSumExpression;
+ (id)topicEnumerationQueryWithPredicate:(id)arg1 topicEnumerator:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)executeUsingCoreDataStorage:(id)arg1 reponseQueue:(id)arg2;
- (void)handleResults:(id)arg1 error:(id)arg2 responseQueue:(id)arg3;
- (id)initWithPredicate:(id)arg1 topicEnumerator:(id /* block */)arg2;
- (void)setTopicEnumerator:(id /* block */)arg1;
- (id /* block */)topicEnumerator;

@end
