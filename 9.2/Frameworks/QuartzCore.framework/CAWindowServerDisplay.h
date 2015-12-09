/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAWindowServerDisplay : NSObject {
    struct CAWindowServerDisplayImpl { struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_1_1_1; } x1; struct Server {} *x2; } * _impl;
}

@property (copy) NSString *TVMode;
@property (copy) NSString *TVSignalType;
@property BOOL allowsVirtualModes;
@property (getter=isBlanked) BOOL blanked;
@property (readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;
@property (readonly) CAWindowServerDisplay *cloneMaster;
@property (readonly) NSSet *clones;
@property (nonatomic, copy) NSString *colorMode;
@property float contrast;
@property (readonly) NSString *deviceName;
@property (readonly) unsigned int displayId;
@property (getter=isGrayscale) BOOL grayscale;
@property float idealRefreshRate;
@property BOOL invertsColors;
@property float maximumBrightness;
@property float maximumRefreshRate;
@property float minimumRefreshRate;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled;
@property (readonly) NSString *name;
@property (copy) NSString *orientation;
@property float overscanAmount;
@property struct CGSize { float x1; float x2; } overscanAmounts;
@property int processId;
@property (readonly) unsigned int rendererFlags;
@property float scale;
@property (getter=isSecure) BOOL secure;
@property int tag;
@property (readonly) NSString *uniqueId;
@property BOOL usesPreferredModeRefreshRate;

- (id)TVMode;
- (id)TVSignalType;
- (id)_initWithCADisplayServer:(struct Server { int (**x1)(); struct SpinLock { struct { int x_1_2_1; } x_2_1_1; } x2; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_3_1_1; } x3; struct Display {} *x4; struct __CFString {} *x5; struct ContextItem {} *x6; unsigned int x7; unsigned int x8; struct ContextItem {} *x9; unsigned int x10; struct SpinLock { struct { int x_1_2_1; } x_11_1_1; } x11; struct PendingOperation {} *x12; struct Context {} *x13; struct Shape {} *x14; unsigned int x15; struct Context {} *x16; struct Renderer {} *x17; double x18; double x19; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; }*)arg1;
- (void)addClone:(id)arg1;
- (void)addClone:(id)arg1 options:(id)arg2;
- (BOOL)allowsVirtualModes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (unsigned int)clientPortAtPosition:(struct CGPoint { float x1; float x2; })arg1;
- (unsigned int)clientPortOfContextId:(unsigned int)arg1;
- (id)cloneMaster;
- (id)clones;
- (id)colorMode;
- (unsigned int)contextIdAtPosition:(struct CGPoint { float x1; float x2; })arg1;
- (float)contrast;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGPoint { float x1; float x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toContextId:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (id)deviceName;
- (unsigned int)displayId;
- (float)idealRefreshRate;
- (void)invalidate;
- (BOOL)invertsColors;
- (BOOL)isBlanked;
- (BOOL)isGrayscale;
- (BOOL)isMirroringEnabled;
- (BOOL)isSecure;
- (float)maximumBrightness;
- (float)maximumRefreshRate;
- (float)minimumRefreshRate;
- (id)name;
- (id)orientation;
- (float)overscanAmount;
- (struct CGSize { float x1; float x2; })overscanAmounts;
- (int)processId;
- (void)removeAllClones;
- (void)removeClone:(id)arg1;
- (unsigned int)rendererFlags;
- (float)scale;
- (void)setAllowsVirtualModes:(BOOL)arg1;
- (void)setBlanked:(BOOL)arg1;
- (void)setColorMode:(id)arg1;
- (void)setContrast:(float)arg1;
- (void)setGrayscale:(BOOL)arg1;
- (void)setIdealRefreshRate:(float)arg1;
- (void)setInvertsColors:(BOOL)arg1;
- (void)setMaximumBrightness:(float)arg1;
- (void)setMaximumRefreshRate:(float)arg1;
- (void)setMinimumRefreshRate:(float)arg1;
- (void)setMirroringEnabled:(BOOL)arg1;
- (void)setOrientation:(id)arg1;
- (void)setOverscanAmount:(float)arg1;
- (void)setOverscanAmounts:(struct CGSize { float x1; float x2; })arg1;
- (void)setProcessId:(int)arg1;
- (void)setScale:(float)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setTVMode:(id)arg1;
- (void)setTVSignalType:(id)arg1;
- (void)setTag:(int)arg1;
- (void)setUsesPreferredModeRefreshRate:(BOOL)arg1;
- (int)tag;
- (unsigned int)taskPortOfContextId:(unsigned int)arg1;
- (id)uniqueId;
- (void)update;
- (BOOL)usesPreferredModeRefreshRate;
- (void)willUnblank;

@end