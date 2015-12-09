/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNFloor : SCNGeometry {
    unsigned int  _isPresentationInstance;
    float  _reflectionFalloffEnd;
    float  _reflectionFalloffStart;
    float  _reflectionResolutionScaleFactor;
    unsigned int  _reflectionSampleCount;
    float  _reflectivity;
    unsigned int  _usesCustomScaleFactor;
}

@property (nonatomic) float reflectionFalloffEnd;
@property (nonatomic) float reflectionFalloffStart;
@property (nonatomic) float reflectionResolutionScaleFactor;
@property (nonatomic) float reflectivity;

+ (id)floor;
+ (BOOL)supportsSecureCoding;

- (struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; struct __C3DMesh {} *x2; struct __C3DMaterial {} *x3; struct __CFArray {} *x4; struct __CFSet {} *x5; struct __CFArray {} *x6; struct __C3DAABB {} *x7; unsigned int x8 : 1; int (*x9)(); struct { bool x_10_1_1; bool x_10_1_2; unsigned short x_10_1_3; unsigned short x_10_1_4; float x_10_1_5; float x_10_1_6; unsigned char x_10_1_7; unsigned char x_10_1_8; unsigned char x_10_1_9; unsigned char x_10_1_10; struct __C3DMeshElement {} *x_10_1_11; struct __C3DMeshSource {} *x_10_1_12; struct __C3DMesh {} *x_10_1_13; bool x_10_1_14; bool x_10_1_15; void *x_10_1_16; void *x_10_1_17; } x10; }*)__createCFObject;
- (void)_customDecodingOfSCNFloor:(id)arg1;
- (struct __C3DAnimationChannel { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __C3DAnimation {} *x2; struct __CFArray {} *x3; void *x4; struct __C3DModelTarget {} *x5; struct __CFString {} *x6; }*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DFloor { struct __C3DGeometry { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DMesh {} *x_1_1_2; struct __C3DMaterial {} *x_1_1_3; struct __CFArray {} *x_1_1_4; struct __CFSet {} *x_1_1_5; struct __CFArray {} *x_1_1_6; struct __C3DAABB {} *x_1_1_7; unsigned int x_1_1_8 : 1; int (*x_1_1_9)(); struct { bool x_10_2_1; bool x_10_2_2; unsigned short x_10_2_3; unsigned short x_10_2_4; float x_10_2_5; float x_10_2_6; unsigned char x_10_2_7; unsigned char x_10_2_8; unsigned char x_10_2_9; unsigned char x_10_2_10; struct __C3DMeshElement {} *x_10_2_11; struct __C3DMeshSource {} *x_10_2_12; struct __C3DMesh {} *x_10_2_13; bool x_10_2_14; bool x_10_2_15; void *x_10_2_16; void *x_10_2_17; } x_1_1_10; } x1; float x2; float x3; float x4; float x5; int x6; float x7; }*)floorRef;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)reflectionFallOffEnd;
- (float)reflectionFallOffStart;
- (float)reflectionFalloffEnd;
- (float)reflectionFalloffStart;
- (float)reflectionResolutionScaleFactor;
- (unsigned int)reflectionSampleCount;
- (float)reflectivity;
- (void)setReflectionFallOffEnd:(float)arg1;
- (void)setReflectionFallOffStart:(float)arg1;
- (void)setReflectionFalloffEnd:(float)arg1;
- (void)setReflectionFalloffStart:(float)arg1;
- (void)setReflectionResolutionScaleFactor:(float)arg1;
- (void)setReflectionSampleCount:(unsigned int)arg1;
- (void)setReflectivity:(float)arg1;

@end
