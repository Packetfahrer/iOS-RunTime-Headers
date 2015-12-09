/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioChannelLayout : NSObject <NSSecureCoding> {
    struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; } * _layout;
    unsigned long  _layoutTag;
    void * _reserved;
}

@property (nonatomic, readonly) unsigned int channelCount;
@property (nonatomic, readonly) const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*layout;
@property (nonatomic, readonly) unsigned long layoutTag;

+ (id)layoutWithLayout:(const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)arg1;
+ (id)layoutWithLayoutTag:(unsigned long)arg1;
+ (BOOL)supportsSecureCoding;

- (unsigned int)channelCount;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayout:(const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)arg1;
- (id)initWithLayoutTag:(unsigned long)arg1;
- (BOOL)isEqual:(id)arg1;
- (const struct AudioChannelLayout { unsigned int x1; unsigned int x2; unsigned int x3; struct AudioChannelDescription { unsigned int x_4_1_1; unsigned int x_4_1_2; float x_4_1_3[3]; } x4[1]; }*)layout;
- (unsigned int)layoutSize;
- (unsigned long)layoutTag;

@end
