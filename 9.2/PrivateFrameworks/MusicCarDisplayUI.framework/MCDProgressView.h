/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDProgressView : UIView {
    BOOL  _isLive;
    NSLayoutConstraint * _leftConstant;
    UILabel * _liveLabel;
    float  _progress;
    BOOL  _progressActive;
    MCDProgressBarView * _progressBarView;
    NSLayoutConstraint * _rightConstant;
    UILabel * _timeLabel;
    UILabel * _timeRemainingLabel;
}

- (void).cxx_destruct;
- (void)_addConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setPlaybackTime:(double)arg1 duration:(double)arg2;

@end
