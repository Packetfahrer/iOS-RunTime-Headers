/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKAddPassButton : UIButton {
    int  _addPassButtonStyle;
    struct CGSize { 
        float width; 
        float height; 
    }  _boundsSize;
    CAFilter * _highlightFilter;
    BOOL  _highlighted;
    struct CGSize { 
        float width; 
        float height; 
    }  _iconSize;
    UIImageView * _iconView;
    CAShapeLayer * _layer;
    PKShapeView * _maskView;
    UILabel * _multiLineLabel;
    struct CGSize { 
        float width; 
        float height; 
    }  _multilineSize;
    UILabel * _singleLineLabel;
    struct CGSize { 
        float width; 
        float height; 
    }  _singlelineSize;
}

@property (nonatomic) int addPassButtonStyle;

+ (id)addPassButtonWithStyle:(int)arg1;
+ (Class)layerClass;

- (void)_adjustVisibleLabel;
- (void)_applyStyle;
- (void)_createHighlightFilterIfNecessary;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (int)addPassButtonStyle;
- (void)dealloc;
- (id)init;
- (id)initWithAddPassButtonStyle:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setAddPassButtonStyle:(int)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end
