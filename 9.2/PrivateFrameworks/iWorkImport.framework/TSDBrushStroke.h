/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface TSDBrushStroke : NSObject {
    UIColor * _color;
    int  _join;
    float  _miterLimit;
    NSString * _strokeName;
    float  _width;
}

@property (nonatomic, readonly, retain) UIColor *color;
@property (nonatomic, readonly) int join;
@property (nonatomic, readonly) float miterLimit;
@property (nonatomic, readonly, copy) NSString *strokeName;
@property (nonatomic, readonly) float width;

+ (id)cacheDirectory;
+ (void)loadBrush:(id)arg1;
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2;
+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2;
+ (Class)mutableClass;
+ (id)strokeWithName:(id)arg1 color:(id)arg2 width:(float)arg3;
+ (id)strokeWithType:(int)arg1 color:(id)arg2 width:(float)arg3;

- (void).cxx_destruct;
- (id)brushBoundsForId:(id)arg1;
- (void)brushPath:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)brushPath:(id)arg1 withScaling:(struct { float x1; float x2; })arg2 inElementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 into:(id)arg4 sectionIndex:(unsigned int*)arg5 viewScale:(float)arg6;
- (id)brushPathsForId:(id)arg1;
- (void)brushSection:(id)arg1 sectionIndex:(unsigned int)arg2 ontoPath:(id)arg3 withScaling:(struct { float x1; float x2; })arg4 inElementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 into:(id)arg6 viewScale:(float)arg7;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithName:(id)arg1 color:(id)arg2 width:(float)arg3 join:(int)arg4 miterLimit:(float)arg5;
- (int)join;
- (float)miterLimit;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 atAngle:(float)arg3 withScale:(float)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(BOOL)arg6;
- (id)strokeLineEnd:(id)arg1;
- (id)strokeName;
- (float)width;

@end
