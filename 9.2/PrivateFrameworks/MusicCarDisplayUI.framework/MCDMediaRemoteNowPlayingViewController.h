/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDMediaRemoteNowPlayingViewController : UIViewController <MCDNowPlayingViewControllerDataSource, MCDNowPlayingViewControllerDelegate, MPUNowPlayingDelegate> {
    struct { 
        unsigned int play : 1; 
        unsigned int pause : 1; 
        unsigned int stop : 1; 
        unsigned int togglePlayPause : 1; 
        unsigned int nextTrack : 1; 
        unsigned int previousTrack : 1; 
        unsigned int toggleRecord : 1; 
        unsigned int fastForward : 1; 
        unsigned int rewind : 1; 
        unsigned int record : 1; 
        unsigned int changePlaybackRate : 1; 
        unsigned int likeTrack : 1; 
        unsigned int banTrack : 1; 
        unsigned int rateTrack : 1; 
        unsigned int bookmarkTrack : 1; 
        unsigned int fastForwardWithInterval : 1; 
        unsigned int rewindWithInterval : 1; 
    }  __supportedCommandsFlags;
    UIAlertController * _actionSheetAlertController;
    double  _elapsedTime;
    NSString * _expectedPlaybackBundleIdentifier;
    BOOL  _isScrubbing;
    MPUNowPlayingController * _nowPlayingController;
    NSDictionary * _nowPlayingInfo;
    MCDNowPlayingViewController * _nowPlayingViewController;
    BOOL  _observingMediaRemoteCommandChanges;
    NSDictionary * _supportedCommands;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *expectedPlaybackBundleIdentifier;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSDictionary *nowPlayingInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)_bestCommandForFastForwardPosition;
- (unsigned int)_bestCommandForRewindPosition;
- (struct _MRMediaRemoteCommandInfo { }*)_mediaCommandInfoForCommand:(unsigned int)arg1;
- (void)_nowPlayingAppChangedIsPlaying:(id)arg1;
- (BOOL)_nowPlayingBundleIDMatchesExpectedID;
- (void)_performActionForRightCommand;
- (void)_presentLikeBanActionSheet;
- (double)_skipBackwardInterval;
- (double)_skipForwardInterval;
- (id)_skipIntervalButtonImageForInterval:(double)arg1;
- (void)_startObservingRemoteCommandChanges;
- (void)_stopObservingRemoteCommandChanges;
- (void)_supportedControlsDidUpdate:(id)arg1;
- (id)_titleForFeedbackCommand:(unsigned int)arg1;
- (BOOL)_trackIsLiked;
- (void)_updateAllContent;
- (void)_updateNowPlayingDictionary:(id)arg1;
- (void)_updatePlayControls;
- (void)_updateSupportedCommands;
- (void)_updateSupportedCommandsWithArray:(id)arg1;
- (id)albumTextForNowPlayingController:(id)arg1;
- (id)artistTextForNowPlayingController:(id)arg1;
- (id)backgroundArtForNowPlayingController:(id)arg1;
- (void)dealloc;
- (id)expectedPlaybackBundleIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingApplicationDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(BOOL)arg2;
- (id)nowPlayingInfo;
- (void)nowPlayingViewController:(id)arg1 didSendAction:(int)arg2 state:(int)arg3;
- (BOOL)nowPlayingViewController:(id)arg1 shouldDisplayButton:(int)arg2 withImage:(out id*)arg3 tinted:(out BOOL*)arg4;
- (BOOL)nowPlayingViewControllerIsPlaying:(id)arg1;
- (BOOL)nowPlayingViewControllerIsShowingExplicitTrack:(id)arg1;
- (double)playbackDurationForNowPlayingViewController:(id)arg1 withElapsedTime:(out double*)arg2;
- (id)preferredFocusedItem;
- (void)setExpectedPlaybackBundleIdentifier:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (id)titleForNowPlayingController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
