/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMessageEntryRecordedAudioView : UIView <CKAudioControllerDelegate> {
    CKAudioController * _audioController;
    CKAudioMediaObject * _audioMediaObject;
    UIImageView * _balloonImageView;
    UIVisualEffectView * _blurView;
    <CKMessageEntryRecordedAudioViewDelegate> * _delegate;
    UIButton * _deleteButton;
    UIImageView * _maskView;
    double  _time;
    NSString * _timeFormat;
    UILabel * _timeLabel;
    UIImage * _waveformImage;
    UIImageView * _waveformImageView;
}

@property (nonatomic, retain) CKAudioController *audioController;
@property (nonatomic, retain) CKAudioMediaObject *audioMediaObject;
@property (nonatomic, retain) UIImageView *balloonImageView;
@property (nonatomic, retain) UIVisualEffectView *blurView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKMessageEntryRecordedAudioViewDelegate> *delegate;
@property (nonatomic, retain) UIButton *deleteButton;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isPlaying;
@property (nonatomic, retain) UIImageView *maskView;
@property (readonly) Class superclass;
@property (nonatomic) double time;
@property (nonatomic, copy) NSString *timeFormat;
@property (nonatomic, retain) UILabel *timeLabel;
@property (nonatomic, retain) UIImage *waveformImage;
@property (nonatomic, retain) UIImageView *waveformImageView;

- (id)audioController;
- (void)audioController:(id)arg1 mediaObjectDidFinishPlaying:(id)arg2;
- (void)audioController:(id)arg1 mediaObjectProgressDidChange:(id)arg2 currentTime:(double)arg3 duration:(double)arg4;
- (void)audioControllerDidPause:(id)arg1;
- (void)audioControllerDidStop:(id)arg1;
- (id)audioMediaObject;
- (id)balloonImageView;
- (id)blurView;
- (void)dealloc;
- (id)delegate;
- (id)deleteButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isPlaying;
- (void)layoutSubviews;
- (id)maskView;
- (void)pause;
- (void)play;
- (void)setAudioController:(id)arg1;
- (void)setAudioMediaObject:(id)arg1;
- (void)setBalloonImageView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteButton:(id)arg1;
- (void)setMaskView:(id)arg1;
- (void)setTime:(double)arg1;
- (void)setTimeFormat:(id)arg1;
- (void)setTimeLabel:(id)arg1;
- (void)setWaveformImage:(id)arg1;
- (void)setWaveformImageView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (double)time;
- (id)timeFormat;
- (id)timeLabel;
- (void)updateProgress;
- (void)updateTimeFormat;
- (void)updateTimeString;
- (id)waveformImage;
- (id)waveformImageView;

@end
