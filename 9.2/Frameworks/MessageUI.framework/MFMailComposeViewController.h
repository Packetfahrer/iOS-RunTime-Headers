/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeViewController : UINavigationController {
    BOOL  _didChangeStatusBarStyle;
    id  _internal;
    int  _savedStatusBarStyle;
    id /* block */  _setupAnimationBlock;
}

@property (nonatomic) <MFMailComposeViewControllerDelegate> *mailComposeDelegate;

+ (BOOL)canSendMail;
+ (BOOL)canSendMailSourceAccountManagement:(int)arg1;
+ (BOOL)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (unsigned int)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;

- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2;
- (id)_internalViewController;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addSetupAnimationBlock:(id /* block */)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (void)currentAttachmentLimitWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)finalizeCompositionValues;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)mailComposeDelegate;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned int)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setContentVisible:(BOOL)arg1;
- (void)setKeyboardVisible:(BOOL)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(BOOL)arg2;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
