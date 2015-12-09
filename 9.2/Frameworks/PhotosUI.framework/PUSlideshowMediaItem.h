/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowMediaItem : NSObject {
    MPMediaItem * _mediaItem;
    OKProducerPreset * _preset;
    int  _type;
}

@property (nonatomic, readonly) NSURL *audioURL;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (id)mediaItemForType:(int)arg1 uniqueIdentifier:(id)arg2;
+ (id)mediaItemsForOKThemes;

- (void).cxx_destruct;
- (id)_initWithType:(int)arg1;
- (id)audioURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWitMediaItem:(id)arg1;
- (id)initWitPreset:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedName;
- (int)type;
- (id)uniqueIdentifier;

@end
