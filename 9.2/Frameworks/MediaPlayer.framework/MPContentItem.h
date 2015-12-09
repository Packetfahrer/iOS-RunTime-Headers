/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPContentItem : NSObject {
    MPMediaItemArtwork * _artwork;
    struct _MRContentItem { } * _mrContentItem;
}

@property (nonatomic, retain) MPMediaItemArtwork *artwork;
@property (getter=isContainer, nonatomic) BOOL container;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (getter=isPlayable, nonatomic) BOOL playable;
@property (nonatomic) float playbackProgress;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (unsigned int)_convertFromPlaylistType:(int)arg1;
- (int)_convertFromRadioStationType:(int)arg1;
- (int)_convertToPlaylistType:(unsigned int)arg1;
- (int)_convertToRadioStationType:(int)arg1;
- (id)_initWithMediaRemoteContentItem:(struct _MRContentItem { }*)arg1;
- (struct _MRContentItem { }*)_mediaRemoteContentItem;
- (void)_postItemChangedNotification;
- (id)album;
- (id)albumArtist;
- (id)artwork;
- (id)dateReleased;
- (void)dealloc;
- (id)description;
- (id)director;
- (double)duration;
- (int)episodeNumber;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (BOOL)isContainer;
- (BOOL)isPlayable;
- (id)parentalRating;
- (int)playCount;
- (float)playbackProgress;
- (int)playlistType;
- (int)radioStationType;
- (int)seasonNumber;
- (void)setAlbum:(id)arg1;
- (void)setAlbumArtist:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setContainer:(BOOL)arg1;
- (void)setDateReleased:(id)arg1;
- (void)setDirector:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEpisodeNumber:(int)arg1;
- (void)setParentalRating:(id)arg1;
- (void)setPlayCount:(int)arg1;
- (void)setPlayable:(BOOL)arg1;
- (void)setPlaybackProgress:(float)arg1;
- (void)setPlaylistType:(int)arg1;
- (void)setRadioStationType:(int)arg1;
- (void)setSeasonNumber:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTrackArtist:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)trackArtist;

@end
