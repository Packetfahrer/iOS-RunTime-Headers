/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverAllContactsOperation : CKOperation {
    id /* block */  _discoverAllContactsCompletionBlock;
    NSMutableArray * _discoveredUserInfos;
}

@property (nonatomic, copy) id /* block */ discoverAllContactsCompletionBlock;
@property (nonatomic, retain) NSMutableArray *discoveredUserInfos;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (id /* block */)discoverAllContactsCompletionBlock;
- (id)discoveredUserInfos;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setDiscoverAllContactsCompletionBlock:(id /* block */)arg1;
- (void)setDiscoveredUserInfos:(id)arg1;

@end
