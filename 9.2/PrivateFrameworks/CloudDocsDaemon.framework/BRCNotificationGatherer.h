/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotificationGatherer : NSObject {
    id /* block */  _gatherReply;
    BRCNotificationPipe * _pipe;
}

- (void).cxx_destruct;
- (BOOL)continueGatheringWithBatchSize:(int)arg1;
- (void)done;
- (id)init;
- (id)initWithNotificationPipe:(id)arg1 reply:(id /* block */)arg2;
- (void)invalidate;

@end
