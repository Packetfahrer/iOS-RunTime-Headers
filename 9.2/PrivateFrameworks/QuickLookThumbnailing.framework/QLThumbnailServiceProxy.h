/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailServiceProxy : NSObject {
    NSXPCConnection * _connection;
    NSObject<QLThumbnailsInterface> * _proxy;
}

+ (id)interface;
+ (id)sharedInstance;

- (void)askThumbnailAdditionIndex:(id /* block */)arg1;
- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;

@end
