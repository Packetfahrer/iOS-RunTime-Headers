/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPDocumentRoot : TSADocumentRoot <TSCEResolverContainer, TSDInfoUUIDPathPrefixComponentsProvider, TSDThumbnailProducer, TSTResolverContainerNameProvider, TSWPChangeSessionManager, TSWPChangeVisibility, TSWPDrawableOLC, TSWPStorageParent> {
    TSWPChangeSession * _activeChangeSession;
    TSWPStorage * _bodyStorage;
    float  _bottomMargin;
    NSMutableArray * _changeSessionHistory;
    BOOL  _changeTrackingEnabled;
    BOOL  _changeTrackingPaused;
    NSMutableDictionary * _chartsUIState;
    NSArray * _citationRecords;
    float  _currentThumbnailContainerWidth;
    TPDrawablesZOrder * _drawablesZOrder;
    TPFloatingDrawables * _floatingDrawables;
    float  _footerMargin;
    float  _headerMargin;
    struct __CFLocale { } * _hyphenationLocale;
    TPInteractiveCanvasController * _interactiveCanvasController;
    BOOL  _layoutBodyVertically;
    float  _leftMargin;
    TSWPChangeSession * _mostRecentChangeSession;
    BOOL  _needsInitialization;
    BOOL  _newDocument;
    NSArray * _obsoleteTOCStyles;
    unsigned int  _orientation;
    TPPageLayoutNotifier * _pageLayoutNotifier;
    float  _pageScale;
    struct CGSize { 
        float width; 
        float height; 
    }  _pageSize;
    TPPaginatedPageController * _paginatedPageController;
    NSString * _paperID;
    NSString * _printerID;
    float  _rightMargin;
    TPDocumentSettings * _settings;
    BOOL  _shouldUniquifyTableNames;
    TSSStylesheet * _stylesheet;
    NSMutableDictionary * _tableInfosWithUniqueNames;
    unsigned int  _tableNameCounter;
    TPTheme * _theme;
    TSDThumbnailController * _thumbnailController;
    TPTOCController * _tocController;
    float  _topMargin;
    BOOL  _usesSingleHeaderFooter;
    BOOL  initiallyShowRuler;
}

@property (nonatomic, retain) TSWPChangeSession *activeChangeSession;
@property (nonatomic, readonly, retain) TSWPStorage *bodyStorage;
@property (nonatomic) float bottomMargin;
@property (nonatomic, retain) NSArray *changeSessionHistory;
@property (getter=isChangeTrackingEnabled, nonatomic) BOOL changeTrackingEnabled;
@property (getter=isChangeTrackingPaused, nonatomic) BOOL changeTrackingPaused;
@property (nonatomic, retain) NSMutableDictionary *chartsUIState;
@property (nonatomic, readonly) int contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TPDrawablesZOrder *drawablesZOrder;
@property (nonatomic, readonly, retain) TPSection *firstSection;
@property (nonatomic, retain) TPFloatingDrawables *floatingDrawables;
@property (nonatomic) float footerMargin;
@property (nonatomic, readonly) BOOL hasTrackedChanges;
@property (readonly) unsigned int hash;
@property (nonatomic) float headerMargin;
@property (nonatomic) BOOL initiallyShowRuler;
@property (nonatomic) TPInteractiveCanvasController *interactiveCanvasController;
@property (nonatomic, readonly) BOOL isNewDocument;
@property (nonatomic, readonly) BOOL isTrackingChanges;
@property (nonatomic) BOOL layoutBodyVertically;
@property (nonatomic) float leftMargin;
@property (nonatomic, retain) TSWPChangeSession *mostRecentChangeSession;
@property (nonatomic, readonly, retain) NSArray *nonHiddenSections;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) float pageScale;
@property (nonatomic) struct CGSize { float x1; float x2; } pageSize;
@property (nonatomic, readonly) TPPaginatedPageController *paginatedPageController;
@property (nonatomic, copy) NSString *paperID;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } paperSize;
@property (nonatomic, copy) NSString *printerID;
@property (nonatomic) float rightMargin;
@property (nonatomic, readonly, retain) NSArray *sections;
@property (nonatomic, readonly, retain) TPDocumentSettings *settings;
@property (nonatomic, retain) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (nonatomic, retain) TPTheme *theme;
@property (nonatomic, readonly) TSDThumbnailController *thumbnailController;
@property (nonatomic, retain) TPTOCController *tocController;
@property (nonatomic) float topMargin;
@property (getter=isTrackingChanges, nonatomic, readonly) BOOL trackingChanges;
@property (nonatomic) BOOL usesSingleHeaderFooter;

