/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAMetalDrawable : NSObject <CAMetalDrawable> {
    CAMetalLayer * _layer;
    struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; bool x7; bool x8; bool x9; unsigned long long x10; id x11; struct _CAMetalLayerPrivate {} x12; struct __IOSurface {} *x13; id x14; bool x15; } * _priv;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) CAMetalLayer *layer;
@property (readonly) Class superclass;
@property (readonly) <MTLTexture> *texture;

- (void)dealloc;
- (id)initWithDrawablePrivate:(struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; bool x7; bool x8; bool x9; unsigned long long x10; id x11; struct _CAMetalLayerPrivate {} x12; struct __IOSurface {} *x13; id x14; bool x15; }*)arg1 layer:(id)arg2;
- (id)layer;
- (void)present;
- (void)presentAtTime:(double)arg1;
- (struct _CAMetalDrawablePrivate { struct Atomic { struct { int x_1_2_1; } x_1_1_1; } x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; bool x7; bool x8; bool x9; unsigned long long x10; id x11; struct _CAMetalLayerPrivate {} x12; struct __IOSurface {} *x13; id x14; bool x15; }*)priv;
- (id)texture;

@end
