/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityAbstractLockupView : UIView <MPUTextDrawingCacheInvalidationObserver, MusicArtworkViewDelegate, MusicEntityViewPlaybackStatusObserving> {
    BOOL  _artworkConfigurationBlockEnabled;
    UIImage * _artworkOverrideImage;
    MusicArtworkView * _artworkView;
    UITraitCollection * _cachedTraitCollection;
    MusicEntityViewContentDescriptor * _contentDescriptor;
    MusicEntityPlaybackStatus * _currentPlaybackStatus;
    BOOL  _entityDisabled;
    <MusicEntityValueProviding> * _entityValueProvider;
    BOOL  _hasDirtyPlaybackStatusUpdate;
    BOOL  _highlighted;
    float  _lastUsedArtworkViewAspectRatio;
    MusicPlayButton * _playButton;
    double  _playbackCurrentTimeOriginatingTime;
    MusicEntityPlaybackProgressApplier * _playbackProgressApplier;
    MusicEntityPlaybackStatus * _playbackStatus;
    NSMutableArray * _recycledTextButtons;
    NSMutableArray * _recycledTextDrawingViews;
    NSMapTable * _textDescriptorsToRecycledTextButtons;
    NSMapTable * _textDescriptorsToTextDrawingViews;
    BOOL  _usingPlaceholderArt;
    BOOL  _wasUpdatedForAsynchronousPropertyLoadCompleted;
}

@property (getter=_currentTextLabelAlpha, nonatomic, readonly) float _currentTextLabelAlpha;
@property (getter=_addButton, nonatomic, readonly) UIControl *addButton;
@property (nonatomic, retain) UIImage *artworkOverrideImage;
@property (getter=_artworkView, nonatomic, readonly) UIImageView *artworkView;
@property (getter=_contentDescriptor, setter=_setContentDescriptor:, nonatomic, retain) MusicEntityViewContentDescriptor *contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEntityDisabled, nonatomic) BOOL entityDisabled;
@property (nonatomic, retain) <MusicEntityValueProviding> *entityValueProvider;
@property (readonly) unsigned int hash;
@property (getter=isHighlighted, nonatomic, readonly) BOOL highlighted;
@property (getter=_playButton, nonatomic, readonly) MusicPlayButton *playButton;
@property (nonatomic, copy) MusicEntityPlaybackStatus *playbackStatus;
@property (readonly) Class superclass;
@property (getter=isUsingPlaceholderArt, nonatomic, readonly) BOOL usingPlaceholderArt;

+ (float)_maximumTextHeightForTextDescriptors:(id)arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (id)_addButton;
- (void)_applyPlaybackStatus:(id)arg1;
- (id)_artworkView;
- (void)_artworkViewImageDidChange;
- (void)_configureArtworkCatalog:(id)arg1;
- (void)_configureArtworkView:(id)arg1 forContentArtworkDescriptor:(id)arg2 entityValueProvider:(id)arg3;
- (void)_configurePlayButtonForLayingOverArtworkRelativeToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_configurePlayButtonVisualProperties:(id)arg1;
- (id)_contentDescriptor;
- (void)_contentDescriptorDidChange:(id)arg1;
- (float)_currentTextLabelAlpha;
- (id)_effectiveArtworkBackgroundColor;
- (void)_entityDisabledDidChange;
- (void)_getViewToProposedFrameMap:(id*)arg1 withTextDescriptors:(id)arg2 availableContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 exclusionRectangle:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 totalTextHeight:(float*)arg5;
- (void)_handleArtworkImageUpdate:(id)arg1 idealArtworkSize:(struct CGSize { float x1; float x2; })arg2;
- (void)_handleArtworkViewTapped;
- (void)_handleContentDescriptorDidInvalidate:(id)arg1;
- (void)_handlePlayButtonTappedWithAction:(unsigned int)arg1;
- (void)_layoutArtworkViewWithAvailableContentBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 layoutDirection:(int)arg2 usingBlock:(id /* block */)arg3;
- (void)_layoutPlayButtonUsingBlock:(id /* block */)arg1;
- (id)_newArtworkView;
- (id)_playButton;
- (void)_playButtonTapped:(id)arg1;
- (void)_playbackStatusDidChange:(id)arg1;
- (void)_recycleTextViewsForTextDescriptors:(id)arg1;
- (void)_setContentDescriptor:(id)arg1;
- (BOOL)_shouldArtworkViewRespectHighlightProperty;
- (BOOL)_shouldEnableArtworkViewUserInteraction;
- (BOOL)_shouldShowPlayButton;
- (id)_viewForTextDescriptor:(id)arg1;
- (id)artworkOverrideImage;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)entityValueProvider;
- (BOOL)isEntityDisabled;
- (BOOL)isHighlighted;
- (BOOL)isUsingPlaceholderArt;
- (void)musicArtworkViewDidTouchUpInside:(id)arg1;
- (id)playbackStatus;
- (void)setArtworkOverrideImage:(id)arg1;
- (void)setEntityDisabled:(BOOL)arg1;
- (void)setEntityValueProvider:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPlaybackStatus:(id)arg1;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForAsynchronousPropertyLoadCompleted;

@end
