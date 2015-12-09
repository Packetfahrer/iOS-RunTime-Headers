/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVISNode : BWNode {
    BOOL  _flushingSBP;
    BOOL  _logStripProcessingTiming;
    BOOL  _offline;
    struct { 
        int width; 
        int height; 
    }  _offlineOutputDimensions;
    NSDictionary * _optionsDict;
    struct opaqueCMFormatDescription { } * _outputFormatDescription;
    unsigned long  _outputHeight;
    unsigned long  _outputWidth;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    BOOL  _sphereVideoEnabled;
    int  _stabilizationMethod;
    int  _stabilizationType;
    struct OpaqueFigCaptureISPProcessingSession { } * _stripProcessingSession;
}

+ (void)initialize;

- (long)_asynchronouslyStripProcessSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withStabilizationParameters:(id)arg2;
- (void)_flushBuffers;
- (struct __CVBuffer { }*)_newOutputPixelBuffer;
- (void)_prepareStripProcessingSession;
- (long)_setupSampleBufferProcessor;
- (void)_updateOutputRequirements;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDict:(id)arg1 stabilizationMethod:(int)arg2 stabilizationType:(int)arg3 stripProcessingSession:(struct OpaqueFigCaptureISPProcessingSession { }*)arg4 requiredFormat:(id)arg5 activeMaxFrameRate:(float)arg6 motionAttachmentsSource:(int)arg7 offline:(BOOL)arg8;
- (id)nodeSubType;
- (id)nodeType;
- (unsigned long)outputHeight;
- (unsigned long)outputWidth;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setOutputHeight:(unsigned long)arg1;
- (void)setOutputWidth:(unsigned long)arg1;
- (void)setSphereVideoEnabled:(BOOL)arg1;
- (BOOL)sphereVideoEnabled;

@end
