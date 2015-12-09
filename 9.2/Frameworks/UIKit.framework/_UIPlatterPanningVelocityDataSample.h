/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPlatterPanningVelocityDataSample : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    }  _point;
    NSDate * _time;
    struct CGVector { 
        float dx; 
        float dy; 
    }  _translation;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } point;
@property (nonatomic, retain) NSDate *time;
@property (nonatomic) struct CGVector { float x1; float x2; } translation;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isSampleDistinctEnoughFromTouchLocation:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })point;
- (void)setPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTime:(id)arg1;
- (void)setTranslation:(struct CGVector { float x1; float x2; })arg1;
- (id)time;
- (struct CGVector { float x1; float x2; })translation;
- (void)updateTimeToNow;

@end
