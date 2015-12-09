/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMagnifyMode : NSObject <NSCopying> {
    NSString * _name;
    struct CGSize { 
        float width; 
        float height; 
    }  _size;
    float  _zoomFactor;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct CGSize { float x1; float x2; } size;
@property (nonatomic) float zoomFactor;

+ (id)currentMagnifyMode;
+ (id)magnifyModeWithSize:(struct CGSize { float x1; float x2; })arg1 name:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setZoomFactor:(float)arg1;
- (struct CGSize { float x1; float x2; })size;
- (float)zoomFactor;

@end
