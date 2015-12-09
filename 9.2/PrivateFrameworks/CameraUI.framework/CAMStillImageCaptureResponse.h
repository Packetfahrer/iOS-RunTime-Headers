/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible> {
    BOOL  _HDREV0;
    NSString * _burstIdentifier;
    unsigned int  _burstRepresentedCount;
    NSDate * _captureDate;
    BOOL  _expectingPairedVideo;
    UIImage * _imageWellImage;
    NSDictionary * _metadata;
    NSString * _persistenceUUID;
}

@property (getter=isHDREV0, nonatomic, readonly) BOOL HDREV0;
@property (nonatomic, readonly, copy) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned int burstRepresentedCount;
@property (nonatomic, readonly) NSDate *captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (getter=isExpectingPairedVideo, nonatomic, readonly) BOOL expectingPairedVideo;
@property (nonatomic, readonly) BOOL flashFired;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIImage *imageWellImage;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } irisStillDisplayTime;
@property (nonatomic, readonly) NSString *irisStillImageUUID;
@property (nonatomic, readonly) NSURL *irisVideoPersistenceURL;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly) unsigned int numberOfRepresentedAssets;
@property (nonatomic, readonly, copy) NSURL *persistenceURL;
@property (nonatomic, readonly, copy) NSString *persistenceUUID;
@property (nonatomic, readonly) UIImage *placeholderImage;
@property (nonatomic, readonly) unsigned short sessionIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uuid;

- (void).cxx_destruct;
- (id)burstIdentifier;
- (unsigned int)burstRepresentedCount;
- (id)captureDate;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (BOOL)flashFired;
- (id)imageWellImage;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned int)arg6 imageWellImage:(id)arg7 HDREV0:(BOOL)arg8 expectingPairedVideo:(BOOL)arg9;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })irisStillDisplayTime;
- (id)irisStillImageUUID;
- (id)irisVideoPersistenceURL;
- (BOOL)isExpectingPairedVideo;
- (BOOL)isHDREV0;
- (unsigned int)mediaType;
- (id)metadata;
- (unsigned int)numberOfRepresentedAssets;
- (id)persistenceURL;
- (id)persistenceUUID;
- (id)placeholderImage;
- (id)stillImageMetadata;
- (id)uuid;

@end
