/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarSwappableImageView : UIImageView {
    id  _alternate;
    int  _buttonTag;
    int  _currentAnimation;
    BOOL  _flipped;
    float  _scale;
    BOOL  _showAlternate;
    UITabBar * _tabBar;
    id  _value;
}

- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setAlternateImage:(id)arg1;
- (void)setCurrentImage;
- (void)setImage:(id)arg1;
- (void)showAlternateImage:(BOOL)arg1;

@end
