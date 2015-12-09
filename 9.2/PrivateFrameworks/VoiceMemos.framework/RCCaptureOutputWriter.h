/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCaptureOutputWriter : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate> {
    AVCaptureSession * _AVCaptureSession;
    int  _AVCaptureSessionStartupState;
    NSURL * _activeOutputFileURL;
    AVAssetWriter * _assetWriter;
    <RCCaptureOutputWriterDelegate> * _captureOutputDelegate;
    NSMutableArray * _delegateBlocks;
    double  _finalizedAssetDuration;
    BOOL  _finalizedAssetEncounteredError;
    NSURL * _finalizedAssetURL;
    BOOL  _handledAVCaptureSessionFailedToStart;
    BOOL  _handledAVCaptureSessionTerminatedAbnormally;
    BOOL  _isProcessingSamples;
    unsigned long long  _maxRecordedFileSize;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _recordingCreationDate;
    NSUUID * _recordingSessionID;
    AVCaptureAudioDataOutput * _sampleBufferDataOutput;
    NSObject<OS_dispatch_queue> * _sampleBufferQueue;
    unsigned int  _sampleBuffersWritten;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _sampleBuffersWrittenDuration;
    double  _storeDemoTimeLimit;
    BOOL  _waitingForAVCaptureSessionDidStart;
    int  _writerState;
}

@property (nonatomic, readonly) AVCaptureSession *AVCaptureSession;
@property (nonatomic, retain) NSURL *activeOutputFileURL;
@property (nonatomic, retain) AVAssetWriter *assetWriter;
@property (nonatomic, readonly) double assetWritingCheckpointInterval;
@property (nonatomic) <RCCaptureOutputWriterDelegate> *captureOutputDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double finalizedAssetDuration;
@property (nonatomic, readonly) BOOL finalizedAssetEncounteredError;
@property (nonatomic, readonly) NSURL *finalizedAssetURL;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned long long maxRecordedFileSize;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSDate *recordingCreationDate;
@property (nonatomic, copy) NSUUID *recordingSessionID;
@property (nonatomic, retain) AVCaptureAudioDataOutput *sampleBufferDataOutput;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sampleBufferQueue;
@property (nonatomic) double storeDemoTimeLimit;
@property (readonly) Class superclass;
@property (nonatomic) int writerState;

- (void).cxx_destruct;
- (id)AVCaptureSession;
- (void)_checkIfRecordingSessionEverStarted:(id)arg1;
- (void)_clearSampleDataOutput;
- (void)_finalizeAssetWriting;
- (BOOL)_handleEncounteredFatalAssetWriterError;
- (BOOL)_handleNotificationAsSessionStartFailure;
- (void)_interruptionDidBegin:(id)arg1;
- (void)_prepareCaptureSessionOutputsIfNecessary;
- (void)_registerForCatpureSessionNotifications;
- (void)_scheduleMainThreadDelegateBlock:(id /* block */)arg1;
- (void)_sessionDidStartRunning:(id)arg1;
- (void)_sessionDidStopRunning:(id)arg1;
- (void)_sessionErrored:(id)arg1;
- (void)_setWriterState:(int)arg1;
- (BOOL)_setupAssetWriter:(id*)arg1 sampleBufferRef:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_unregisterForCatpureSessionNotifications;
- (int)_writerState;
- (id)activeOutputFileURL;
- (id)assetWriter;
- (double)assetWritingCheckpointInterval;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureOutputDelegate;
- (void)dealloc;
- (void)endWriting;
- (void)enforceMaxRecordingDuration;
- (double)finalizedAssetDuration;
- (BOOL)finalizedAssetEncounteredError;
- (id)finalizedAssetURL;
- (id)initWithAVCaptureSession:(id)arg1;
- (unsigned long long)maxRecordedFileSize;
- (void)pauseWriting;
- (id)queue;
- (id)recordingCreationDate;
- (id)recordingSessionID;
- (void)resumeWriting;
- (id)sampleBufferDataOutput;
- (id)sampleBufferQueue;
- (void)setActiveOutputFileURL:(id)arg1;
- (void)setAssetWriter:(id)arg1;
- (void)setCaptureOutputDelegate:(id)arg1;
- (void)setMaxRecordedFileSize:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setRecordingCreationDate:(id)arg1;
- (void)setRecordingSessionID:(id)arg1;
- (void)setSampleBufferDataOutput:(id)arg1;
- (void)setSampleBufferQueue:(id)arg1;
- (void)setStoreDemoTimeLimit:(double)arg1;
- (void)setWriterState:(int)arg1;
- (BOOL)startCaptureSession;
- (void)startMaximumRecordingDurationTimer;
- (BOOL)startWritingToOutputFileURL:(id)arg1 creationDate:(id)arg2 beginPaused:(BOOL)arg3 captureOutputDelegate:(id)arg4;
- (void)stopCaptureSession;
- (double)storeDemoTimeLimit;
- (int)writerState;

@end