+ (void)localizeTextStorage:(id)arg1 withTemplateBundle:(id)arg2;
+ (struct CGSize { float x1; float x2; })pageSizeFromPaperSize:(struct CGSize { float x1; float x2; })arg1 pageScale:(float)arg2 orientation:(unsigned int)arg3;
+ (struct CGSize { float x1; float x2; })previewImageSizeForType:(unsigned int)arg1;

- (id)UIStateForChart:(id)arg1;
- (id)activeChangeSession;
- (unsigned int)applicationType;
- (BOOL)autoListRecognition;
- (BOOL)autoListTermination;
- (id)bodyStorage;
- (float)bodyWidth;
- (float)bottomMargin;
- (id)changeSessionHistory;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (id)chartsUIState;
- (id)childEnumerator;
- (id)citationRecords;
- (int)contentWritingDirection;
- (void)dealloc;
- (void)didAddDrawable:(id)arg1;
- (void)didEnterBackground;
- (void)documentDidLoad;
- (BOOL)documentDisallowsHighlightsOnStorage:(id)arg1;
- (id)drawablesZOrder;
- (id)firstSection;
- (id)floatingDrawables;
- (float)footerMargin;
- (float)footnoteGap;
- (int)footnoteKind;
- (BOOL)footnotesShouldAffectBodyLayout;
- (BOOL)hasTrackedChanges;
- (float)headerMargin;
- (struct __CFLocale { }*)hyphenationLocale;
- (int)indexForObject:(id)arg1;
- (id)initForThemeImportWithContext:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initUsingDefaultThemeWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)initiallyShowRuler;
- (id)interactiveCanvasController;
- (void)invalidateThumbnailForPageIndex:(unsigned int)arg1;
- (BOOL)isChangeTrackingEnabled;
- (BOOL)isChangeTrackingPaused;
- (BOOL)isMultiPageForQuickLook;
- (BOOL)isNewDocument;
- (BOOL)isPendingTableNameUniquification;
- (BOOL)isSectionModel:(id)arg1;
- (BOOL)isTrackingChanges;
- (BOOL)layoutBodyVertically;
- (float)leftMargin;
- (id)makeIsolatedStyleMapper;
- (id)makeStyleMapper;
- (id)markStringForFootnoteReferenceStorage:(id)arg1;
- (id)modelEnumeratorWithFlags:(unsigned int)arg1 forObjectsPassingTest:(id /* block */)arg2;
- (id)modelPathComponentForChild:(id)arg1;
- (id)mostRecentChangeSession;
- (id)nameForResolverContainer:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned int)arg1 inTextStorage:(id)arg2;
- (BOOL)needsToExplainEnablingChangeTracking;
- (unsigned int)nextUntitledResolverIndex;
- (id)nonHiddenSections;
- (unsigned int)orientation;
- (void)pCommonInitialization;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pConjureUpBodyRect;
- (void)pCreateBodyStorage;
- (void)pCreateDrawablesZOrderBodyStorage:(id)arg1 addAnchoredDrawables:(BOOL)arg2;
- (void)pCreateFloatingDrawables;
- (void)pFinishInitialization;
- (void)pUpgradeSection:(id)arg1 documentVersion:(unsigned long long)arg2;
- (unsigned int)p_autoNumberForStorage:(id)arg1 footnoteNumbering:(int)arg2 footnoteKind:(int)arg3;
- (id)p_previewImageWithImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)p_realTOCEntryStyleFromFakeTOCEntryStyle:(id)arg1 context:(id)arg2;
- (void)p_uniquifyTableNames;
- (void)p_upgradeBodyTOC;
- (void)p_upgradeTOCModelForUnity20;
- (void)p_upgradeTOCStyles;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pageBoundsWithinMargins;
- (void)pageCountDidChangeForPageController:(id)arg1;
- (unsigned int)pageIndexForThumbnailIdentifier:(id)arg1;
- (id)pageMasterOwningModel:(id)arg1;
- (BOOL)pageMastersAllowDrawable:(id)arg1;
- (float)pageScale;
- (struct CGSize { float x1; float x2; })pageSize;
- (id)paginatedPageController;
- (id)paperID;
- (struct CGSize { float x1; float x2; })paperSize;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (id)previewImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)printerID;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (BOOL)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (void)resumeBackgroundActivities;
- (BOOL)reuseThumbnailerUntilIdleForIdentifier:(id)arg1;
- (float)rightMargin;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (id)rootInfosForIdentifier:(id)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (void)saveToArchiver:(id)arg1;
- (id)sections;
- (void)setActiveChangeSession:(id)arg1;
- (void)setBodyStorage:(id)arg1 dolcContext:(id)arg2;
- (void)setBottomMargin:(float)arg1;
- (void)setChangeSessionHistory:(id)arg1;
- (void)setChangeTrackingEnabled:(BOOL)arg1;
- (void)setChangeTrackingPaused:(BOOL)arg1;
- (void)setChartsUIState:(id)arg1;
- (void)setDrawablesZOrder:(id)arg1;
- (void)setFloatingDrawables:(id)arg1;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setIndex:(int)arg1 forObject:(id)arg2;
- (void)setInitiallyShowRuler:(BOOL)arg1;
- (void)setInteractiveCanvasController:(id)arg1;
- (void)setLayoutBodyVertically:(BOOL)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setMostRecentChangeSession:(id)arg1;
- (void)setOrientation:(unsigned int)arg1;
- (void)setPageScale:(float)arg1;
- (void)setPageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPaperID:(id)arg1;
- (void)setPrinterID:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setStylesheet:(id)arg1 andThemeForImport:(id)arg2;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setTocController:(id)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (void)setUsesSingleHeaderFooter:(BOOL)arg1;
- (void)setValue:(float)arg1 forMargin:(int)arg2;
- (id)settings;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldHyphenate;
- (BOOL)shouldShowChangeKind:(int)arg1 date:(id)arg2;
- (BOOL)shouldShowMarkupForChangeKind:(int)arg1 date:(id)arg2;
- (id)storagesWithChanges;
- (id)stylesheet;
- (BOOL)supportHeaderFooterParagraphAlignmentInInspectors;
- (void)suspendBackgroundActivities;
- (BOOL)textIsVertical;
- (id)theme;
- (void)thumbnailContainerDidChange:(id)arg1;
- (id)thumbnailController;
- (id)thumbnailIdentifierForPageIndex:(unsigned int)arg1;
- (Class)thumbnailImagerClass;
- (struct CGSize { float x1; float x2; })thumbnailSizeForIdentifier:(id)arg1;
- (id)tocController;
- (float)topMargin;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })unscaledClipRectForIdentifier:(id)arg1;
- (void)updateWritingDirection:(unsigned int)arg1;
- (void)upgradeFromOldSectionWithPageSize:(struct CGSize { float x1; float x2; })arg1 leftMargin:(float)arg2 rightMargin:(float)arg3 topMargin:(float)arg4 bottomMargin:(float)arg5 headerMargin:(float)arg6 footerMargin:(float)arg7;
- (BOOL)useLigatures;
- (BOOL)usesSingleHeaderFooter;
- (id)uuidPathPrefixComponentsForInfo:(id)arg1;
- (float)valueForMargin:(int)arg1;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)willClose;
- (void)willEnterForeground;
- (void)willHide;
- (void)willRemoveDrawable:(id)arg1;
- (unsigned int)writingDirection;

@end
