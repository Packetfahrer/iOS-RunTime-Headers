/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIReviewsFacebookView : UIView {
    SKUIClientContext * _clientContext;
    SKUIColorScheme * _colorScheme;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsets;
    NSArray * _friendNames;
    UILabel * _friendsLabel;
    UIButton * _likeButton;
    UIImageView * _logoImageView;
    UIView * _separatorView;
    UILabel * _titleLabel;
    BOOL  _userLiked;
}

@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (nonatomic, copy) NSArray *friendNames;
@property (nonatomic, readonly) UIControl *likeToggleButton;
@property (getter=isUserLiked, nonatomic) BOOL userLiked;

- (void).cxx_destruct;
- (id)_composedStringForNames:(id)arg1 userLiked:(BOOL)arg2;
- (void)_reloadFriendNamesLabel;
- (void)_reloadLikeButtonState;
- (id)colorScheme;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)friendNames;
- (id)initWithClientContext:(id)arg1;
- (BOOL)isUserLiked;
- (void)layoutSubviews;
- (id)likeToggleButton;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setFriendNames:(id)arg1;
- (void)setUserLiked:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
