/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFollowUpController : NSObject {
    FLFollowUpController * _followUpController;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) FLFollowUpController *followUpController;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_clearFollowUpItems;
- (void)_postFollowUpItemWithUniqueIdentifier:(id)arg1 title:(id)arg2 informativeText:(id)arg3 actionURL:(id)arg4 actionLabelText:(id)arg5 showNotification:(BOOL)arg6;
- (void)clearFollowUpItems;
- (id)followUpController;
- (id)init;
- (void)postFollowUpItemForIncomingInvitations:(id)arg1;
- (void)postFollowUpItemWithUniqueIdentifier:(id)arg1 title:(id)arg2 informativeText:(id)arg3 actionURL:(id)arg4 actionLabelText:(id)arg5 showNotification:(BOOL)arg6;
- (void)setFollowUpController:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end