/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureOutput : NSObject {
    AVCaptureOutputInternal * _outputInternal;
}

@property (nonatomic, readonly) NSArray *connections;

// Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation

+ (void)initialize;

- (id)_inputForConnection:(id)arg1;
- (id)_recommendedAudioOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3;
- (id)_recommendedVideoOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2;
- (id)addConnection:(id)arg1 error:(id*)arg2;
- (BOOL)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;
- (BOOL)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)bumpChangeSeed;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (int)changeSeed;
- (id)connectionMediaTypes;
- (id)connectionWithMediaType:(id)arg1;
- (id)connections;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (void)handleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (BOOL)hasRequiredOutputFormatForConnection:(id)arg1;
- (id)init;
- (id)liveConnections;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })metadataOutputRectOfInterestForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct CGSize { float x1; float x2; })outputSizeForSourceFormat:(id)arg1;
- (void)performBlockOnSessionNotifyingThread:(id /* block */)arg1;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)arg1;
- (id)recommendedOutputSettingsForConnection:(id)arg1 sourceSettings:(id)arg2 fileType:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForMetadataOutputRectOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removeConnection:(id)arg1;
- (int)requiredOutputFormatForConnection:(id)arg1;
- (void)safelyHandleServerConnectionDeathForFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1 connection:(id)arg2;
- (void)updateMetadataTransformForSourceFormat:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (id)currentRequest;

@end
