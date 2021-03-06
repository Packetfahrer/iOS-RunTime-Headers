/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTSiriAssertionPolicy : _VTStatePolicy {
    unsigned char  _siriAssertionState;
}

- (void)_disableAssertionReceived;
- (void)_enableAssertionReceived;
- (void)_registerForSiriAssertionStateUpdates;
- (void)_unregisterForSiriAssertionStateUpdates;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (BOOL)isEnabled;

@end
