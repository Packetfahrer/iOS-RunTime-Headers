/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying> {
    unsigned short  __visibilityState;
    PHAsset * _asset;
    BOOL  _ignoresUpdates;
    PLPhotoEditModel * _photoEditModel;
    BOOL  _videoEnabled;
}

@property (setter=_setVisibilityState:, nonatomic) unsigned short _visibilityState;
@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic, readonly) PUPhotoEditIrisModelChange *currentChange;
@property (nonatomic, readonly) BOOL hasUnsavedChanges;
@property (nonatomic) BOOL ignoresUpdates;
@property (nonatomic, retain) PLPhotoEditModel *photoEditModel;
@property (getter=isVideoEnabled, nonatomic) BOOL videoEnabled;

+ (void)updateChangeRequestForRevert:(id)arg1;

- (void).cxx_destruct;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_setAsset:(id)arg1;
- (void)_setPhotoEditModel:(id)arg1;
- (void)_setVideoEnabled:(BOOL)arg1 explicitly:(BOOL)arg2;
- (void)_setVisibilityState:(unsigned short)arg1;
- (void)_updateAutoDisableStateIfNeeded;
- (unsigned short)_visibilityState;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentChange;
- (void)dealloc;
- (BOOL)hasUnsavedChanges;
- (BOOL)ignoresUpdates;
- (id)init;
- (id)initWithAsset:(id)arg1 editModel:(id)arg2;
- (BOOL)isVideoEnabled;
- (id)newViewModelChange;
- (void)notifyPluginDidEdit;
- (id)photoEditModel;
- (BOOL)presentWarningForVideoAutoDisableIfNeededInViewController:(id)arg1 completion:(id /* block */)arg2;
- (void)setIgnoresUpdates:(BOOL)arg1;
- (void)setVideoEnabled:(BOOL)arg1;
- (BOOL)shouldWarnIrisRemovesEdits;
- (void)updateChangeRequestForSave:(id)arg1;

@end
