/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSpringAnimationSettings : BSAnimationSettings {
    float  _damping;
    float  _epsilon;
    BOOL  _hasCalculatedDuration;
    float  _initialVelocity;
    float  _mass;
    float  _stiffness;
}

@property (nonatomic, readonly) float damping;
@property (nonatomic, readonly) float epsilon;
@property (nonatomic, readonly) float initialVelocity;
@property (nonatomic, readonly) float mass;
@property (nonatomic, readonly) float stiffness;

+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 delay:(double)arg5 timingFunction:(id)arg6;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 initialVelocity:(float)arg5;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 timingFunction:(id)arg5;
+ (id)settingsWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 timingFunction:(id)arg4;
+ (BOOL)supportsSecureCoding;

- (BOOL)_hasCalculatedDuration;
- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (id)_initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 epsilon:(float)arg4 initialVelocity:(float)arg5 delay:(double)arg6 frameInterval:(double)arg7 timingFunction:(id)arg8;
- (void)_setDamping:(float)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setEpsilon:(float)arg1;
- (void)_setInitialVelocity:(float)arg1;
- (void)_setMass:(float)arg1;
- (void)_setStiffness:(float)arg1;
- (void)_setTimingFunction:(id)arg1;
- (float)damping;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (float)epsilon;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (float)initialVelocity;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSpringAnimation;
- (float)mass;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)stiffness;

@end
