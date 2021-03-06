/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUISound : NSObject {
    NSString * _accountIdentifier;
    int  _alertType;
    AVItem * _avItem;
    id /* block */  _completionBlock;
    NSDictionary * _controllerAttributes;
    double  _maxDuration;
    BOOL  _repeats;
    unsigned long  _resolvedSystemSoundID;
    NSString * _resolvedToneIdentifier;
    NSString * _ringtoneName;
    NSString * _songPath;
    unsigned int  _soundBehavior;
    int  _soundType;
    unsigned long  _systemSoundID;
    NSString * _toneIdentifier;
    NSString * _vibrationIdentifier;
    NSDictionary * _vibrationPattern;
}

@property (setter=_setResolvedSoundID:, nonatomic) unsigned long _resolvedSystemSoundID;
@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) int alertType;
@property (nonatomic, retain) AVItem *avItem;
@property (nonatomic, retain) NSDictionary *controllerAttributes;
@property (nonatomic) double maxDuration;
@property (getter=isRepeating, nonatomic) BOOL repeats;
@property (nonatomic, retain) NSString *ringtoneName;
@property (nonatomic, copy) NSString *songPath;
@property (nonatomic) unsigned int soundBehavior;
@property (nonatomic) int soundType;
@property (nonatomic) unsigned long systemSoundID;
@property (nonatomic, copy) NSString *toneIdentifier;
@property (nonatomic, copy) NSString *vibrationIdentifier;
@property (nonatomic, retain) NSDictionary *vibrationPattern;

- (id /* block */)_completionBlock;
- (unsigned long)_resolvedSystemSoundID;
- (id)_resolvedToneIdentifier;
- (void)_setCompletionBlock:(id /* block */)arg1;
- (void)_setResolvedSoundID:(unsigned long)arg1;
- (void)_setResolvedToneIdentifier:(id)arg1;
- (id)accountIdentifier;
- (int)alertType;
- (id)avItem;
- (id)controllerAttributes;
- (void)dealloc;
- (id)description;
- (id)initWithAVItem:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithRingtone:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithSong:(id)arg1 vibrationPattern:(id)arg2 repeats:(BOOL)arg3 maxDuration:(double)arg4 controllerAttributes:(id)arg5;
- (id)initWithSystemSoundID:(unsigned long)arg1 behavior:(unsigned int)arg2 vibrationPattern:(id)arg3;
- (id)initWithSystemSoundPath:(id)arg1 behavior:(unsigned int)arg2 vibrationPattern:(id)arg3;
- (id)initWithToneAlert:(int)arg1 accountIdentifier:(id)arg2 toneIdentifier:(id)arg3 vibrationIdentifier:(id)arg4;
- (BOOL)isPlaying;
- (BOOL)isRepeating;
- (double)maxDuration;
- (BOOL)playInEvironments:(int)arg1 completion:(id /* block */)arg2;
- (id)ringtoneName;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAlertType:(int)arg1;
- (void)setAvItem:(id)arg1;
- (void)setControllerAttributes:(id)arg1;
- (void)setMaxDuration:(double)arg1;
- (void)setRepeats:(BOOL)arg1;
- (void)setRingtoneName:(id)arg1;
- (void)setSongPath:(id)arg1;
- (void)setSoundBehavior:(unsigned int)arg1;
- (void)setSoundType:(int)arg1;
- (void)setSystemSoundID:(unsigned long)arg1;
- (void)setToneIdentifier:(id)arg1;
- (void)setVibrationIdentifier:(id)arg1;
- (void)setVibrationPattern:(id)arg1;
- (id)songPath;
- (unsigned int)soundBehavior;
- (int)soundType;
- (void)stop;
- (unsigned long)systemSoundID;
- (id)toneIdentifier;
- (id)vibrationIdentifier;
- (id)vibrationPattern;

@end
