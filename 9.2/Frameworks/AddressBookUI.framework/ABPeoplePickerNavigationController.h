/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPeoplePickerNavigationController : UINavigationController <ABContactViewControllerDelegate> {
    void * _addressBook;
    BOOL  _allowsContactBlocking;
    int  _behavior;
    CNContactPickerViewController * _contactPicker;
    UISplitViewController<ABContactViewControllerDelegate> * _contactsSplitViewPresentationDelegate;
    NSArray * _defaultToolbarItems;
    struct __CFArray { } * _displayedProperties;
    struct { 
        unsigned int allowsEditing : 1; 
        unsigned int allowsCancel : 1; 
        unsigned int allowsActions : 1; 
        unsigned int allowsConferencing : 1; 
        unsigned int allowsSounds : 1; 
        unsigned int allowsVibrations : 1; 
        unsigned int hidesSearchableSources : 1; 
        unsigned int hidesPromptInLandscape : 1; 
        unsigned int forceInProcess : 1; 
        unsigned int forceOutOfProcess : 1; 
    }  _flags;
    BOOL  _ignoreViewWillBePresented;
    int  _insertionProperty;
    id  _insertionValue;
    ABModel * _model;
    BOOL  _navigationBarIsAnimating;
    id  _peoplePickerDelegate;
    NSPredicate * _predicateForEnablingPerson;
    NSPredicate * _predicateForSelectionOfPerson;
    NSPredicate * _predicateForSelectionOfProperty;
    id  _reserved1;
    id  _reserved2;
    id  _reserved3;
    id  _reserved4;
}

@property (setter=ab_setDefaultToolbarItems:, nonatomic, retain) NSArray *ab_defaultToolbarItems;
@property (nonatomic) const void*addressBook;
@property (nonatomic) BOOL allowsContactBlocking;
@property (nonatomic) UISplitViewController<ABContactViewControllerDelegate> *contactsSplitViewPresentationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayedProperties;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hidesPromptInLandscape;
@property (nonatomic) BOOL hidesSearchableSources;
@property (nonatomic) <ABPeoplePickerNavigationControllerDelegate> *peoplePickerDelegate;
@property (nonatomic, copy) NSPredicate *predicateForEnablingPerson;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfPerson;
@property (nonatomic, copy) NSPredicate *predicateForSelectionOfProperty;
@property (nonatomic, retain) <ABStyleProvider> *styleProvider;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

+ (void)notifyPreferencesChanged;

