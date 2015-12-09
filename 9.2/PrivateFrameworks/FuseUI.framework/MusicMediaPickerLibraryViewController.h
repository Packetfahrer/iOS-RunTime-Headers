/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPickerLibraryViewController : UITableViewController <MusicClientContextConsuming, MusicMediaPickerSearchDelegate> {
    NSArray * _allLibraryCategoriesConfigurations;
    MusicClientContext * _clientContext;
    BOOL  _invokedForPlaylistEditing;
    BOOL  _showsOnlyStoreItems;
    MPMediaPredicate * _storeItemsMediaLibraryPredicate;
    NSArray * _usedDataSources;
    NSArray * _usedLibraryCategoriesConfigurations;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isInvokedForPlaylistEditing, nonatomic) BOOL invokedForPlaylistEditing;
@property (nonatomic) BOOL showsOnlyStoreItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dataSourceDidInvalidate:(id)arg1;
- (void)_filterAvailableCategoryConfigurations;
- (void)_loadCategoryConfigurations;
- (id)clientContext;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isInvokedForPlaylistEditing;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setInvokedForPlaylistEditing:(BOOL)arg1;
- (void)setShowsOnlyStoreItems:(BOOL)arg1;
- (BOOL)showsOnlyStoreItems;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableViewThatNeedsSearchBarHeader;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
