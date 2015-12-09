/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKManhattanLinesAnnotation : AKRectangularShapeAnnotation {
    struct CGPoint { 
        float x; 
        float y; 
    }  _endPoint;
    NSArray * _pathPoints;
    struct CGPoint { 
        float x; 
        float y; 
    }  _startPoint;
}

@property struct CGPoint { float x1; float x2; } endPoint;
@property (retain) NSArray *pathPoints;
@property struct CGPoint { float x1; float x2; } startPoint;

+ (id)displayNameForUndoablePropertyChangeWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingDrawingBounds;
+ (id)keyPathsForValuesAffectingHitTestBounds;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (struct CGPoint { float x1; float x2; })endPoint;
- (void)flattenModelExifOrientation:(int)arg1 withModelSize:(struct CGSize { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitTestBounds;
- (id)initWithCoder:(id)arg1;
- (id)keysForValuesToObserveForRedrawing;
- (id)keysForValuesToObserveForUndo;
- (id)pathPoints;
- (void)setEndPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPathPoints:(id)arg1;
- (void)setStartPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })startPoint;
- (void)translateBy:(struct CGPoint { float x1; float x2; })arg1;

@end
