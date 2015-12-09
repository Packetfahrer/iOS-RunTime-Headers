/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIExposureAdjust : CIFilter {
    NSNumber * inputEV;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputEV;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (BOOL)_isIdentity;
- (id)inputEV;
- (id)inputImage;
- (id)outputImage;
- (void)setInputEV:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
