/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUserTransformTileViewController : PUTileViewController <PUUserTransformViewDelegate> {
    PUDisplayTileTransform * __displayTileTransform;
    NSString * __identifier;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  __passthroughRect;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  __untransformedContentFrame;
    PUAssetReference * _assetReference;
    <PUUserTransformTileViewControllerDelegate> * _delegate;
    struct { 
        BOOL respondsToDidChangeModelTileTransform; 
        BOOL respondsToDidChangeIsUserInteracting; 
    }  _delegateFlags;
    BOOL  _userInteractionEnabled;
    PUUserTransformView * _userTransformView;
}

@property (setter=_setDisplayTileTransform:, nonatomic, retain) PUDisplayTileTransform *_displayTileTransform;
@property (setter=_setIdentifier:, nonatomic, copy) NSString *_identifier;
@property (setter=_setPassthroughRect:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _passthroughRect;
@property (setter=_setUntransformedContentFrame:, nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } _untransformedContentFrame;
@property (nonatomic, retain) PUAssetReference *assetReference;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUUserTransformTileViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (setter=setUserInteractionEnabled:, nonatomic) BOOL userInteractionEnabled;
@property (nonatomic, retain) PUUserTransformView *userTransformView;

- (void).cxx_destruct;
- (id)_displayTileTransform;
- (id)_identifier;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_passthroughRect;
- (void)_setDisplayTileTransform:(id)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setPassthroughRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setUntransformedContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setUserTransformView:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_untransformedContentFrame;
- (void)_updateUserInteractionEnabled;
- (void)_updateUserTransformPadding;
- (void)_updateUserTransformView;
- (id)_userInputOriginIdentifier;
- (void)applyLayoutInfo:(id)arg1;
- (id)assetReference;
- (void)becomeReusable;
- (void)dealloc;
- (id)delegate;
- (void)didChangeAnimating;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)loadView;
- (void)setAssetReference:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (BOOL)userInteractionEnabled;
- (id)userTransformView;
- (void)userTransformView:(id)arg1 didChangeIsUserInteracting:(BOOL)arg2;
- (void)userTransformView:(id)arg1 didChangeUserAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isUserInteracting:(BOOL)arg3;
- (BOOL)userTransformView:(id)arg1 shouldReceiveTouchAtPoint:(struct CGPoint { float x1; float x2; })arg2;

@end
