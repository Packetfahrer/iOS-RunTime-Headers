/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFFuture : NSObject <MFFuture> {
    NSMutableArray * _completionBlocks;
    NSError * _error;
    id  _result;
    NSConditionLock * _stateLock;
}

@property (getter=isCancelled, readonly) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)future;

- (void)_addCompletionBlock:(id /* block */)arg1;
- (void)_flushCompletionBlocks;
- (BOOL)_nts_isFinished;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (BOOL)cancel;
- (id /* block */)completionHandlerAdapter;
- (void)dealloc;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end
