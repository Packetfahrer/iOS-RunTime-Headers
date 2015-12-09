/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVConferenceInterface : IMAVInterface <AVConferenceDelegate> {
    NSMutableDictionary * _avConferences;
    NSLock * _avConferencesLock;
    NSMutableArray * _avConferencesToCleanup;
    BOOL  _duringInit;
    BOOL  _pendingCleanup;
}

@property (nonatomic, readonly) AVConference *controller;

+ (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 contentRectChanged:(BOOL)arg5 cameraWillSwitch:(BOOL)arg6 camera:(unsigned int)arg7 orentation:(unsigned int)arg8 aspect:(struct CGSize { float x1; float x2; })arg9 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg10;
+ (void)_postParticipantScreenAttributesChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orentation:(unsigned int)arg7 aspect:(struct CGSize { float x1; float x2; })arg8;
+ (BOOL)_useMultipleAVConference;

- (void)_avChatDealloc:(id)arg1;
- (id)_avChatForConference:(id)arg1;
- (id)_avChatForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3;
- (void)_cleanupAVInterface;
- (void)_conferenceEnded:(id)arg1;
- (id)_conferenceForAVChat:(id)arg1;
- (void)_configureAVConference:(id)arg1 forChat:(id)arg2;
- (id)_controller;
- (int)_deviceRoleForAVChat:(id)arg1;
- (id)_existingConferenceForAVChat:(id)arg1;
- (id)_existingConferenceForAVChatGUID:(id)arg1;
- (id)_getFaceTimeUUID;
- (BOOL)_hasAVConferenceObjectsForChatsOtherThan:(id)arg1;
- (id)_imAVChatParticipantForConference:(id)arg1 callID:(int)arg2 errorString:(id)arg3;
- (void)_notifyAboutPotentialCallForChat:(id)arg1;
- (void)_queueAVConferenceForCleanup:(id)arg1;
- (void)_setAudioSessionPropertiesForChat:(id)arg1;
- (BOOL)_submitEndCallMetric:(id)arg1 forCallID:(int)arg2;
- (BOOL)_submitLoggingInformation:(id)arg1 forChat:(id)arg2;
- (int)avChat:(id)arg1 endConferenceForUserID:(id)arg2;
- (BOOL)avChat:(id)arg1 generateCallInfoForID:(id)arg2 service:(id)arg3 usingRelay:(BOOL)arg4 callInfo:(id)arg5;
- (void)avChat:(id)arg1 prepareConnectionWithCallInfo:(id)arg2;
- (void)avChat:(id)arg1 setLocalLandscapeAspectRatio:(struct CGSize { float x1; float x2; })arg2 localPortraitAspectRatio:(struct CGSize { float x1; float x2; })arg3;
- (void)avChat:(id)arg1 setMute:(BOOL)arg2;
- (void)avChat:(id)arg1 setPaused:(BOOL)arg2;
- (void)avChat:(id)arg1 setSendingAudio:(BOOL)arg2;
- (void)avChat:(id)arg1 setSendingVideo:(BOOL)arg2;
- (unsigned long long)capabilities;
- (unsigned long long)capabilitiesOfCPU;
- (unsigned long long)capabilitiesOfNetwork;
- (void)chatRelayedStatusChanged:(id)arg1;
- (void)chatStateUpdated;
- (void)conference:(id)arg1 cancelRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 didChangeLocalVariablesForCallID:(int)arg2;
- (void)conference:(id)arg1 didStartSession:(BOOL)arg2 withUserInfo:(id)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3;
- (void)conference:(id)arg1 didStopWithCallID:(int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)conference:(id)arg1 inititiateRelayRequest:(int)arg2 requestDict:(id)arg3;
- (void)conference:(id)arg1 localIPChange:(id)arg2 withCallID:(int)arg3;
- (void)conference:(id)arg1 receivedFirstRemoteFrameForCallID:(int)arg2;
- (void)conference:(id)arg1 reinitializeCallForCallID:(unsigned long)arg2;
- (void)conference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteScreenAttributesChanged:(id)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteVideoAttributesChanged:(id)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(int)arg3;
- (void)conference:(id)arg1 sendRelayUpdate:(int)arg2 updateDict:(id)arg3;
- (void)conference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)conference:(id)arg1 videoQualityNotificationForCallID:(int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)conference:(id)arg1 withCallID:(int)arg2 didPauseAudio:(BOOL)arg3 error:(id)arg4;
- (void)conference:(id)arg1 withCallID:(int)arg2 networkHint:(BOOL)arg3;
- (void)conference:(id)arg1 withCallID:(int)arg2 remoteMediaStalled:(BOOL)arg3;
- (id)controller;
- (void)dealloc;
- (void)endAVConferenceWithChat:(id)arg1 callID:(int)arg2;
- (int)endConferenceForAVChat:(id)arg1;
- (id)getNatIPFromICEData:(id)arg1;
- (void)handleRelayCancel:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayInitate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (void)handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2 callInfo:(id)arg3;
- (id)init;
- (void)initAVInterface;
- (BOOL)isAVInterfaceReady;
- (BOOL)isMuteForAVChat:(id)arg1;
- (BOOL)isPausedForAVChat:(id)arg1;
- (BOOL)isSendingAudioForAVChat:(id)arg1;
- (BOOL)isSendingVideoForAVChat:(id)arg1;
- (void*)localVideoBackLayer;
- (void*)localVideoLayer;
- (id)natTypeForAVChat:(id)arg1;
- (void)processRemoteIPChanged:(id)arg1 fromParticipant:(id)arg2;
- (void*)remoteVideoBackLayerForChat:(id)arg1;
- (void*)remoteVideoLayerForChat:(id)arg1;
- (void)serverDiedForConference:(id)arg1;
- (void)setLocalVideoBackLayer:(void*)arg1;
- (void)setLocalVideoLayer:(void*)arg1;
- (void)setRemoteVideoBackLayer:(void*)arg1 forChat:(id)arg2;
- (void)setRemoteVideoLayer:(void*)arg1 forChat:(id)arg2;
- (void)setRemoteVideoLayersFromChat:(id)arg1 toChat:(id)arg2;
- (void)setRemoteVideoPresentationSize:(struct CGSize { float x1; float x2; })arg1 forChat:(id)arg2;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1 forChat:(id)arg2;
- (BOOL)startPreviewWithError:(id*)arg1;
- (BOOL)stopPreview;
- (BOOL)supportsLayers;
- (BOOL)supportsRelay;
- (void)updateAVChat:(id)arg1 withCallMetadata:(id)arg2;

@end
