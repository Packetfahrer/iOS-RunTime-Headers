/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKApplicationDelegate : NSObject <TSKApplicationDelegate> {
    <TSKCompatibilityDelegate> * _compatibilityDelegate;
}

@property (getter=isActivating, readonly) BOOL activating;
@property (nonatomic, readonly) NSString *applicationName;
@property (nonatomic, readonly) NSString *cloudKitContainerIdentifier;
@property (nonatomic, retain) <TSKCompatibilityDelegate> *compatibilityDelegate;
@property (nonatomic, readonly) BOOL designModeEnabled;
@property (nonatomic, readonly) NSString *documentTypeDisplayName;
@property (nonatomic, readonly) NSString *documentTypeDisplayNameForSharingInvitation;
@property (nonatomic) unsigned int iWorkAuthorColorIndex;
@property (nonatomic, copy) NSString *iWorkAuthorName;
@property (getter=isInBackground, readonly) BOOL inBackground;
@property (nonatomic, readonly) BOOL isCanvasFullScreen;
@property (nonatomic, readonly) BOOL performanceModeEnabled;
@property (nonatomic, readonly) BOOL tableCellInspectorShowsNaturalAlignment;
@property (nonatomic, readonly) BOOL tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
@property (nonatomic, readonly) BOOL tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
@property (nonatomic, readonly) BOOL tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
@property (nonatomic, readonly) NSString *templateTypeDisplayName;
@property (nonatomic, readonly) BOOL textInspectorShowsMoreSubpane;

+ (id)documentDirectoryPath;
+ (id)platform_sharedDelegate;
+ (void)setDelegate:(id)arg1;
+ (id)sharedDelegate;

- (id)appChartPropertyOverrides;
- (id)applicationName;
- (id)applicationNameForTitleBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })applicationToolbarFrame;
- (id)cloudKitContainerIdentifier;
- (id)compatibilityDelegate;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (BOOL)designModeEnabled;
- (id)documentTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (unsigned int)iWorkAuthorColorIndex;
- (id)iWorkAuthorName;
- (id)init;
- (id)invalidURLSchemes;
- (BOOL)isActivating;
- (BOOL)isCanvasFullScreen;
- (BOOL)isInBackground;
- (BOOL)openURL:(id)arg1;
- (BOOL)performanceModeEnabled;
- (id)previewImageForType:(id)arg1;
- (void)setCompatibilityDelegate:(id)arg1;
- (void)setIWorkAuthorColorIndex:(unsigned int)arg1;
- (void)setIWorkAuthorName:(id)arg1;
- (BOOL)shouldRenderContactShadow;
- (BOOL)shouldRenderCurvedShadow;
- (BOOL)shouldValidateMasterLayoutWhileInsertingRows;
- (BOOL)supportsRTL;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)tableCellInspectorShowsNaturalAlignment;
- (BOOL)tableHeaderInspectorShowsFreezeHeaderColumnsSwitch;
- (BOOL)tableHeaderInspectorShowsFreezeHeaderRowsSwitch;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (id)templateTypeDisplayName;
- (BOOL)textInspectorShowsMoreSubpane;

@end
