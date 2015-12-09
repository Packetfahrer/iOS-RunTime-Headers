/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupService : NSObject {
    CKDKeyValueDiskCache * _cache;
    CKDClientContext * _context;
    NSObject<OS_dispatch_source> * _lookupSource;
    CKDOperation * _operationToUseForSettingUpThelookup;
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) CKDClientContext *context;

- (void).cxx_destruct;
- (void)_fetchEmails;
- (void)_finishCompletedRequests;
- (void)_finishPendingRequestsWithError:(id)arg1;
- (void)_saveAndFinishRequestsWithPublicIdentify:(id)arg1 userInfo:(id)arg2 forEmail:(id)arg3;
- (id)context;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;
- (void)scheduleRequest:(id)arg1 forOperation:(id)arg2;
- (void)setContext:(id)arg1;

@end
