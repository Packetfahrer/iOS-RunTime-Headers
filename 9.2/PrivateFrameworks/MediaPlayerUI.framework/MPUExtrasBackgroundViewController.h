/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasBackgroundViewController : UIViewController {
    NSArray * _backgroundElements;
    IKImageElement * _displayedImageElement;
    NSArray * _imageConstraints;
    MPUArtworkView * _imageView;
    NSTimer * _updateTimer;
    unsigned int  _vignetteType;
    UIImageView * _vignetteView;
}

@property (nonatomic, readonly) NSArray *backgroundElements;
@property (nonatomic) unsigned int vignetteType;

+ (id)vignetteImageForType:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_didReceiveImage:(id)arg1;
- (void)_initVignette;
- (void)_invalidateTimer;
- (void)_scheduleTimerIfNeeded;
- (void)_updateConstraintsForImageSize:(struct CGSize { float x1; float x2; })arg1 position:(unsigned int)arg2;
- (void)_updateImage;
- (id)backgroundElements;
- (void)dealloc;
- (id)initWithBackgroundElement:(id)arg1;
- (id)initWithBackgroundElements:(id)arg1;
- (void)setVignetteType:(unsigned int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (unsigned int)vignetteType;

@end
