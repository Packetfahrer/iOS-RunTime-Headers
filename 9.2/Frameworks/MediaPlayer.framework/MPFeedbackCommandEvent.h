/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFeedbackCommandEvent : MPRemoteCommandEvent {
    BOOL  _negative;
}

@property (getter=isNegative, nonatomic, readonly) BOOL negative;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (BOOL)isNegative;

@end
