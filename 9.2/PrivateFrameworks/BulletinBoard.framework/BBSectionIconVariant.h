/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionIconVariant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundlePath;
    int  _format;
    NSData * _imageData;
    NSString * _imageName;
    NSString * _imagePath;
    BOOL  _precomposed;
}

@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic) int format;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *imagePath;
@property (getter=isPrecomposed, nonatomic) BOOL precomposed;

+ (id)_variantWithFormat:(int)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)variantWithFormat:(int)arg1 imageData:(id)arg2;
+ (id)variantWithFormat:(int)arg1 imageName:(id)arg2 inBundle:(id)arg3;
+ (id)variantWithFormat:(int)arg1 imagePath:(id)arg2;

- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)format;
- (id)imageData;
- (id)imageName;
- (id)imagePath;
- (id)initWithCoder:(id)arg1;
- (BOOL)isPrecomposed;
- (void)setBundlePath:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setImagePath:(id)arg1;
- (void)setPrecomposed:(BOOL)arg1;

@end
