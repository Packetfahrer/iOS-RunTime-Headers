/* Generated by RuntimeBrowser.
 */

@protocol MFMailComposeViewDelegate <UIPickerViewDelegate, UITableViewDelegate, UITableViewDataSource, UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate, MFMailMarkupDelegate>

@required

- (BOOL)bccAddressesDirtied;
- (BOOL)canShowAttachmentPicker;
- (BOOL)canShowFromField;
- (BOOL)canShowImageSizeField;
- (void)changeQuoteLevel:(int)arg1;
- (_MFMailCompositionContext *)compositionContext;
- (int)compositionType;
- (NSString *)currentScaleImageSize;
- (void)didInsertAttachment:(MFAttachment *)arg1;
- (void)didInsertBodyText:(NSString *)arg1;
- (NSArray *)emailAddresses;
- (BOOL)hasAttachments;
- (void)importDocument;
- (void)insertPhotoOrVideo;
- (void)markupAttachment:(MFAttachment *)arg1;
- (MFMailPopoverManager *)popoverManager;
- (UIViewController *)presentationViewController;
- (void)scrollToSelectedEntryInFromAddressTableView:(MFFromAddressTableView *)arg1;
- (void)selectCurrentEntryForFromAddressPickerView:(UIPickerView *)arg1;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (NSString *)sendingEmailAddressIfExists;
- (BOOL)sendingEmailDirtied;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (void)showPhotoPickerWithSourceType:(int)arg1 fromSource:(id)arg2;
- (void)updateSignature;

@optional

- (void)composeBodyFieldDidFinishLoad;

@end
