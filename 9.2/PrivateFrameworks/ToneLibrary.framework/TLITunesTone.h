/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLITunesTone : NSObject {
    NSString * _artworkFile;
    unsigned int  _duration;
    NSString * _filePath;
    NSString * _identifier;
    NSString * _name;
    NSNumber * _pid;
    NSDictionary * _playbackProperties;
    BOOL  _private;
    BOOL  _protected;
    BOOL  _purchased;
    BOOL  _ringtone;
}

@property (nonatomic, copy) NSString *artworkFile;
@property (nonatomic) unsigned int duration;
@property (nonatomic, copy) NSString *filePath;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *pid;
@property (nonatomic, copy) NSDictionary *playbackProperties;
@property (getter=isPrivate, nonatomic) BOOL private;
@property (getter=isProtected, nonatomic) BOOL protected;
@property (getter=isPurchased, nonatomic) BOOL purchased;
@property (getter=isRingtone, nonatomic) BOOL ringtone;

- (void)_setArtworkFile:(id)arg1;
- (void)_setDuration:(unsigned int)arg1;
- (void)_setFilePath:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setName:(id)arg1;
- (void)_setPid:(id)arg1;
- (void)_setPlaybackProperties:(id)arg1;
- (void)_setPrivate:(BOOL)arg1;
- (void)_setProtected:(BOOL)arg1;
- (void)_setPurchased:(BOOL)arg1;
- (void)_setRingtone:(BOOL)arg1;
- (id)artworkFile;
- (void)dealloc;
- (unsigned int)duration;
- (id)filePath;
- (id)identifier;
- (id)initWithPropertyListRepresentation:(id)arg1 filePath:(id)arg2;
- (BOOL)isPrivate;
- (BOOL)isProtected;
- (BOOL)isPurchased;
- (BOOL)isRingtone;
- (id)name;
- (id)pid;
- (id)playbackProperties;

@end