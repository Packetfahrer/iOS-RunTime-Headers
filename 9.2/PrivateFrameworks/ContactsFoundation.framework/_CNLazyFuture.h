/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNLazyFuture : NSObject <CNFuture> {
    CNFutureTask * _futureTask;
}

@property (getter=isCancelled, readonly) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, readonly) BOOL finished;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)lazyFutureWithBlock:(id /* block */)arg1;

- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (BOOL)cancel;
- (void)dealloc;
- (id)flatMap:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)recover:(id /* block */)arg1;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end
