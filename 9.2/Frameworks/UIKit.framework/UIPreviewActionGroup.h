/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPreviewActionGroup : NSObject <NSCopying, UIPreviewActionItem> {
    NSArray * _actions;
    UIColor * _color;
    NSString * _identifier;
    UIImage * _image;
    int  _style;
    NSString * _title;
}

@property (getter=_actions, setter=_setActions:, nonatomic, copy) NSArray *actions;
@property (getter=_color, setter=_setColor:, nonatomic, retain) UIColor *color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) int style;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg1;
+ (id)actionGroupWithTitle:(id)arg1 style:(int)arg2 actions:(id)arg3;

- (void).cxx_destruct;
- (id)_actions;
- (id)_color;
- (void)_setActions:(id)arg1;
- (void)_setColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)image;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)style;
- (id)title;

@end
