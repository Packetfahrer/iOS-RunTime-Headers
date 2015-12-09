/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPreviewActionSheetView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    NSArray * _actions;
    id /* block */  _completionHandler;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentInsets;
    <_UIPreviewActionSheetViewDelegate> * _delegate;
    UILongPressGestureRecognizer * _longPressGestureRecognizer;
    UIPanGestureRecognizer * _panGestureRecognizer;
    UIScrollView * _scrollView;
    _UIPreviewActionSheetItemView * _selectedActionView;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentInsets;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPreviewActionSheetViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) _UIPreviewActionSheetItemView *selectedActionView;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_changeSelectedActionViewWithView:(id)arg1;
- (void)_fireActionForSelectedView;
- (void)_longPressDidFire:(id)arg1;
- (void)_panDidFire:(id)arg1;
- (void)_setupGestureRecognizers;
- (void)_setupViewHierarchy;
- (id)actions;
- (id /* block */)completionHandler;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (id)delegate;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 items:(id)arg3 contentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg4;
- (id)longPressGestureRecognizer;
- (id)panGestureRecognizer;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedActionView;
- (void)setActions:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setPanGestureRecognizer:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectedActionView:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
