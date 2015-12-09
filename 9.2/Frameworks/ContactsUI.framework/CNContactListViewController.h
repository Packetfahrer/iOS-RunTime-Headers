/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactListViewController : UITableViewController <CNAvatarCardControllerDelegate, CNContactDataSourceDelegate, CNContactListBannerViewDelegate, CNContactPickerDelegate, CNContactViewControllerDelegate, UIGestureRecognizerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating> {
    BOOL  _allowsSearching;
    CNAvatarCardController * _cardController;
    CNContactFormatter * _contactFormatter;
    float  _contentOffsetDueToMeContactBanner;
    NSObject<CNContactDataSource> * _dataSource;
    <CNContactListViewControllerDelegate> * _delegate;
    CNContact * _meContact;
    CNContactListBannerView * _meContactBanner;
    NSString * _meContactBannerFootnoteLabel;
    NSString * _meContactBannerFootnoteValue;
    _UIContentUnavailableView * _noContactsView;
    BOOL  _presentsSearchUI;
    UISearchBar * _searchBar;
    id /* block */  _searchCompletionBlock;
    UISearchController * _searchController;
    CNContactListViewController * _searchResultsController;
    BOOL  _shouldAutoHideMeContactBanner;
    BOOL  _shouldDisplayMeContactBanner;
    BOOL  _shouldRefreshMeContact;
}

@property (nonatomic) BOOL allowsSearching;
@property (nonatomic, retain) CNAvatarCardController *cardController;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) float contentOffsetDueToMeContactBanner;
@property (nonatomic, retain) NSObject<CNContactDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) CNContact *meContact;
@property (nonatomic, retain) CNContactListBannerView *meContactBanner;
@property (nonatomic, copy) NSString *meContactBannerFootnoteLabel;
@property (nonatomic, copy) NSString *meContactBannerFootnoteValue;
@property (nonatomic, readonly) _UIContentUnavailableView *noContactsView;
@property (nonatomic, readonly) BOOL presentsSearchUI;
@property (nonatomic, retain) UISearchBar *searchBar;
@property (nonatomic, copy) id /* block */ searchCompletionBlock;
@property (nonatomic, retain) UISearchController *searchController;
@property (nonatomic, retain) CNContactListViewController *searchResultsController;
@property (getter=isSearching, nonatomic, readonly) BOOL searching;
@property (nonatomic, readonly) NSArray *selectedContacts;
@property (nonatomic) BOOL shouldAutoHideMeContactBanner;
@property (nonatomic) BOOL shouldDisplayMeContactBanner;
@property (nonatomic) BOOL shouldRefreshMeContact;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_contactAtIndexPath:(id)arg1;
- (id)_sections;
- (void)_updateCountString;
- (BOOL)allowsSearching;
- (int)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)bannerView:(id)arg1 wasSelectedToPresentMeContact:(id)arg2;
- (void)bannerViewWasSelectedToPresentPeoplePicker:(id)arg1;
- (void)beginSearch:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)cancelSearch:(id)arg1;
- (id)cardController;
- (void)contactDataSourceDidChange:(id)arg1;
- (void)contactDataSourceDidChangeDisplayName:(id)arg1;
- (id)contactFormatter;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactStoreDidChangeWithNotification:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (float)contentOffsetDueToMeContactBanner;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 searchable:(BOOL)arg2;
- (id)initWithStyle:(int)arg1;
- (BOOL)isContactWithIdentifierMeContactOrLinkedToMeContact:(id)arg1;
- (BOOL)isHandlingSearch;
- (BOOL)isSearching;
- (void)loadView;
- (id)meContact;
- (id)meContactBanner;
- (id)meContactBannerFootnoteLabel;
- (id)meContactBannerFootnoteValue;
- (id)noContactsView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (BOOL)presentsSearchUI;
- (void)refreshMeContactAndMeContactBanner;
- (void)refreshMeContactAndMeContactBannerIfVisible;
- (void)refreshMeContactBanner;
- (void)reloadContacts;
- (id)searchBar;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (id /* block */)searchCompletionBlock;
- (id)searchController;
- (void)searchForString:(id)arg1 animated:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (id)searchResultsController;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (BOOL)selectContact:(id)arg1 animated:(BOOL)arg2 scrollPosition:(int)arg3;
- (id)selectedContacts;
- (void)setAllowsSearching:(BOOL)arg1;
- (void)setCardController:(id)arg1;
- (void)setContactFormatter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setMeContactBanner:(id)arg1;
- (void)setMeContactBannerFootnoteLabel:(id)arg1;
- (void)setMeContactBannerFootnoteValue:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSearchCompletionBlock:(id /* block */)arg1;
- (void)setSearchController:(id)arg1;
- (void)setSearchResultsController:(id)arg1;
- (void)setShouldAutoHideMeContactBanner:(BOOL)arg1;
- (void)setShouldDisplayMeContactBanner:(BOOL)arg1;
- (void)setShouldRefreshMeContact:(BOOL)arg1;
- (void)setupForMultiSelection;
- (BOOL)shouldAutoHideMeContactBanner;
- (BOOL)shouldDisplayMeContactBanner;
- (BOOL)shouldRefreshMeContact;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (BOOL)updateFrameAndDisplayNoContactsViewIfNeeded;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)userHasSelectedToSetupMeContact;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
