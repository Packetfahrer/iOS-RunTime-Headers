/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNMetalRenderPipeline : NSObject {
    unsigned int  _buffersUsageMask;
    NSArray * _frameBufferBindings;
    NSArray * _nodeBufferBindings;
    struct __C3DFXPass { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; int x3; bool x4; struct __C3DFXTechnique {} *x5; struct __CFString {} *x6; struct __CFString {} *x7; struct __CFString {} *x8; bool x9; struct __C3DFXProgram {} *x10; struct __C3DMaterial {} *x11; struct __C3DBlendStates {} *x12; struct __C3DRasterizerStates {} *x13; struct C3DColor4 { union { float x_1_2_1[4]; struct { float x_2_3_1; float x_2_3_2; float x_2_3_3; float x_2_3_4; } x_1_2_2; } x_14_1_1; } x14; unsigned char x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 1; unsigned int x33 : 1; unsigned int x34 : 1; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; unsigned int x38 : 1; unsigned int x39 : 1; struct __C3DRendererElement {} *x40; unsigned long x41; unsigned long x42; struct { int (*x_43_1_1)(); int (*x_43_1_2)(); int (*x_43_1_3)(); int (*x_43_1_4)(); int (*x_43_1_5)(); int (*x_43_1_6)(); int (*x_43_1_7)(); int (*x_43_1_8)(); void *x_43_1_9; } x43; struct { struct { unsigned char x_1_2_1; unsigned char x_1_2_2; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned char x_1_2_7[1]; } x_44_1_1; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned int x_2_2_3 : 1; unsigned int x_2_2_4 : 1; unsigned int x_2_2_5 : 1; unsigned int x_2_2_6 : 1; unsigned char x_2_2_7[1]; } x_44_1_2; unsigned int x_44_1_3 : 1; unsigned int x_44_1_4 : 1; } x44; struct CGPoint { float x_45_1_1; float x_45_1_2; } x45; struct { /* ? */ } *x46; unsigned int x47; struct __C3DNode {} *x48; struct __C3DNode {} *x49; struct __CFArray {} *x50; struct __C3DNode {} *x51; struct __CFString {} *x52; struct __CFString {} *x53; struct __CFString {} *x54; void *x55; struct __C3DFXPassInput {} **x56; int x57; int x58; struct __CFDictionary {} *x59; struct __CFDictionary {} *x60; struct { unsigned int x_61_1_1 : 1; bool x_61_1_2; unsigned char x_61_1_3; } x61; } * _pass;
    NSArray * _passBufferBindings;
    struct __C3DFXProgram { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_2_1; unsigned char x_1_2_2[4]; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; int x_1_1_6; int x_1_1_7; } x1; int x2; unsigned int x3 : 1; unsigned int x4 : 1; struct __C3DFXProgramDelegate {} *x5; } * _program;
    unsigned int  _samplersUsageMask;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _sceneBuffer;
    NSArray * _shadableBufferBindings;
    <MTLRenderPipelineState> * _state;
    unsigned int  _texturesUsageMask;
}

@property (nonatomic, copy) NSArray *frameBufferBindings;
@property (nonatomic, copy) NSArray *nodeBufferBindings;
@property (nonatomic, copy) NSArray *passBufferBindings;
@property (nonatomic, copy) NSArray *shadableBufferBindings;
@property (nonatomic, retain) <MTLRenderPipelineState> *state;
@property (nonatomic, readonly) unsigned int vertexBuffersUsageMask;

- (void)_computeUsageForArguments:(id)arg1 stage:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)frameBufferBindings;
- (id)init;
- (id)nodeBufferBindings;
- (id)passBufferBindings;
- (void)setFrameBufferBindings:(id)arg1;
- (void)setNodeBufferBindings:(id)arg1;
- (void)setPassBufferBindings:(id)arg1;
- (void)setShadableBufferBindings:(id)arg1;
- (void)setState:(id)arg1;
- (id)shadableBufferBindings;
- (id)state;
- (unsigned int)vertexBuffersUsageMask;

@end
