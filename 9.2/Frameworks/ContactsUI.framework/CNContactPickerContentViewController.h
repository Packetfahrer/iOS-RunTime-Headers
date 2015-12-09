/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactPickerContentViewController : UIViewController <CNContactNavigationControllerDelegate, CNContactPickerContentViewController> {
    BOOL  _allowsCancel;
    BOOL  _allowsEditing;
    NSString * _bannerTitle;
    NSString * _bannerValue;
    int  _cardActions;
    BOOL  _clientHasContactsAccess;
    BOOL  _clientWantsMultipleContacts;
    BOOL  _clientWantsMultipleProperties;
    BOOL  _clientWantsSingleContact;
    BOOL  _clientWantsSingleProperty;
    CNContactNavigationController * _contactNavigationController;
    NSMutableArray * _contactProperties;
    CNContactStoreDataSource * _dataSource;
    <CNContactPickerContentDelegate> * _delegate;
    NSArray * _displayedPropertyKeys;
    BOOL  _hidesPromptInLandscape;
    BOOL  _hidesSearchableSources;
    BOOL  _onlyRealContacts;
    NSPredicate * _predicateForEnablingContact;
    NSPredicate * _predicateForSelectionOfContact;
    NSPredicate * _predicateForSelectionOfProperty;
    NSString * _prompt;
}

@property (nonatomic) BOOL allowsCancel;
@property (nonatomic) BOOL allowsEditing;
@property (nonatomic, copy) NSString *bannerTitle;
@property (nonatomic, copy) NSString *bannerValue;
@property (nonatomic) int cardActions;
@property (nonatomic) BOOL clientHasContactsAccess;
@property (nonatomic) BOOL clientWantsMultipleContacts;
@property (nonatomic) BOOL clientWantsMultipleProperties;
@property (nonatomic) BOOL clientWantsSingleContact;
@property (nonatomic) BOOL clientWantsSingleProperty;
@property (nonatomic, retain) CNContactNavigationController *contactNavigationController;
@property (nonatomic, retain) NSMutableArray *contactProperties;
@property (nonatomic, retain) CNContactStoreDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactPickerContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedPropertyKeys;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesPromptInLandscape;
@property (nonatomic) BOOL hidesSearchableSources;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic) BOOL onlyRealContacts;
@property (nonatomic, copy) NSPredicate *predicateForEnablingContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfContact;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (nonatomic, copy) NSString *prompt;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_selectedContact:(id)arg1;
- (void)_selectedContacts:(id)arg1;
- (void)_selectedProperties:(id)arg1;
- (void)_selectedProperty:(id)arg1;
- (void)_updatePromptWithViewSize:(struct CGSize { float x1; float x2; })arg1 transitionCoordinator:(id)arg2;
- (id)_validatePredicatesWithError:(id*)arg1;
- (BOOL)allowsCancel;
- (BOOL)allowsEditing;
- (id)bannerTitle;
- (id)bannerValue;
- (int)cardActions;
- (BOOL)clientHasContactsAccess;
- (BOOL)clientWantsMultipleContacts;
- (BOOL)clientWantsMultipleProperties;
- (BOOL)clientWantsSingleContact;
- (BOOL)clientWantsSingleProperty;
- (id)contactNavigationController;
- (BOOL)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
- (BOOL)contactNavigationController:(id)arg1 presentContactViewController:(id)arg2 animated:(BOOL)arg3;
- (BOOL)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (BOOL)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
- (void)contactNavigationControllerDidCancel:(id)arg1;
- (void)contactNavigationControllerDidComplete:(id)arg1;
- (id)contactProperties;
- (id)dataSource;
- (id)delegate;
- (id)displayedPropertyKeys;
- (BOOL)hidesPromptInLandscape;
- (BOOL)hidesSearchableSources;
- (id)init;
- (void)invalidate;
- (void)invalidateSelectionAnimated:(BOOL)arg1;
- (id)navigationController;
- (BOOL)onlyRealContacts;
- (id)predicateForEnablingContact;
- (id)predicateForSelectionOfContact;
- (id)predicateForSelectionOfProperty;
- (id)prompt;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setBannerValue:(id)arg1;
- (void)setCardActions:(int)arg1;
- (void)setClientHasContactsAccess:(BOOL)arg1;
- (void)setClientWantsMultipleContacts:(BOOL)arg1;
- (void)setClientWantsMultipleProperties:(BOOL)arg1;
- (void)setClientWantsSingleContact:(BOOL)arg1;
- (void)setClientWantsSingleProperty:(BOOL)arg1;
- (void)setContactNavigationController:(id)arg1;
- (void)setContactProperties:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedPropertyKeys:(id)arg1;
- (void)setHidesPromptInLandscape:(BOOL)arg1;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (void)setOnlyRealContacts:(BOOL)arg1;
- (void)setPredicateForEnablingContact:(id)arg1;
- (void)setPredicateForSelectionOfContact:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(id /* block */)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
