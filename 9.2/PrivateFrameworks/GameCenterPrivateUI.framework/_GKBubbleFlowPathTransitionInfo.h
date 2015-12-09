/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface _GKBubbleFlowPathTransitionInfo : NSObject {
    NSDictionary * _auxiliaryInfo;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    }  _bubbleEndPositionsByType;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    }  _bubbleStartPositionsByType;
    GKBubbleSet * _bubbles;
    BOOL  _couldUseFallbackAnimator;
    double  _duration;
    UIView * _effectiveView;
    int  _focusBubbleType;
    int  _newlyVisibleBubbles;
    double  _startTime;
}

@property (nonatomic, retain) NSDictionary *auxiliaryInfo;
@property (nonatomic) GKBubbleSet *bubbles;
@property (nonatomic) BOOL couldUseFallbackAnimator;
@property (nonatomic) double duration;
@property (nonatomic) UIView *effectiveView;
@property (nonatomic) int focusBubbleType;
@property (nonatomic) int newlyVisibleBubbles;
@property (nonatomic) double startTime;

- (id)auxiliaryInfo;
- (id)bubbles;
- (BOOL)couldUseFallbackAnimator;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)effectiveView;
- (int)focusBubbleType;
- (id)init;
- (int)newlyVisibleBubbles;
- (void)setAuxiliaryInfo:(id)arg1;
- (void)setBubbles:(id)arg1;
- (void)setCouldUseFallbackAnimator:(BOOL)arg1;
- (void)setDuration:(double)arg1;
- (void)setEffectiveView:(id)arg1;
- (void)setFocusBubbleType:(int)arg1;
- (void)setNewlyVisibleBubbles:(int)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
