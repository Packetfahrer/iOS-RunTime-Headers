/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUParallaxComputer : NSObject {
    int  _axis;
    int  _model;
    float  _parallaxFactor;
}

@property (nonatomic) int axis;
@property (nonatomic) int model;
@property (nonatomic) float parallaxFactor;

- (int)axis;
- (struct CGPoint { float x1; float x2; })contentParallaxOffsetForViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visibleRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (int)model;
- (float)parallaxFactor;
- (void)setAxis:(int)arg1;
- (void)setModel:(int)arg1;
- (void)setParallaxFactor:(float)arg1;

@end
