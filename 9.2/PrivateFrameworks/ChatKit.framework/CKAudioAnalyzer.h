/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioAnalyzer : NSObject <Endpointer> {
    struct OpaqueAudioComponentInstance { } * _audioUnitEPVAD;
    float  _decoderLatency;
    BOOL  _detectedMusic;
    double  _endWaitTime;
    int  _endpointMode;
    NSMutableData * _floatSampleBuffer;
    struct { 
        float rms; 
        unsigned int zc; 
    }  _frameAnalysisArray;
    unsigned long  _frameRate;
    unsigned int  _framesSeen;
    float  _heuristicTransitionRatio;
    float  _heuristicWindowSec;
    unsigned long  _inMaxSamplesPerBuffer;
    double  _interspeechWaitTime;
    NSDictionary * _modelDict;
    double  _sampleRate;
    double  _samplesSeen;
    float  _speechPaddingFactor;
    double  _startWaitTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) float decoderLatency;
@property (readonly, copy) NSString *description;
@property double endWaitTime;
@property int endpointMode;
@property (readonly) unsigned int hash;
@property (nonatomic) float heuristicTransitionRatio;
@property (nonatomic) float heuristicWindowSec;
@property (nonatomic) unsigned long inMaxSamplesPerBuffer;
@property double interspeechWaitTime;
@property (nonatomic) float speechPaddingFactor;
@property double startWaitTime;
@property (readonly) Class superclass;

+ (void)initialize;

- (BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2;
- (void)dealloc;
- (float)decoderLatency;
- (double)endWaitTime;
- (int)endpointMode;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (float)heuristicTransitionRatio;
- (float)heuristicWindowSec;
- (unsigned long)inMaxSamplesPerBuffer;
- (id)init;
- (double)interspeechWaitTime;
- (void)reset;
- (void)setDecoderLatency:(float)arg1;
- (void)setEndWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (void)setHeuristicTransitionRatio:(float)arg1;
- (void)setHeuristicWindowSec:(float)arg1;
- (void)setInMaxSamplesPerBuffer:(unsigned long)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setSpeechPaddingFactor:(float)arg1;
- (void)setStartWaitTime:(double)arg1;
- (float)speechPaddingFactor;
- (double)startWaitTime;

@end
