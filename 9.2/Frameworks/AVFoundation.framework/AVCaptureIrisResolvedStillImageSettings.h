/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureIrisResolvedStillImageSettings : NSObject {
    BOOL  _EV0CaptureEnabled;
    BOOL  _HDREnabled;
    BOOL  _flashEnabled;
    struct { 
        int width; 
        int height; 
    }  _irisMovieDimenions;
    BOOL  _irisMovieEnabled;
    struct { 
        int width; 
        int height; 
    }  _previewDimensions;
    BOOL  _squareCropEnabled;
    struct { 
        int width; 
        int height; 
    }  _stillImageDimensions;
    BOOL  _stillImageStabilizationEnabled;
    long long  _uniqueID;
}

@property (getter=isEV0CaptureEnabled, readonly) BOOL EV0CaptureEnabled;
@property (getter=isHDREnabled, readonly) BOOL HDREnabled;
@property (getter=isFlashEnabled, readonly) BOOL flashEnabled;
@property (readonly) struct { int x1; int x2; } irisMovieDimensions;
@property (getter=isIrisMovieEnabled, readonly) BOOL irisMovieEnabled;
@property (readonly) struct { int x1; int x2; } previewDimensions;
@property (getter=isSquareCropEnabled, readonly) BOOL squareCropEnabled;
@property (readonly) struct { int x1; int x2; } stillImageDimensions;
@property (getter=isStillImageStabilizationEnabled, readonly) BOOL stillImageStabilizationEnabled;
@property (readonly) long long uniqueID;

+ (id)resolvedSettingsWithUniqueID:(long long)arg1 stillImageDimensions:(struct { int x1; int x2; })arg2 previewDimensions:(struct { int x1; int x2; })arg3 irisMovieEnabled:(BOOL)arg4 irisMovieDimensions:(struct { int x1; int x2; })arg5 flashEnabled:(BOOL)arg6 HDREnabled:(BOOL)arg7 EV0CaptureEnabled:(BOOL)arg8 stillImageStabilizationEnabled:(BOOL)arg9 squareCropEnabled:(BOOL)arg10;

- (id)_initWithUniqueID:(long long)arg1 stillImageDimensions:(struct { int x1; int x2; })arg2 previewDimensions:(struct { int x1; int x2; })arg3 irisMovieEnabled:(BOOL)arg4 irisMovieDimensions:(struct { int x1; int x2; })arg5 flashEnabled:(BOOL)arg6 HDREnabled:(BOOL)arg7 EV0CaptureEnabled:(BOOL)arg8 stillImageStabilizationEnabled:(BOOL)arg9 squareCropEnabled:(BOOL)arg10;
- (id)description;
- (struct { int x1; int x2; })irisMovieDimensions;
- (BOOL)isEV0CaptureEnabled;
- (BOOL)isFlashEnabled;
- (BOOL)isHDREnabled;
- (BOOL)isIrisMovieEnabled;
- (BOOL)isSquareCropEnabled;
- (BOOL)isStillImageStabilizationEnabled;
- (struct { int x1; int x2; })previewDimensions;
- (struct { int x1; int x2; })stillImageDimensions;
- (long long)uniqueID;

@end
