/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTextureUIKitSource : SCNTextureLayerSource {
    struct __C3DEngineContext { } * _engineContext;
    bool  _setup;
    struct CGSize { 
        float width; 
        float height; 
    }  _sizeCache;
    id  _source;
    unsigned int  _textureID;
    struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; long x2; long x3; long x4; long x5; long x6; long x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; long x11; unsigned int x12; } * _textureSampler;
    id  _uiView;
    id  _uiWindow;
    bool  _windowReady;
}

@property (nonatomic, retain) id source;
@property (nonatomic, retain) id uiView;
@property (nonatomic, retain) id uiWindow;

- (void)_layerTreeDidUpdate;
- (void)cleanup:(struct __C3DRendererContext { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; unsigned int x8; struct __C3DTexture {} *x9; struct __C3DStack {} *x10; void *x11; bool x12; bool x13; bool x14; bool x15; bool x16; unsigned long x17; struct __CFDictionary {} *x18; struct __CFDictionary {} *x19; struct __CFDictionary {} *x20; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_21_1_1; } x21; void *x22; int x23; struct __C3DFXProgramObject {} *x24; struct __C3DEngineStats { unsigned int x_25_1_1; unsigned int x_25_1_2; unsigned int x_25_1_3; unsigned int x_25_1_4; unsigned int x_25_1_5; unsigned int x_25_1_6; unsigned int x_25_1_7; unsigned int x_25_1_8; unsigned int x_25_1_9; unsigned int x_25_1_10; unsigned int x_25_1_11; unsigned int x_25_1_12; unsigned int x_25_1_13; unsigned int x_25_1_14; unsigned int x_25_1_15; unsigned int x_25_1_16; unsigned int x_25_1_17; unsigned int x_25_1_18; unsigned int x_25_1_19; unsigned int x_25_1_20; unsigned int x_25_1_21; unsigned int x_25_1_22; unsigned int x_25_1_23; unsigned int x_25_1_24; double x_25_1_25; double x_25_1_26; double x_25_1_27; double x_25_1_28; double x_25_1_29; double x_25_1_30; double x_25_1_31; double x_25_1_32; double x_25_1_33; double x_25_1_34; double x_25_1_35; double x_25_1_36; double x_25_1_37; double x_25_1_38; unsigned int x_25_1_39; unsigned int x_25_1_40; unsigned int x_25_1_41; unsigned int x_25_1_42; unsigned int x_25_1_43; unsigned int x_25_1_44; unsigned int x_25_1_45; unsigned int x_25_1_46; unsigned int x_25_1_47; unsigned int x_25_1_48; unsigned int x_25_1_49; unsigned int x_25_1_50; unsigned int x_25_1_51; unsigned int x_25_1_52; unsigned int x_25_1_53; unsigned int x_25_1_54; double x_25_1_55; double x_25_1_56; double x_25_1_57; double x_25_1_58[60]; unsigned int x_25_1_59; double x_25_1_60; double x_25_1_61; } x25; struct Cache { unsigned int x_26_1_1[8]; unsigned int x_26_1_2; int x_26_1_3; struct __C3DBlendStates {} *x_26_1_4; unsigned int x_26_1_5; struct __C3DRasterizerStates {} *x_26_1_6; struct __C3DMesh {} *x_26_1_7; struct __C3DMeshElement {} *x_26_1_8; unsigned long x_26_1_9; unsigned int x_26_1_10; int x_26_1_11; unsigned int x_26_1_12; void *x_26_1_13; int x_26_1_14; int x_26_1_15; } x26; struct { unsigned int x_27_1_1[2]; int x_27_1_2[5]; struct { int x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_27_1_3[7]; unsigned int x_27_1_4[7]; int (*x_27_1_5)(); int (*x_27_1_6)(); int (*x_27_1_7)(); int (*x_27_1_8)(); int (*x_27_1_9)(); int (*x_27_1_10)(); int (*x_27_1_11)(); int (*x_27_1_12)(); int (*x_27_1_13)(); } x27; struct VolatileObject { struct __C3DArray {} *x_28_1_1; unsigned int x_28_1_2; unsigned int x_28_1_3; struct __CFArray {} *x_28_1_4; } x28[2]; struct __C3DArray {} *x29; unsigned int x30; struct __CFDictionary {} *x31; }*)arg1;
- (void)dealloc;
- (id)layer;
- (struct CGSize { float x1; float x2; })layerSizeInPixels;
- (void)setSource:(id)arg1;
- (void)setUiView:(id)arg1;
- (void)setUiWindow:(id)arg1;
- (void)setup;
- (id)source;
- (struct __C3DTexture { }*)textureWithEngineContext:(struct __C3DEngineContext { }*)arg1 textureSampler:(struct __C3DTextureSampler { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; long x2; long x3; long x4; long x5; long x6; long x7; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_8_1_1; } x8; float x9; unsigned char x10; long x11; unsigned int x12; }*)arg2 nextFrameTime:(double*)arg3;
- (id)uiView;
- (id)uiWindow;

@end
