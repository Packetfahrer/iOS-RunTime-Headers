/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceDevice : NSObject {
    int  _layoutDirection;
    NSString * _localizedModel;
    NSString * _model;
    NSString * _name;
    NSString * _preferredContentSizeCategory;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _screenBounds;
    float  _screenScale;
    NSString * _systemName;
    NSString * _systemVersion;
}

@property (nonatomic, readonly) NSDictionary *cachedImages;
@property (nonatomic, readonly) int layoutDirection;
@property (nonatomic, copy) NSString *localizedModel;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } screenBounds;
@property (nonatomic) float screenScale;
@property (nonatomic, copy) NSString *systemName;
@property (nonatomic, copy) NSString *systemVersion;

+ (id)currentDevice;

- (void).cxx_destruct;
- (BOOL)addCachedImage:(id)arg1 name:(id)arg2;
- (BOOL)addCachedImageWithData:(id)arg1 name:(id)arg2;
- (id)cachedImages;
- (int)layoutDirection;
- (id)localizedModel;
- (id)model;
- (id)name;
- (void)playHaptic:(int)arg1;
- (id)preferredContentSizeCategory;
- (void)removeAllCachedImages;
- (void)removeCachedImageWithName:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })screenBounds;
- (float)screenScale;
- (void)setLocalizedModel:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(float)arg1;
- (void)setSystemName:(id)arg1;
- (void)setSystemVersion:(id)arg1;
- (id)systemName;
- (id)systemVersion;

@end
