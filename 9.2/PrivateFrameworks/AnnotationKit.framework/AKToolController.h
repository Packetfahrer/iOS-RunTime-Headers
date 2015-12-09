/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKToolController : NSObject {
    AKController * _controller;
    unsigned int  _toolMode;
}

@property AKController *controller;
@property (nonatomic, readonly) BOOL isInDefaultMode;
@property (nonatomic) unsigned int toolMode;

+ (void)cascadeAnnotations:(id)arg1 onPageController:(id)arg2 forPaste:(BOOL)arg3;

- (void).cxx_destruct;
- (unsigned int)_arrowStyleForToolTag:(int)arg1;
- (id)_bubbleFillColor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_centerBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGPoint { float x1; float x2; })_defaultCenterForNewAnnotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_defaultRectangleForNewAnnotation:(id)arg1 centeredAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (id)_defaultTextBoxTypingAttributes;
- (id)_defaultTypingAttributes;
- (float)_modelBaseScaleFactorForNewAnnotation;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (void)_setRectangleToFitTextOnTextAnnotation:(id)arg1;
- (float)_strokeWidthForNewAnnotation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_validatedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fitsInVisibleRegionOfOverlayView:(id)arg2 centeredAtPoint:(struct CGPoint { float x1; float x2; })arg3;
- (void)addNewAnnotation:(id)arg1 onPageController:(id)arg2 shouldSelect:(BOOL)arg3 shouldCascade:(BOOL)arg4;
- (id)controller;
- (id)createAnnotationOfType:(int)arg1 centeredAtPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (BOOL)isInDefaultMode;
- (void)performToolActionForSender:(id)arg1;
- (void)resetToDefaultMode;
- (void)setController:(id)arg1;
- (void)setToolMode:(unsigned int)arg1;
- (unsigned int)toolMode;
- (BOOL)validateToolSender:(id)arg1;

@end