/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPMUButtonListener : NSObject {
    id /* block */  _buttonHandler;
    struct __IOHIDEventSystemClient { } * _hidSystemClient;
}

@property (nonatomic, copy) id /* block */ buttonHandler;
@property (nonatomic) struct __IOHIDEventSystemClient { }*hidSystemClient;

- (void).cxx_destruct;
- (void)_handleButtonEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_initializeHIDClient;
- (id /* block */)buttonHandler;
- (void)dealloc;
- (struct __IOHIDEventSystemClient { }*)hidSystemClient;
- (id)initWithHandler:(id /* block */)arg1;
- (void)setButtonHandler:(id /* block */)arg1;
- (void)setHidSystemClient:(struct __IOHIDEventSystemClient { }*)arg1;

@end
