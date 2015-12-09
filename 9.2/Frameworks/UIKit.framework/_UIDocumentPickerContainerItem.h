/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIDocumentPickerContainerItem : NSObject <_UIDocumentPickerDirectoryObserverItem> {
    _UIDocumentPickerURLContainerModel * _model;
    int  _modelDisplayCount;
    _UIDocumentPickerContainerModel * _parentModel;
    NSString * _pickabilityReason;
    BOOL  _pickable;
    id  _resourceIdentifier;
    NSOperation * _thumbnailLoadOperation;
    NSMapTable * _thumbnailsBySize;
    int  _type;
    _UIDocumentPickerURLContainerModel * _weak_model;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) _UIDocumentPickerContainerModel *model;
@property (nonatomic) _UIDocumentPickerContainerModel *parentModel;
@property (nonatomic, copy) NSString *pickabilityReason;
@property (nonatomic) BOOL pickable;
@property (nonatomic, readonly) BOOL renameable;
@property (nonatomic, readonly) NSDate *sortDate;
@property (nonatomic, readonly, retain) NSString *subtitle;
@property (nonatomic, readonly, retain) NSString *subtitle2;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *thumbnailsBySize;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly, retain) NSURL *url;
@property (nonatomic, readonly, retain) NSURL *urlInLocalContainer;

+ (id)_blockingThumbnailForItem:(id)arg1 documentProxy:(id)arg2 withSize:(struct CGSize { float x1; float x2; })arg3 scale:(float)arg4 wantsBorder:(BOOL*)arg5;
+ (id)_lruThumbnailArray;
+ (void)clearLRUThumbnailCache;
+ (void)markThumbnailAsRecentlyUsed:(id)arg1;

- (void).cxx_destruct;
- (id)_blipWithTags:(id)arg1 height:(float)arg2 scale:(float)arg3;
- (id)_blockingThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 wantsBorder:(BOOL*)arg3;
- (id)_createThumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (void)_ensureModelPresent;
- (id)_formattedSubtitleForNumberOfItems:(unsigned int)arg1;
- (void)_modelChanged;
- (id)_resourceIdentifier;
- (id)contentType;
- (void)dealloc;
- (void)decrementModelDisplayCount;
- (id)description;
- (unsigned int)hash;
- (void)incrementModelDisplayCount;
- (unsigned int)indentationLevel;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)model;
- (void)modelChanged;
- (id)modificationDate;
- (id)parentModel;
- (id)pickabilityReason;
- (BOOL)pickable;
- (BOOL)renameable;
- (void)setParentModel:(id)arg1;
- (void)setPickabilityReason:(id)arg1;
- (void)setPickable:(BOOL)arg1;
- (void)setThumbnailsBySize:(id)arg1;
- (id)sortDate;
- (id)sortPath;
- (id)sortTag;
- (id)subtitle;
- (id)subtitle2;
- (id)tagBlipsWithHeight:(float)arg1 scale:(float)arg2;
- (id)tags;
- (id)thumbnailWithSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)thumbnailsBySize;
- (id)title;
- (int)type;
- (id)url;
- (id)urlInLocalContainer;

@end
