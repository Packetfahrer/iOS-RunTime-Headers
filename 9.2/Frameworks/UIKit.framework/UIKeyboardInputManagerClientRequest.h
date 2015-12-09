/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyboardInputManagerClientRequest : NSObject {
    unsigned int  _errorCount;
    NSInvocation * _invocation;
}

@property (nonatomic) unsigned int errorCount;
@property (nonatomic, readonly) NSInvocation *invocation;

+ (id)untargetedInvocationWithInvocation:(id)arg1 withCompletion:(BOOL)arg2;

- (void)dealloc;
- (unsigned int)errorCount;
- (id)initWithInvocation:(id)arg1;
- (id)invocation;
- (void)setErrorCount:(unsigned int)arg1;

@end
