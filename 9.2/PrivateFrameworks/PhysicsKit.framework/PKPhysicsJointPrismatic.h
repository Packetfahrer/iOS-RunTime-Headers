/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointPrismatic : PKPhysicsJoint {
    struct CGPoint { 
        float x; 
        float y; 
    }  _anchor;
    struct CGVector { 
        float dx; 
        float dy; 
    }  _axis;
    struct b2PrismaticJoint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; struct b2Vec2 { float x_13_1_1; float x_13_1_2; } x13; struct b2Vec2 { float x_14_1_1; float x_14_1_2; } x14; struct b2Vec2 { float x_15_1_1; float x_15_1_2; } x15; float x16; struct b2Vec3 { float x_17_1_1; float x_17_1_2; float x_17_1_3; } x17; float x18; float x19; float x20; float x21; float x22; bool x23; bool x24; int x25; int x26; int x27; struct b2Vec2 { float x_28_1_1; float x_28_1_2; } x28; struct b2Vec2 { float x_29_1_1; float x_29_1_2; } x29; float x30; float x31; float x32; float x33; struct b2Vec2 { float x_34_1_1; float x_34_1_2; } x34; struct b2Vec2 { float x_35_1_1; float x_35_1_2; } x35; float x36; float x37; float x38; float x39; struct b2Mat33 { struct b2Vec3 { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_40_1_1; struct b2Vec3 { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_40_1_2; struct b2Vec3 { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_40_1_3; } x40; float x41; } * _joint;
    struct b2PrismaticJointDef { 
        int type; 
        void *userData; 
        struct b2Body {} *bodyA; 
        struct b2Body {} *bodyB; 
        bool collideConnected; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorA; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorB; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAxisA; 
        float referenceAngle; 
        bool enableLimit; 
        float lowerTranslation; 
        float upperTranslation; 
        bool enableMotor; 
        float maxMotorForce; 
        float motorSpeed; 
    }  _jointDef;
}

@property (nonatomic) float lowerDistanceLimit;
@property (nonatomic) BOOL shouldEnableLimits;
@property (nonatomic) float upperDistanceLimit;

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3 axis:(struct CGVector { float x1; float x2; })arg4;

- (id).cxx_construct;
- (struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)_joint;
- (struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; bool x5; }*)_jointDef;
- (void)create;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { float x1; float x2; })arg3 axis:(struct CGVector { float x1; float x2; })arg4;
- (id)initWithCoder:(id)arg1;
- (float)lowerDistanceLimit;
- (void)setLowerDistanceLimit:(float)arg1;
- (void)setShouldEnableLimits:(BOOL)arg1;
- (void)setUpperDistanceLimit:(float)arg1;
- (void)set_joint:(struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)arg1;
- (BOOL)shouldEnableLimits;
- (float)upperDistanceLimit;

@end