- (BOOL)_allowsAutorotation;
- (void)_applicationEnteringForeground;
- (void)_applyStyleProvider;
- (void)_endDelayingPresentation;
- (BOOL)_isDelayingPresentation;
- (id)_legacyKeyForNewKey:(id)arg1;
- (void)_performCancel:(id)arg1;
- (void)_setPopoverController:(id)arg1;
- (void)_setViewController:(id)arg1 animated:(BOOL)arg2;
- (id)_setupAccountsAndGroupsController;
- (BOOL)_shouldPreventCancelButtonsFromShowing;
- (void)_updateViewControllerNavigationButtons;
- (void)_viewWillBePresented;
- (void)ab_changeViewControllerToolbarItemsIfEmpty:(id)arg1 animated:(BOOL)arg2;
- (void)ab_changeViewControllersToolbarItemsIfEmpty:(BOOL)arg1;
- (id)ab_defaultToolbarItems;
- (BOOL)ab_ownsViewControllerToolbarItems:(id)arg1;
- (void)ab_restoreViewControllerToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (void)ab_setDefaultToolbarItems:(id)arg1;
- (void)ab_setDefaultToolbarItems:(id)arg1 animated:(BOOL)arg2;
- (const void*)addressBook;
- (BOOL)allowsActions;
- (BOOL)allowsCancel;
- (BOOL)allowsCardEditing;
- (BOOL)allowsConferencing;
- (BOOL)allowsContactBlocking;
- (BOOL)allowsShowingPersonsCards;
- (BOOL)allowsSounds;
- (id)bannerTitle;
- (id)bannerValue;
- (int)behavior;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)contactPickerPresentedViewController:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4;
- (id)contactsSplitViewPresentationDelegate;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void*)displayedPerson;
- (id)displayedProperties;
- (id)displayedPropertyKeys;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)finishNavigationBarAnimation;
- (void)groupsViewControllerDidFinish:(id)arg1;
- (BOOL)hidesPromptInLandscape;
- (BOOL)hidesSearchableSources;
- (id)init;
- (id)initAsAddressBook:(BOOL)arg1;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2;
- (id)initAsAddressBook:(BOOL)arg1 withAddressBook:(void*)arg2 withStyle:(int)arg3;
- (id)initAsAddressBook:(BOOL)arg1 withStyle:(int)arg2;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(int)arg1;
- (int)insertionProperty;
- (id)insertionValue;
- (BOOL)isDefaultViewControllerVisible;
- (BOOL)isOutOfProcess;
- (void)loadState;
- (id)membersViewController;
- (id)model;
- (void)navigationBar:(id)arg1 didPopItem:(id)arg2;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (BOOL)navigationBar:(id)arg1 shouldPushItem:(id)arg2;
- (BOOL)navigationBarIsAnimating;
- (void)notePreferencesChanged;
- (id)peoplePickerDelegate;
- (void)personViewController:(id)arg1 requestedLinkForPerson:(id)arg2;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (void)popToDefaultViewController:(BOOL)arg1;
- (id)predicateForEnablingPerson;
- (id)predicateForSelectionOfPerson;
- (id)predicateForSelectionOfProperty;
- (void)presentContactViewController:(id)arg1;
- (void)presentGroupsViewController;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)prompt;
- (id)promptForViewControllerType:(int)arg1 orientation:(int)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)removeChildViewController:(id)arg1;
- (void)removeChildViewController:(id)arg1 notifyDidMove:(BOOL)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)saveState;
- (void)scrollToClosestContactMatching:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsCancel:(BOOL)arg1;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsContactBlocking:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAllowsVibrations:(BOOL)arg1;
- (void)setBannerTitle:(id)arg1 value:(id)arg2;
- (void)setBehavior:(int)arg1;
- (void)setContactsSplitViewPresentationDelegate:(id)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize { float x1; float x2; })arg1;
- (void)setDisplayedProperties:(id)arg1;
- (void)setForceInProcess:(BOOL)arg1;
- (void)setForceOutOfProcess:(BOOL)arg1;
- (void)setHidesPromptInLandscape:(BOOL)arg1;
- (void)setHidesSearchableSources:(BOOL)arg1;
- (void)setInsertionValue:(id)arg1 property:(int)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setParentViewController:(id)arg1;
- (void)setPeoplePickerDelegate:(id)arg1;
- (void)setPredicateForEnablingPerson:(id)arg1;
- (void)setPredicateForSelectionOfPerson:(id)arg1;
- (void)setPredicateForSelectionOfProperty:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setPrompt:(id)arg1 forViewControllerType:(int)arg2;
- (void)setStyleProvider:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setupAsMePicker;
- (void)setupInitialStackAndLoadState:(BOOL)arg1;
- (void)setupViewControllers;
- (BOOL)shouldContinueAfterSelectingPerson:(void*)arg1 cell:(id)arg2;
- (BOOL)shouldPerformDefaultActionForPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 withMemberCell:(id)arg4;
- (void)showCardForPerson:(void*)arg1;
- (BOOL)showCardForPerson:(void*)arg1 withMemberCell:(id)arg2 animate:(BOOL)arg3 forceDisableEditing:(BOOL)arg4;
- (void)showMembersOfContactsFilter:(id)arg1;
- (void)showMembersOfContactsFilter:(id)arg1 animate:(BOOL)arg2 loadState:(BOOL)arg3;
- (void)showUnifiedCardForPerson:(void*)arg1;
- (id)styleProvider;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2;
- (BOOL)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 withMemberCell:(id)arg5;
- (id)valueForUndefinedKey:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willShowViewController:(id)arg1 animated:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (BOOL)ckCanDismissWhenSuspending;

@end
