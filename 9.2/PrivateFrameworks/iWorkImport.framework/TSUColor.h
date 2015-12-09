/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUColor : NSObject <NSCopying, TSSPreset, TSSPresetSource, TSSPropertyCommandSerializing> {
    struct CGColor { } * mCGColor;
}

@property (readonly) struct CGColor { }*CGColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *presetKind;
@property (readonly) Class superclass;

+ (id)blackColor;
+ (id)blueColor;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)brownColor;
+ (id)clearColor;
+ (id)colorWithCGColor:(struct CGColor { }*)arg1;
+ (id)colorWithHexString:(id)arg1;
+ (id)colorWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithWhite:(float)arg1 alpha:(float)arg2;
+ (id)cyanColor;
+ (id)grayColor;
+ (id)greenColor;
+ (id)lightGrayColor;
+ (id)magentaColor;
+ (id)orangeColor;
+ (id)p_defaultPresetColors:(int)arg1;
+ (id)presetKinds;
+ (id)purpleColor;
+ (id)randomColor;
+ (id)redColor;
+ (id)whiteColor;
+ (id)yellowColor;

- (struct CGColor { }*)CGColor;
- (id)UIColor;
- (float)alphaComponent;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)blueComponent;
- (float)brightnessComponent;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)getRGBAComponents:(float*)arg1;
- (id)grayscaleColor;
- (float)greenComponent;
- (unsigned int)hash;
- (id)hexString;
- (float)hueComponent;
- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(id)arg2;
- (id)initWithArchive:(const struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; }*)arg1 unarchiver:(id)arg2;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithHexString:(id)arg1;
- (id)initWithHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
- (id)initWithMessage:(const struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; }*)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (id)initWithUIColor:(id)arg1;
- (id)initWithWhite:(float)arg1 alpha:(float)arg2;
- (id)invertedColor;
- (BOOL)isAlmostEqualToColor:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualWithTolerance:(id)arg1;
- (BOOL)isNearlyWhite;
- (BOOL)isOpaque;
- (float)luminance;
- (id)mixedObjectWithFraction:(float)arg1 ofObject:(id)arg2;
- (int)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)newBlendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (BOOL)p_isEqualToColor:(id)arg1 withTolerance:(float)arg2;
- (float)p_rgbComponentWithIndex:(unsigned char)arg1;
- (void)paintPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)paintRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)presetKind;
- (float)redComponent;
- (float)saturationComponent;
- (void)saveToArchive:(struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; }*)arg1 archiver:(id)arg2;
- (void)saveToMessage:(struct Color { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; int x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; }*)arg1;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(id)arg2;

@end
