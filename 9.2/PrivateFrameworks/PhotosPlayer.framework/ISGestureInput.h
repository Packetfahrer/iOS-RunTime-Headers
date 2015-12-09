/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISGestureInput : ISInput {
    BOOL  __needsUpdateGestureRecognizer;
    <ISGestureInputDelegate> * _delegate;
    struct { 
        BOOL respondsToViewHostingGestureRecognizer; 
        BOOL respondsToDelegateForGestureRecognizer; 
        BOOL respondsToGestureRecognizerDidChange; 
    }  _delegateFlags;
    UIGestureRecognizer * _gestureRecognizer;
}

@property (setter=_setNeedsUpdateGestureRecognizer:, nonatomic) BOOL _needsUpdateGestureRecognizer;
@property (nonatomic) <ISGestureInputDelegate> *delegate;
@property (nonatomic, retain) UIGestureRecognizer *gestureRecognizer;

- (void).cxx_destruct;
- (BOOL)_needsUpdateGestureRecognizer;
- (void)_setGestureRecognizer:(id)arg1;
- (void)_setNeedsUpdateGestureRecognizer:(BOOL)arg1;
- (void)_updateGestureRecognizerIfNeeded;
- (void)cancelGestureRecognizer;
- (void)dealloc;
- (id)delegate;
- (id)gestureRecognizer;
- (void)gestureRecognizerDidChange;
- (void)gestureRecognizerViewDidChange;
- (void)invalidateGestureRecognizer;
- (id)newGestureRecognizer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setDelegate:(id)arg1;

@end
