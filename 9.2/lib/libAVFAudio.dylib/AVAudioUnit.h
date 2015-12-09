/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnit : AVAudioNode

@property (nonatomic, readonly) AUAudioUnit *AUAudioUnit;
@property (nonatomic, readonly) struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } audioComponentDescription;
@property (nonatomic, readonly) struct OpaqueAudioComponentInstance { }*audioUnit;
@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int version;

+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1 options:(unsigned long)arg2 completionHandler:(id /* block */)arg3;

- (id)AUAudioUnit;
- (struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })audioComponentDescription;
- (struct OpaqueAudioComponentInstance { }*)audioUnit;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (BOOL)loadAudioUnitPresetAtURL:(id)arg1 error:(id*)arg2;
- (id)manufacturerName;
- (id)name;
- (bool)setValue:(float)arg1 forParam:(unsigned long)arg2;
- (float)valueForParam:(unsigned long)arg1;
- (unsigned int)version;

@end
