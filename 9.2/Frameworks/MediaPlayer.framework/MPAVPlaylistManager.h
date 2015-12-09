/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVPlaylistManager : NSObject <MPAVQueueCoordinatorDataSource, MPQueueBehaviorManaging, MPQueueFeederDelegate, NSCoding> {
    NSString * _audioSessionModeOverride;
    MPAVController * _avController;
    BOOL  _changingPlayer;
    BOOL  _changingPlaylistFeeder;
    MPAVItem * _currentItem;
    <MPAVPlaylistManagerDelegate> * _delegate;
    BOOL  _goToTargetIndex;
    int  _lastSelectionDirection;
    int  _playbackMode;
    MPQueuePlayer * _player;
    MPQueueFeeder * _playlistFeeder;
    MPAVQueueCoordinator * _queueCoordinator;
    int  _repeatMode;
    int  _targetIndex;
    BOOL  _updatedAudioSessionMode;
}

@property (nonatomic, readonly) BOOL allowsUserVisibleUpcomingItems;
@property (nonatomic, retain) NSString *audioSessionModeOverride;
@property (nonatomic) MPAVController *avController;
@property (nonatomic, readonly) BOOL canSeek;
@property (nonatomic, readonly) BOOL canSkipToPreviousItem;
@property (getter=isChangingPlayer, nonatomic, readonly) BOOL changingPlayer;
@property (getter=isChangingPlaylistFeeder, nonatomic, readonly) BOOL changingPlaylistFeeder;
@property (readonly) int currentIndex;
@property (readonly) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPAVPlaylistManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int playbackMode;
@property (readonly) MPQueuePlayer *player;
@property (nonatomic, readonly) MPQueueFeeder *playlistFeeder;
@property (readonly) MPAVQueueCoordinator *queueCoordinator;
@property int repeatMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL userCanChangeShuffleAndRepeatType;

- (void).cxx_destruct;
- (void)_applyVolumeNormalizationForQueuedItems;
- (void)_awakeFromCoder:(id)arg1;
- (void)_handleDownloadCancelledForDownloadToken:(unsigned long long)arg1;
- (id)_itemToFollowItemIndex:(int)arg1 skipUnavailableContent:(BOOL)arg2;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (int)_nextItemIndex:(int)arg1 repeatMode:(int)arg2;
- (void)_notifyQueueFeederContentsChanged;
- (unsigned int)_playbackIndexForDelta:(int)arg1 fromIndex:(unsigned int)arg2 ignoreElapsedTime:(BOOL)arg3;
- (int)_prepareToQueuePlaybackIndex:(int)arg1 selectionDirection:(int)arg2;
- (id)_queuePlayerFeederItemForIndex:(int)arg1;
- (void)_reloadQueuedItemsIfPathBecameAvailable;
- (void)_setStateForPlaylistFeeder:(id)arg1 startIndex:(unsigned int)arg2;
- (void)_storePlayWhileDownloadControllerDidFinishPlayWhileDownloadSessionNotification:(id)arg1;
- (void)_streamingDownloadSessionControllerDidFailDownloadSessionNotification:(id)arg1;
- (void)_updateAudioSessionModeWithIndex:(unsigned int)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (BOOL)allowsUserVisibleUpcomingItems;
- (id)audioSessionModeOverride;
- (id)avController;
- (BOOL)canChangePlaylistFeeder;
- (BOOL)canSeek;
- (BOOL)canSkipItem:(id)arg1;
- (BOOL)canSkipToPreviousItem;
- (void)clearQueueFeeder;
- (void)connectPlayer;
- (int)currentIndex;
- (id)currentItem;
- (void)dealloc;
- (id)delegate;
- (void)disconnectPlayer;
- (unsigned int)displayCountForItem:(id)arg1;
- (unsigned int)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isChangingPlayer;
- (BOOL)isChangingPlaylistFeeder;
- (id)itemForPlaylistIndex:(int)arg1;
- (id)metadataItemForPlaylistIndex:(int)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)playbackMode;
- (id)player;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeeder;
- (id)playlistFeederForPlaylistIndex:(int)arg1;
- (int)playlistIndexOfIndex:(int)arg1 inPlaylistFeeder:(id)arg2;
- (int)playlistIndexOfItem:(id)arg1;
- (int)playlistIndexOfItemIdentifier:(id)arg1;
- (int)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (int)playlistIndexWithDelta:(int)arg1 fromIndex:(int)arg2 ignoreElapsedTime:(BOOL)arg3;
- (id)queueCoordinator;
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
- (void)queueCoordinatorDidChangeItems:(id)arg1;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned int)arg2 error:(id)arg3;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeederDidInvalidateAssets:(id)arg1;
- (void)reloadItemsKeepingCurrentItem:(BOOL)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)repeatMode;
- (void)setAudioSessionModeOverride:(id)arg1;
- (void)setAvController:(id)arg1;
- (void)setCurrentIndex:(int)arg1 selectionDirection:(int)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setPlaylistFeeder:(id)arg1 startIndex:(int)arg2 keepPlaying:(BOOL)arg3;
- (void)setRepeatMode:(int)arg1;
- (void)updateForSoundCheckDefaultsChange;
- (BOOL)userCanChangeShuffleAndRepeatType;

@end
