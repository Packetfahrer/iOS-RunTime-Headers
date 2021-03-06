/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRReachabilityMonitor : NSObject {
    BOOL  _isNetworkReachable;
    NSObject<OS_dispatch_queue> * _queue;
    NSHashTable * _reachabilityObservers;
    struct __SCNetworkReachability { } * _reachabilityRef;
}

@property (nonatomic) BOOL isNetworkReachable;

+ (id)sharedReachabilityMonitor;

- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (BOOL)isNetworkReachable;
- (void)removeObserver:(id)arg1;
- (void)setIsNetworkReachable:(BOOL)arg1;

@end
