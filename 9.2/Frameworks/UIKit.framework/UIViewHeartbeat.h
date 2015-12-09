/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewHeartbeat : NSObject {
    CADisplayLink * _heartbeat;
    SEL  _selector;
    UIView * _view;
}

+ (void)startHeartbeatWithView:(id)arg1 selector:(SEL)arg2 inRunLoopMode:(id)arg3;
+ (void)stopHeartbeatWithView:(id)arg1 selector:(SEL)arg2;

- (void).cxx_destruct;
- (void)_updateDisplayLink:(id)arg1;
- (void)dealloc;

@end
