/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterConfigurationState : NSObject {
    NSURL * _URL;
    NSURL * _directoryForTemporaryFiles;
    NSArray * _inputGroups;
    NSArray * _inputs;
    AVMediaFileType * _mediaFileType;
    NSArray * _metadataItems;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _movieFragmentInterval;
    int  _movieTimeScale;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _overallDurationHint;
    float  _preferredRate;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    }  _preferredTransform;
    float  _preferredVolume;
    BOOL  _shouldOptimizeForNetworkUse;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSURL *directoryForTemporaryFiles;
@property (nonatomic, copy) NSArray *inputGroups;
@property (nonatomic, copy) NSArray *inputs;
@property (nonatomic, copy) AVMediaFileType *mediaFileType;
@property (nonatomic, copy) NSArray *metadataItems;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } movieFragmentInterval;
@property (nonatomic) int movieTimeScale;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } overallDurationHint;
@property (nonatomic) float preferredRate;
@property (nonatomic) struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;

- (id)URL;
- (void)dealloc;
- (id)directoryForTemporaryFiles;
- (id)inputGroups;
- (id)inputs;
- (id)mediaFileType;
- (id)metadataItems;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (float)preferredRate;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })preferredTransform;
- (float)preferredVolume;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setInputGroups:(id)arg1;
- (void)setInputs:(id)arg1;
- (void)setMediaFileType:(id)arg1;
- (void)setMetadataItems:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setOverallDurationHint:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (BOOL)shouldOptimizeForNetworkUse;

@end