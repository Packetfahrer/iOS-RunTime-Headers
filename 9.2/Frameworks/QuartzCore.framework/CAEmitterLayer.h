/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAEmitterLayer : CALayer

@property float birthRate;
@property float cullMaxZ;
@property float cullMinZ;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cullRect;
@property (copy) NSArray *emitterBehaviors;
@property (copy) NSArray *emitterCells;
@property float emitterDepth;
@property float emitterDuration;
@property (copy) NSString *emitterMode;
@property struct CGPath { }*emitterPath;
@property struct CGPoint { float x1; float x2; } emitterPosition;
@property (copy) NSString *emitterShape;
@property struct CGSize { float x1; float x2; } emitterSize;
@property float emitterZPosition;
@property float lifetime;
@property BOOL preservesDepth;
@property (copy) NSString *renderMode;
@property float scale;
@property unsigned int seed;
@property float spin;
@property float spinBias;
@property float velocity;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;

- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 24; struct Vec2<double> { double x_34_2_1; double x_34_2_2; } x_3_1_34; struct Rect { double x_35_2_1; double x_35_2_2; double x_35_2_3; double x_35_2_4; } x_3_1_35; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::Object> { struct Object {} *x_5_1_1; } x5; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_6_1_1; } x6; struct Layer {} *x7; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_8_1_1; } x8; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_9_1_1; } x9; struct Ref<CA::Render::Handle> { struct Handle {} *x_10_1_1; } x10; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; struct List<CA::Layer *> {} *x16; struct Atomic { struct { int x_1_2_1; } x_17_1_1; } x17; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (float)birthRate;
- (float)cullMaxZ;
- (float)cullMinZ;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cullRect;
- (void)didChangeValueForKey:(id)arg1;
- (id)emitterBehaviors;
- (id)emitterCells;
- (float)emitterDepth;
- (float)emitterDuration;
- (id)emitterMode;
- (struct CGPath { }*)emitterPath;
- (struct CGPoint { float x1; float x2; })emitterPosition;
- (id)emitterShape;
- (struct CGSize { float x1; float x2; })emitterSize;
- (float)emitterZPosition;
- (id)implicitAnimationForKeyPath:(id)arg1;
- (float)lifetime;
- (BOOL)preservesDepth;
- (void)reloadValueForKeyPath:(id)arg1;
- (id)renderMode;
- (float)scale;
- (unsigned int)seed;
- (void)setBirthRate:(float)arg1;
- (void)setCullMaxZ:(float)arg1;
- (void)setCullMinZ:(float)arg1;
- (void)setCullRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEmitterBehaviors:(id)arg1;
- (void)setEmitterCells:(id)arg1;
- (void)setEmitterDepth:(float)arg1;
- (void)setEmitterDuration:(float)arg1;
- (void)setEmitterMode:(id)arg1;
- (void)setEmitterPath:(struct CGPath { }*)arg1;
- (void)setEmitterPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setEmitterShape:(id)arg1;
- (void)setEmitterSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setEmitterZPosition:(float)arg1;
- (void)setLifetime:(float)arg1;
- (void)setPreservesDepth:(BOOL)arg1;
- (void)setRenderMode:(id)arg1;
- (void)setScale:(float)arg1;
- (void)setSeed:(unsigned int)arg1;
- (void)setSpin:(float)arg1;
- (void)setSpinBias:(float)arg1;
- (void)setVelocity:(float)arg1;
- (float)spin;
- (float)spinBias;
- (float)velocity;

@end