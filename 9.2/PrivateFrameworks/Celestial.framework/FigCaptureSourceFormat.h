/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding> {
    struct opaqueCMFormatDescription { } * _formatDescription;
    NSDictionary * _formatDictionary;
    BOOL  _isExternalFormat;
    BOOL  _isMultiStreamFormat;
}

@property (readonly) NSArray *AVCaptureSessionPresets;
@property (readonly) float aeMaxGain;
@property (readonly) int autoFocusSystem;
@property (readonly) BOOL capturesStillsFromVideoStream;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultActiveFormat, readonly) BOOL defaultActiveFormat;
@property (readonly, copy) NSString *description;
@property (getter=isExperimental, readonly) BOOL experimental;
@property (readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (readonly) int frontEndScalerCompanionIndex;
@property (readonly) BOOL hasFrontEndScalerCompanionIndex;
@property (readonly) BOOL hasSensorHDRCompanionIndex;
@property (readonly) unsigned int hash;
@property (getter=isHDRSupported, readonly) BOOL hdrSupported;
@property (getter=isHighProfileH264Supported, readonly) BOOL highProfileH264Supported;
@property (getter=isHighResPhotoFormat, readonly) BOOL highResPhotoFormat;
@property (readonly) struct { int x1; int x2; } highResStillImageDimensions;
@property (getter=isHighResStillImageSupported, readonly) BOOL highResStillImageSupported;
@property (readonly) BOOL isExternalFormat;
@property (readonly) BOOL ispChromaNoiseReductionEnabled;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (readonly) float maxISO;
@property (readonly) int maxIntegrationTimeOverride;
@property (readonly) unsigned long mediaType;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (readonly) float minISO;
@property (getter=isMultiStreamFormat, readonly) BOOL multiStreamFormat;
@property (readonly) BOOL needsPreviewDPCC;
@property (getter=isPhotoFormat, readonly) BOOL photoFormat;
@property (readonly) BOOL prefersSensorHDREnabled;
@property (getter=isQuadraHighResStillImageSupported, readonly) BOOL quadraHighResStillImageSupported;
@property (readonly) struct { int x1; int x2; } sensorCropDimensions;
@property (readonly) struct { int x1; int x2; } sensorDimensions;
@property (readonly) int sensorHDRCompanionIndex;
@property (readonly) struct { int x1; int x2; } sourceCropAspectRatio;
@property (getter=isStillImageISPChromaNoiseReductionEnabled, readonly) BOOL stillImageISPChromaNoiseReductionEnabled;
@property (readonly) int stillImageStabilizationFusionScheme;
@property (getter=isStillImageStabilizationSupported, readonly) BOOL stillImageStabilizationSupported;
@property (readonly) Class superclass;
@property (readonly) int temporalNoiseReductionMode;
@property (getter=isVideoBinned, readonly) BOOL videoBinned;
@property (readonly) float videoDefaultMaxFrameRate;
@property (readonly) float videoDefaultMinFrameRate;
@property (readonly) struct { int x1; int x2; } videoDimensions;
@property (readonly) float videoFieldOfView;
@property (readonly) unsigned long videoFormat;
@property (readonly) int videoFormatIndex;
@property (getter=isVideoLowLightBinningSwitchSupported, readonly) BOOL videoLowLightBinningSwitchSupported;
@property (readonly) float videoMaxSupportedFrameRate;
@property (readonly) float videoMaxZoomFactor;
@property (readonly) float videoMinSupportedFrameRate;
@property (readonly) int videoRawBitDepth;
@property (readonly) float videoScaleFactor;
@property (readonly) int videoStabilizationTypeOverrideForCinematic;
@property (readonly) int videoStabilizationTypeOverrideForStandard;
@property (getter=isVideoZoomDynamicSensorCropSupported, readonly) BOOL videoZoomDynamicSensorCropSupported;
@property (readonly) float videoZoomFactorUpscaleThreshold;
@property (getter=isVideoZoomSupported, readonly) BOOL videoZoomSupported;

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (struct { int x1; int x2; })_maxUseableSensorDimensions;
- (struct { int x1; int x2; })_outputDimensions;
- (struct { int x1; int x2; })_visibleSensorDimensionsIncludingCinematic:(BOOL)arg1;
- (float)aeMaxGain;
- (int)autoFocusSystem;
- (BOOL)capturesStillsFromVideoStream;
- (id)copyWithNewVideoPixelFormat:(unsigned long)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (int)frontEndScalerCompanionIndex;
- (BOOL)hasFrontEndScalerCompanionIndex;
- (BOOL)hasSensorHDRCompanionIndex;
- (struct { int x1; int x2; })highResStillImageDimensions;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isDefaultActiveFormat;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExperimental;
- (BOOL)isExternalFormat;
- (BOOL)isHDRSupported;
- (BOOL)isHighProfileH264Supported;
- (BOOL)isHighResPhotoFormat;
- (BOOL)isHighResStillImageSupported;
- (BOOL)isMultiStreamFormat;
- (BOOL)isPhotoFormat;
- (BOOL)isQuadraHighResStillImageSupported;
- (BOOL)isStillImageISPChromaNoiseReductionEnabled;
- (BOOL)isStillImageStabilizationSupported;
- (BOOL)isVideoBinned;
- (BOOL)isVideoLowLightBinningSwitchSupported;
- (BOOL)isVideoStabilizationModeSupported:(int)arg1;
- (BOOL)isVideoZoomDynamicSensorCropSupported;
- (BOOL)isVideoZoomSupported;
- (BOOL)ispChromaNoiseReductionEnabled;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (int)maxIntegrationTimeOverride;
- (unsigned long)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (BOOL)needsPreviewDPCC;
- (BOOL)prefersSensorHDREnabled;
- (struct { int x1; int x2; })sensorCropDimensions;
- (struct { int x1; int x2; })sensorDimensions;
- (int)sensorHDRCompanionIndex;
- (struct { int x1; int x2; })sourceCropAspectRatio;
- (int)stillImageStabilizationFusionScheme;
- (int)temporalNoiseReductionMode;
- (float)videoDefaultMaxFrameRate;
- (float)videoDefaultMinFrameRate;
- (struct { int x1; int x2; })videoDimensions;
- (float)videoFieldOfView;
- (unsigned long)videoFormat;
- (int)videoFormatIndex;
- (float)videoMaxSupportedFrameRate;
- (float)videoMaxZoomFactor;
- (float)videoMinSupportedFrameRate;
- (int)videoRawBitDepth;
- (float)videoScaleFactor;
- (int)videoStabilizationTypeOverrideForCinematic;
- (int)videoStabilizationTypeOverrideForStandard;
- (float)videoZoomFactorUpscaleThreshold;

@end
