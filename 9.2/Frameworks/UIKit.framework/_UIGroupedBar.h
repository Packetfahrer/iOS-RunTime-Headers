/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIGroupedBar : UIView {
    _UIButtonBar * _centerBar;
    NSLayoutConstraint * _centeringConstraint;
    BOOL  _independentGroupSizes;
    float  _leadingBarSizeLimit;
    NSLayoutConstraint * _leadingLimitConstraint;
    _UIButtonBar * _leftBar;
    float  _margin;
    float  _minimumInterGroupSpace;
    float  _minimumInterItemSpace;
    _UIButtonBar * _rightBar;
    float  _trailingBarSizeLimit;
    NSLayoutConstraint * _trailingLimitConstraint;
    _UIButtonBarButtonVisualProvider * _visualProvider;
}

@property (nonatomic, copy) NSArray *centerBarButtonGroups;
@property (nonatomic) BOOL independentGroupSizes;
@property (nonatomic, copy) NSArray *leadingBarButtonGroups;
@property (nonatomic) float leadingBarSizeLimit;
@property (nonatomic) float margin;
@property (nonatomic) float minimumInterGroupSpace;
@property (nonatomic) float minimumInterItemSpace;
@property (nonatomic, copy) NSArray *trailingBarButtonGroups;
@property (nonatomic) float trailingBarSizeLimit;
@property (nonatomic, copy) _UIButtonBarButtonVisualProvider *visualProvider;

- (void).cxx_destruct;
- (id)_debug;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setButtonAlpha:(float)arg1;
- (void)_updateBarMargins;
- (void)_updateVisualProvider;
- (id)centerBarButtonGroups;
- (void)didMoveToSuperview;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)independentGroupSizes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)leadingBarButtonGroups;
- (float)leadingBarSizeLimit;
- (float)margin;
- (float)minimumInterGroupSpace;
- (float)minimumInterItemSpace;
- (void)setCenterBarButtonGroups:(id)arg1;
- (void)setIndependentGroupSizes:(BOOL)arg1;
- (void)setLeadingBarButtonGroups:(id)arg1;
- (void)setLeadingBarSizeLimit:(float)arg1;
- (void)setMargin:(float)arg1;
- (void)setMinimumInterGroupSpace:(float)arg1;
- (void)setMinimumInterItemSpace:(float)arg1;
- (void)setTrailingBarButtonGroups:(id)arg1;
- (void)setTrailingBarSizeLimit:(float)arg1;
- (void)setVisualProvider:(id)arg1;
- (id)trailingBarButtonGroups;
- (float)trailingBarSizeLimit;
- (void)validateAllItems;
- (id)visualProvider;

@end
