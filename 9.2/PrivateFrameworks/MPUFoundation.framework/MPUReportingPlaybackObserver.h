/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUReportingPlaybackObserver : NSObject {
    BOOL  _SBEnabled;
    NSData * _currentJingleReportingTimedMetadata;
    BOOL  _hasSetLastPlayEventTimeStamp;
    BOOL  _isReloadingWithPlaybackContext;
    BOOL  _isScrubbing;
    MPAVItem * _itemForCurrentTimeChange;
    double  _lastPlayEventEndTimeForCurrentItem;
    double  _lastPlayEventTimeStamp;
    BOOL  _offline;
    NSString * _playbackSessionID;
    MPAVController * _player;
    MPUReportingController * _reportingController;
    BOOL  _shouldReportAsPlaying;
    double  _startTimeForCurrentTimeChange;
    unsigned long long  _storeAccountID;
}

@property (getter=isSBEnabled, nonatomic) BOOL SBEnabled;
@property (getter=isOffline, nonatomic) BOOL offline;
@property (nonatomic, readonly) MPAVController *player;
@property (nonatomic, readonly) MPUReportingController *reportingController;
@property (nonatomic) unsigned long long storeAccountID;

- (void).cxx_destruct;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_itemNewAccessLogEntryNotification:(id)arg1;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (double)_itemStartTimeForItem:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1;
- (void)_updatePlaybackSessionID;
- (void)dealloc;
- (void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)didTransitionItemForBan:(id)arg1;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;
- (BOOL)isOffline;
- (BOOL)isSBEnabled;
- (id)newPlayActivityEventForMPAVItem:(id)arg1;
- (id)newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 MPAVItem:(id)arg2;
- (id)player;
- (id)reportingController;
- (void)setOffline:(BOOL)arg1;
- (void)setSBEnabled:(BOOL)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (unsigned long long)storeAccountID;
- (void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)willTransitionItemForBan:(id)arg1;

@end
