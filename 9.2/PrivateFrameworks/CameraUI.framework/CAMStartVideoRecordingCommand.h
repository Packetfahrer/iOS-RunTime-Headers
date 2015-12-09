/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand {
    CAMVideoCaptureRequest * __request;
}

@property (nonatomic, readonly) CAMVideoCaptureRequest *_request;

- (void).cxx_destruct;
- (id)_request;
- (int)_videoOrientationForCaptureOrientation:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end
