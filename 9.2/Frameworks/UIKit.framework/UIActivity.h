/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIActivity : NSObject {
    id /* block */  _activityCompletionHandler;
    id /* block */  _activityCompletionWithItemsHandler;
    int  _defaultPriority;
}

@property (nonatomic, copy) id /* block */ activityCompletionHandler;
@property (nonatomic, copy) id /* block */ activityCompletionWithItemsHandler;
@property (nonatomic, readonly) NSExtension *applicationExtension;

+ (id)_activityFunctionImage:(id)arg1;
+ (id)_activityGenericImage:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
+ (id)_activitySettingsImageForApplication:(id)arg1;
+ (int)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (id)_attachmentNameForActivityItem:(id)arg1;
- (id)_beforeActivity;
- (BOOL)_canBeExcludedByActivityViewController:(id)arg1;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;
- (void)_cleanup;
- (id)_dataTypeIdentifierForActivityItem:(id)arg1;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)_embeddedActivityViewController;
- (void)_injectedJavaScriptResult:(id)arg1;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)_setActivityCompletionHandler:(id /* block */)arg1;
- (void)_setActivityCompletionWithItemsHandler:(id /* block */)arg1;
- (void)_setSubject:(id)arg1;
- (id)_subjectForActivityItem:(id)arg1;
- (id)_thumbnailImageForActivityItem:(id)arg1;
- (struct CGSize { float x1; float x2; })_thumbnailSize;
- (void)_willPresentAsFormSheet;
- (id /* block */)activityCompletionHandler;
- (id /* block */)activityCompletionWithItemsHandler;
- (void)activityDidFinish:(BOOL)arg1;
- (void)activityDidFinish:(BOOL)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityImage;
- (id)activitySettingsImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)applicationExtension;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityCompletionHandler:(id /* block */)arg1;
- (void)setActivityCompletionWithItemsHandler:(id /* block */)arg1;

@end
