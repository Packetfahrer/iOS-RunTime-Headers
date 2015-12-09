/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITableViewCell : UITableViewCell {
    NSLayoutConstraint * _clippingConstraint;
    UIView * _clippingContainer;
    <SearchUIDelegate> * _delegate;
    BOOL  _expanded;
    SearchUIRoundedView * _roundedView;
}

@property (retain) NSLayoutConstraint *clippingConstraint;
@property (retain) UIView *clippingContainer;
@property <SearchUIDelegate> *delegate;
@property (getter=isExpanded) BOOL expanded;
@property (retain) SearchUIRoundedView *roundedView;

+ (Class)classForResult:(id)arg1;
+ (void)enableRoundedCorners;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insetLayoutMarginsForLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
+ (id)reuseCharacteristicsIDForResult:(id)arg1;
+ (id)reuseIdentifierForClass:(Class)arg1 result:(id)arg2;
+ (id)reuseIdentifierForResult:(id)arg1;
+ (id)reuseIdentifierForResults:(id)arg1;
+ (id)rowViewForResult:(id)arg1 style:(unsigned int)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleFrameForHomeScreenIcons;

- (void).cxx_destruct;
- (void)clearPurgeableMemory;
- (id)clippingConstraint;
- (id)clippingContainer;
- (id)delegate;
- (id)initWithResult:(id)arg1 style:(unsigned int)arg2;
- (id)initWithResults:(id)arg1 style:(unsigned int)arg2;
- (id)initWithStyle:(unsigned int)arg1;
- (BOOL)isExpandable;
- (BOOL)isExpanded;
- (BOOL)layoutMarginsFollowReadableWidth;
- (unsigned int)numberOfVisibleResults;
- (void)prepareForReuse;
- (void)reset;
- (id)roundedView;
- (void)setBackgroundColor:(id)arg1;
- (void)setClippingConstraint:(id)arg1;
- (void)setClippingContainer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setRoundedView:(id)arg1;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (BOOL)supportsRecycling;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateClippingHeight:(float)arg1;
- (void)updateExpanded:(BOOL)arg1;
- (void)updateRoundedCorners;
- (void)updateWithResult:(id)arg1;
- (void)updateWithResults:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
