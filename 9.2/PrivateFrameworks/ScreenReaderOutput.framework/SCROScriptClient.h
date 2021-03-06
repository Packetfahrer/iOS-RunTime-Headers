/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROScriptClient : NSObject {
    SCROConnection * _connection;
    BOOL  _isReady;
    NSLock * _lock;
    SCRCTargetSelectorTimer * _timer;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedClient;

- (BOOL)_isReady;
- (void)_killConnection;
- (id)_lazyConnection;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleCallback:(id)arg1;
- (id)init;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (BOOL)runScriptFile:(id)arg1;

@end
