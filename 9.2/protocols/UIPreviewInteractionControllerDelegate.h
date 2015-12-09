/* Generated by RuntimeBrowser.
 */

@protocol UIPreviewInteractionControllerDelegate <NSObject>

@required

- (BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(UIPreviewInteractionController *)arg1;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 performCommitForPreviewViewController:(UIViewController *)arg2 committedViewController:(UIViewController *)arg3;
- (UIViewController *)previewInteractionController:(UIPreviewInteractionController *)arg1 viewControllerForPreviewingAtPosition:(struct CGPoint { float x1; float x2; })arg2 inView:(UIView *)arg3 presentingViewController:(id*)arg4;

@optional

- (UIViewController *)previewInteractionController:(UIPreviewInteractionController *)arg1 committedViewControllerForPreviewViewController:(UIViewController *)arg2;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 didDismissViewController:(UIViewController *)arg2 committing:(BOOL)arg3;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 interactionProgress:(UIInteractionProgress *)arg2 forRevealAtLocation:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(UIView *)arg4 containerView:(UIView *)arg5;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 interactionProgress:(UIInteractionProgress *)arg2 forRevealAtPosition:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(UIView *)arg4;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 performCommitToViewController:(UIViewController *)arg2;
- (BOOL)previewInteractionController:(UIPreviewInteractionController *)arg1 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)previewInteractionController:(UIPreviewInteractionController *)arg1 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint { float x1; float x2; })arg2 inView:(UIView *)arg3;
- (BOOL)previewInteractionController:(UIPreviewInteractionController *)arg1 shouldUseStandardRevealTransformForPreviewingAtPosition:(struct CGPoint { float x1; float x2; })arg2 inView:(UIView *)arg3;
- (void)previewInteractionController:(UIPreviewInteractionController *)arg1 willPresentViewController:(UIViewController *)arg2 forPosition:(struct CGPoint { float x1; float x2; })arg3 inSourceView:(UIView *)arg4;

@end
