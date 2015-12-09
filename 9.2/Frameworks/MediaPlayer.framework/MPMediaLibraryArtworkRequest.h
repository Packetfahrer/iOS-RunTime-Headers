/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaLibraryArtworkRequest : NSObject {
    int  _artworkType;
    NSString * _availableArtworkToken;
    int  _entityType;
    NSNumber * _fetchableArtworkSource;
    NSString * _fetchableArtworkToken;
    BOOL  _hasRetrievedTokens;
    ML3MusicLibrary * _library;
    MPMediaLibraryArtwork * _libraryArtwork;
    unsigned long long  _libraryID;
    unsigned int  _mediaType;
    double  _retrievalTime;
}

@property (nonatomic, readonly) int artworkType;
@property (nonatomic, copy) NSString *availableArtworkToken;
@property (nonatomic, readonly) int entityType;
@property (nonatomic, copy) NSNumber *fetchableArtworkSource;
@property (nonatomic, copy) NSString *fetchableArtworkToken;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, retain) MPMediaLibraryArtwork *libraryArtwork;
@property (nonatomic, readonly) unsigned long long libraryID;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic) double retrievalTime;

- (void).cxx_destruct;
- (void)_updateTokens;
- (int)artworkType;
- (id)availableArtworkToken;
- (id)description;
- (int)entityType;
- (id)fetchableArtworkSource;
- (id)fetchableArtworkToken;
- (unsigned int)hash;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(int)arg3 artworkType:(int)arg4;
- (id)initWithML3Library:(id)arg1 identifier:(unsigned long long)arg2 entityType:(int)arg3 artworkType:(int)arg4;
- (BOOL)isEqual:(id)arg1;
- (id)library;
- (id)libraryArtwork;
- (unsigned long long)libraryID;
- (unsigned int)mediaType;
- (double)retrievalTime;
- (void)setAvailableArtworkToken:(id)arg1;
- (void)setFetchableArtworkSource:(id)arg1;
- (void)setFetchableArtworkToken:(id)arg1;
- (void)setLibraryArtwork:(id)arg1;
- (void)setRetrievalTime:(double)arg1;

@end