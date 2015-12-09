/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeError : NSObject {
    long  _errorCode;
    FigCaptureRecordingSettings * _recordingSettings;
    NSString * _sourceNodeDescription;
    FigCaptureStillImageSettings * _stillImageSettings;
    int  _uniqueID;
}

@property (readonly) long errorCode;
@property (readonly) FigCaptureRecordingSettings *recordingSettings;
@property (readonly) NSString *sourceNodeDescription;
@property (readonly) FigCaptureStillImageSettings *stillImageSettings;

+ (id)newError:(long)arg1 sourceNode:(id)arg2;
+ (id)newError:(long)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;
+ (id)newError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3;

- (id)_initWithError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3 recordingSettings:(id)arg4;
- (void)dealloc;
- (long)errorCode;
- (unsigned int)hash;
- (id)recordingSettings;
- (id)sourceNodeDescription;
- (id)stillImageSettings;

@end
