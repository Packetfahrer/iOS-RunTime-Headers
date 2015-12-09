/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasBorderedImageView : UIImageView {
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _deferredTransform;
    BOOL  _shouldDeferSettingTransform;
    BOOL  _shouldSkipImageWhenReplicatingState;
    BOOL  _shouldUseTransformWhenReplicatingState;
}

@property (nonatomic, copy) UIColor *borderColor;
@property (nonatomic) float borderWidth;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } deferredTransform;
@property (nonatomic) BOOL shouldDeferSettingTransform;
@property (nonatomic) BOOL shouldSkipImageWhenReplicatingState;
@property (nonatomic) BOOL shouldUseTransformWhenReplicatingState;

- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)borderColor;
- (float)borderWidth;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })deferredTransform;
- (void)replicateStateFromImageView:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setBorderWidth:(float)arg1;
- (void)setDeferredTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setShouldDeferSettingTransform:(BOOL)arg1;
- (void)setShouldSkipImageWhenReplicatingState:(BOOL)arg1;
- (void)setShouldUseTransformWhenReplicatingState:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (BOOL)shouldDeferSettingTransform;
- (BOOL)shouldSkipImageWhenReplicatingState;
- (BOOL)shouldUseTransformWhenReplicatingState;

@end
