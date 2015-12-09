/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLPreviewUIItem : NSObject <QLPreviewUIItem> {
    int  _index;
    <QLPreviewItem> * _previewItem;
    QLPreviewThumbnailGenerator * _thumbnailGenerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) UIImage *icon;
@property (readonly) BOOL isFolder;
@property (readonly) int level;
@property (readonly) int previewItemIndex;
@property (nonatomic, readonly) NSString *previewItemTitle;
@property (nonatomic, readonly) NSURL *previewItemURL;
@property (readonly) Class superclass;

+ (id)genericIconForPreviewItem:(id)arg1;
+ (id)uiItemForPreviewItem:(id)arg1 index:(int)arg2;

- (void).cxx_destruct;
- (void)cancelIconUpdate;
- (id)icon;
- (BOOL)isFolder;
- (int)level;
- (int)previewItemIndex;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)updateIconWithSize:(struct CGSize { float x1; float x2; })arg1 completionBlock:(id /* block */)arg2;

@end
