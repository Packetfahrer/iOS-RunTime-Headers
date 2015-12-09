/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeBodyField : UIWebDocumentView <WebResourceLoadDelegate> {
    NSArray * _attachmentURLsToReplaceWithFilenames;
    DOMHTMLElement * _blockquote;
    DOMHTMLElement * _body;
    NSString * _compositionContextID;
    DOMHTMLDocument * _document;
    unsigned int  _forwardingNotification;
    unsigned int  _imageCount;
    UIBarButtonItemGroup * _inputAssistantItemGroup;
    unsigned int  _isDirty;
    unsigned int  _isLoading;
    struct CGSize { 
        float width; 
        float height; 
    }  _layoutSize;
    <MFMailComposeViewDelegate> * _mailComposeViewDelegate;
    unsigned int  _needsReplaceImages;
    struct CGSize { 
        float width; 
        float height; 
    }  _originalSize;
    BOOL  _prefersFirstLineSelection;
    int  _preventLayout;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _rangeToSelect;
    BOOL  _shouldShowStandardButtons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL shouldShowMarkupButton;
@property BOOL shouldShowStandardButtons;
@property (readonly) Class superclass;

- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3;
- (id)_addInlineAttachmentWithData:(id)arg1 fileName:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (void)_applyLayoutMarginsToBodyStyle;
- (id)_attachmentPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (id)_attachmentPlaceholderForFileName:(id)arg1 fileSize:(int)arg2 url:(id)arg3 mimeType:(id)arg4 contentID:(id)arg5;
- (void)_decreaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (void)_didTapInsertPhotoInputAssistantButton:(id)arg1;
- (void)_ensureQuotedImagesHaveAttachmentStyleForElement:(id)arg1;
- (id)_filenameForVideoAttachmentAtURL:(id)arg1;
- (void)_finishedLoadingURLRequest:(id)arg1 success:(BOOL)arg2;
- (void)_increaseQuoteLevelKeyCommandInvoked:(id)arg1;
- (id)_mailComposeEditingInputAssistantGroup;
- (id)_mimeTypeForFilename:(id)arg1;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3;
- (id)_nodeForAttachmentData:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (id)_nodeForAttachmentFileURL:(id)arg1 text:(id)arg2 type:(id)arg3 contentID:(id)arg4;
- (void)_nts_AddDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)_pasteAsQuotationKeyCommandInvoked:(id)arg1;
- (id)_placeholderForFileName:(id)arg1 fileSize:(int)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)_removeInlineAttachment:(id)arg1;
- (void)_replaceImages;
- (id)_securityScopeForFileURL:(id)arg1;
- (BOOL)_shouldCreatePlaceholderAttachmentForAttachmentWithSize:(unsigned int)arg1;
- (void)_showQuoteLevelOptionsPopover:(id)arg1;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (void)addAdditionalItemsToCalloutBar;
- (void)addDOMNode:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1;
- (void)addMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4 prepended:(BOOL)arg5;
- (void)addSelectedAttachmentsToPasteboard:(id)arg1;
- (void)appendMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)appendQuotedMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)beginPreventingLayout;
- (void)changeQuoteLevel:(int)arg1;
- (void)changeQuoteLevel:(int)arg1 forDOMRange:(id)arg2;
- (id)compositionContextID;
- (BOOL)containsRichText;
- (float)contentWidth;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)deferredBecomeFirstResponder;
- (void)deleteNode:(id)arg1;
- (void)deleteRange:(id)arg1;
- (void)deleteTemporarySelectionMarkersFromDocument:(id)arg1;
- (void)didUndoOrRedo:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(int)arg1;
- (void)endPreventingLayout;
- (void)ensureSelection;
- (id)htmlString;
- (void)htmlString:(id*)arg1 otherHtmlStringsAndAttachments:(id*)arg2 charsets:(id*)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)insertDocumentWithData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4;
- (void)insertDocumentWithURL:(id)arg1;
- (void)insertNode:(id)arg1 parent:(id)arg2 nextSibling:(id)arg3;
- (void)insertNode:(id)arg1 parent:(id)arg2 offset:(int)arg3;
- (void)insertPhotoOrVideoWithInfoDictionary:(id)arg1;
- (id)insertTemporarySelectionMarkersForRange:(id)arg1;
- (void)invalidate;
- (BOOL)isDirty;
- (BOOL)isForwardingNotification;
- (id)keyCommands;
- (void)layoutWithMinimumSize;
- (id)mailComposeViewDelegate;
- (void)markupSelectedAttachment;
- (void)paste:(id)arg1;
- (id)plainTextAlternative;
- (id)plainTextContent;
- (void)prepareDataForDocumentAtURLForInsertion:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2;
- (void)prependMarkupString:(id)arg1 quote:(BOOL)arg2 baseURL:(id)arg3 emptyFirst:(BOOL)arg4;
- (void)prependString:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectOfElementWithID:(id)arg1;
- (void)removeBlockQuoteFromTree:(id)arg1;
- (void)replaceAttachment:(id)arg1 withDocumentAtURL:(id)arg2 completion:(id /* block */)arg3;
- (void)replaceAttachment:(id)arg1 withDocumentData:(id)arg2 fileName:(id)arg3 mimeType:(id)arg4;
- (void)replaceImagesIfNecessary;
- (void)replaceNode:(id)arg1 oldNode:(id)arg2;
- (void)restoreSelectionFromTemporaryMarkers;
- (void)restoreSelectionFromTemporaryMarkers:(BOOL)arg1;
- (void)saveSelectionForUndo;
- (void)scaleImagesToScale:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectedRange;
- (void)setAttachmentURLsToBeReplacedWithFilename:(id)arg1;
- (void)setCaretPosition:(unsigned int)arg1;
- (void)setCompositionContextID:(id)arg1;
- (void)setDirty:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLayoutInterval:(int)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setLoading:(BOOL)arg1;
- (void)setMailComposeViewDelegate:(id)arg1;
- (void)setMarkupString:(id)arg1;
- (void)setMarkupString:(id)arg1 baseURL:(id)arg2 quote:(BOOL)arg3;
- (void)setPinHeight:(float)arg1;
- (void)setPrefersFirstLineSelection;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSelectionStart:(id)arg1 offset:(int)arg2 end:(id)arg3 offset:(int)arg4 affinity:(int)arg5;
- (void)setShouldShowStandardButtons:(BOOL)arg1;
- (BOOL)shouldShowMarkupButton;
- (BOOL)shouldShowStandardButtons;
- (void)splitUpBlockQuotesOverlappingEndOfRange:(id)arg1;
- (void)splitUpBlockQuotesOverlappingStartOfRange:(id)arg1;
- (id)temporaryEndingSelectionMarker;
- (void)unscaleImages;
- (void)updateInputAssistantItem;
- (void)updateQuoteLevelMenu;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (BOOL)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;
- (BOOL)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(int)arg4;
- (void)webViewDidChange:(id)arg1;
- (void)webViewDidDraw:(id)arg1;

@end
