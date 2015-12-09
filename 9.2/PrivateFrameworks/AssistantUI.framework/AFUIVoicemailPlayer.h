/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIVoicemailPlayer : AFUIAudioPlayer {
    VMVoicemail * _voicemailObject;
}

@property (getter=_voicemailObject, setter=_setVoicemailObject:, nonatomic, retain) VMVoicemail *voicemailObject;

- (void).cxx_destruct;
- (id)_audioURL;
- (void)_setVoicemailObject:(id)arg1;
- (void)_updateVoicemailPlayedState:(id)arg1 finished:(BOOL)arg2;
- (int)_voicemailID;
- (id)_voicemailObject;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
- (void)setPlaybackCommand:(id)arg1;

@end
