/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageThresholdBinaryInverse : MPSUnaryImageKernel {
    struct { 
        float threshold_value; 
        float max_value; 
        float matrix[3]; 
    }  filterInfo;
}

@property (nonatomic, readonly) float maximumValue;
@property (nonatomic, readonly) float thresholdValue;
@property (nonatomic, readonly) const float*transform;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (id)debugDescription;
- (long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const struct { struct MIPixelInfo {} *x1; struct MIPixelInfo {} *x2; struct { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; } x_3_1_1; struct { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; } x_3_1_2; } x3; }*)arg5;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 thresholdValue:(float)arg2 maximumValue:(float)arg3 linearGrayColorTransform:(const float*)arg4;
- (float)maximumValue;
- (float)thresholdValue;
- (const float*)transform;

@end
