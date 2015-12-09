/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryRetrievalCompletionTuple : NSObject {
    id /* block */  _completion;
    int  _linkType;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) int linkType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)tupleWithLinkType:(int)arg1 queue:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)completion;
- (int)linkType;
- (id)queue;
- (void)setCompletion:(id /* block */)arg1;
- (void)setLinkType:(int)arg1;
- (void)setQueue:(id)arg1;

@end
