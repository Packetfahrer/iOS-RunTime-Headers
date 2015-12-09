/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSpreadsheetPrintPageRenderer : QLWebViewPrintPageHelper <WebFrameLoadDelegate> {
    unsigned int  _currentPageIndex;
    unsigned int  _currentURLIndex;
    BOOL  _frameLoaded;
    int  _numberOfPages;
    UIWebPaginationInfo * _paginationInfo;
    UIWebBrowserView * _printView;
    BOOL  _printingDone;
    int  _totalPagesPrinted;
    NSMutableArray * _urls;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_documentURLs;
- (BOOL)_loadNextURL;
- (BOOL)_loadURLAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3;
- (int)numberOfPages;
- (id)pdfDataForPageAtIndex:(int)arg1 printingDone:(BOOL*)arg2;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end
