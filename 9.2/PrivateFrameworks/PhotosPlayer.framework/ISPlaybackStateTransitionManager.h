/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlaybackStateTransitionManager : NSObject <ISPlaybackSpecObserver> {
    int  __currentRequestID;
    BOOL  __didHideCrossfadeContentForCurrentPlayback;
    BOOL  __needsUpdateAnimations;
    NSArray * __stillImageAnimationsForBeginningPlayback;
    NSArray * __stillImageAnimationsForBeginningVitality;
    NSArray * __stillImageAnimationsForEndingPlayback;
    NSArray * __stillImageAnimationsForEndingVitality;
    NSArray * __stillImageFilters;
    NSArray * __videoAnimationsForBeginningPlayback;
    NSArray * __videoAnimationsForBeginningVitality;
    NSArray * __videoAnimationsForEndingPlayback;
    NSArray * __videoAnimationsForEndingVitality;
    NSArray * __videoFilters;
    int  _currentPlaybackState;
    <ISPlaybackStateTransitionManagerDelegate> * _delegate;
    struct { 
        BOOL respondsToDidEndTransition; 
    }  _delegateFlags;
    double  _endVitalityTransitionDuration;
    NSHashTable * _outputs;
    ISPlaybackSpec * _playbackSpec;
    float  _progress;
}

@property (setter=_setCurrentRequestID:, nonatomic) int _currentRequestID;
@property (setter=_setDidHideCrossfadeContentForCurrentPlayback:, nonatomic) BOOL _didHideCrossfadeContentForCurrentPlayback;
@property (setter=_setNeedsUpdateAnimations:, nonatomic) BOOL _needsUpdateAnimations;
@property (setter=_setStillImageAnimationsForBeginningPlayback:, nonatomic, retain) NSArray *_stillImageAnimationsForBeginningPlayback;
@property (setter=_setStillImageAnimationsForBeginningVitality:, nonatomic, retain) NSArray *_stillImageAnimationsForBeginningVitality;
@property (setter=_setStillImageAnimationsForEndingPlayback:, nonatomic, retain) NSArray *_stillImageAnimationsForEndingPlayback;
@property (setter=_setStillImageAnimationsForEndingVitality:, nonatomic, retain) NSArray *_stillImageAnimationsForEndingVitality;
@property (setter=_setStillImageFilters:, nonatomic, retain) NSArray *_stillImageFilters;
@property (setter=_setVideoAnimationsForBeginningPlayback:, nonatomic, retain) NSArray *_videoAnimationsForBeginningPlayback;
@property (setter=_setVideoAnimationsForBeginningVitality:, nonatomic, retain) NSArray *_videoAnimationsForBeginningVitality;
@property (setter=_setVideoAnimationsForEndingPlayback:, nonatomic, retain) NSArray *_videoAnimationsForEndingPlayback;
@property (setter=_setVideoAnimationsForEndingVitality:, nonatomic, retain) NSArray *_videoAnimationsForEndingVitality;
@property (setter=_setVideoFilters:, nonatomic, retain) NSArray *_videoFilters;
@property (nonatomic, readonly) int currentPlaybackState;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ISPlaybackStateTransitionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endVitalityTransitionDuration;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSHashTable *outputs;
@property (nonatomic, retain) ISPlaybackSpec *playbackSpec;
@property (nonatomic, readonly) float progress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_currentRequestID;
- (BOOL)_didHideCrossfadeContentForCurrentPlayback;
- (void)_invalidateAnimations;
- (BOOL)_needsUpdateAnimations;
- (void)_notifyDelegateDidEndTransitionToPlaybackState:(int)arg1 forRequestID:(int)arg2 finished:(BOOL)arg3;
- (void)_setCurrentRequestID:(int)arg1;
- (void)_setDidHideCrossfadeContentForCurrentPlayback:(BOOL)arg1;
- (void)_setNeedsUpdateAnimations:(BOOL)arg1;
- (void)_setStillImageAnimationsForBeginningPlayback:(id)arg1;
- (void)_setStillImageAnimationsForBeginningVitality:(id)arg1;
- (void)_setStillImageAnimationsForEndingPlayback:(id)arg1;
- (void)_setStillImageAnimationsForEndingVitality:(id)arg1;
- (void)_setStillImageFilters:(id)arg1;
- (void)_setVideoAnimationsForBeginningPlayback:(id)arg1;
- (void)_setVideoAnimationsForBeginningVitality:(id)arg1;
- (void)_setVideoAnimationsForEndingPlayback:(id)arg1;
- (void)_setVideoAnimationsForEndingVitality:(id)arg1;
- (void)_setVideoFilters:(id)arg1;
- (id)_stillImageAnimationsForBeginningPlayback;
- (id)_stillImageAnimationsForBeginningVitality;
- (id)_stillImageAnimationsForEndingPlayback;
- (id)_stillImageAnimationsForEndingVitality;
- (id)_stillImageFilters;
- (void)_updateAnimationsIfNeeded;
- (id)_videoAnimationsForBeginningPlayback;
- (id)_videoAnimationsForBeginningVitality;
- (id)_videoAnimationsForEndingPlayback;
- (id)_videoAnimationsForEndingVitality;
- (id)_videoFilters;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (int)currentPlaybackState;
- (id)delegate;
- (double)endVitalityTransitionDuration;
- (void)hideCrossfadeContentWithBlurAndScale:(BOOL)arg1 withDuration:(double)arg2;
- (id)init;
- (id)outputs;
- (int)performTransitionToPlaybackState:(int)arg1 withProgress:(float)arg2;
- (id)playbackSpec;
- (void)playbackSpecDidChange:(id)arg1;
- (float)progress;
- (void)setDelegate:(id)arg1;
- (void)setEndVitalityTransitionDuration:(double)arg1;
- (void)setOutputs:(id)arg1;
- (void)setPlaybackSpec:(id)arg1;
- (void)willTransitionToPlaybackState:(int)arg1 withProgress:(float)arg2;

@end