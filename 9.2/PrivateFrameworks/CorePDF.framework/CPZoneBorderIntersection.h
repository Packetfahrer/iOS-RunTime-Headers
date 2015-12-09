/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPZoneBorderIntersection : NSObject <CPCopying, NSCopying> {
    BOOL  backwardVector;
    BOOL  forwardVector;
    CPZoneBorder * intersectingBorder;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  intersectionRect;
}

- (BOOL)backwardVector;
- (int)comparePositionLengthwise:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)forwardVector;
- (id)initSuper;
- (id)intersectingBorder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })intersectionRect;
- (void)setBackwardVector:(BOOL)arg1;
- (void)setForwardVector:(BOOL)arg1;
- (void)setIntersectingBorder:(id)arg1;
- (void)setIntersectionRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
