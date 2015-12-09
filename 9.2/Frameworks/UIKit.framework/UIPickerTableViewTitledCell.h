/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPickerTableViewTitledCell : UIPickerTableViewCell {
    BOOL  _isAttributed;
    UIColor * _textColor;
    UILabel * _titleLabel;
    BOOL  _usesModernStyle;
}

@property (nonatomic, readonly) BOOL _isAttributed;
@property (nonatomic, readonly) UILabel *_titleLabel;
@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (BOOL)_canBeReusedInPickerView;
- (BOOL)_isAttributed;
- (void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2;
- (id)_titleLabel;
- (id)attributedTitle;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 isModern:(BOOL)arg3 textColor:(id)arg4;
- (void)prepareForReuse;
- (void)setAttributedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
