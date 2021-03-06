/* Generated by RuntimeBrowser.
 */

@protocol UIForcePresentationController <NSObject>

@required

- (BOOL)_canCommitPresentation;
- (BOOL)_canDismissPresentation;
- (UIView *)_revealContainerView;
- (BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
- (<_UIForcePresentationControllerDelegate> *)forcePresentationControllerDelegate;
- (UIGestureRecognizer *)panningGestureRecognizer;
- (id /* block */)presentationPhaseCompletionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, unsigned int, void*, id, SEL
- (void)setForcePresentationControllerDelegate:(id <_UIForcePresentationControllerDelegate>)arg1;
- (void)setPanningGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)setPresentationPhaseCompletionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*
- (void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1;

@optional

- (void)_willCommitPresentation;

@end
