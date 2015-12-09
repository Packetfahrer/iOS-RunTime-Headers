/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassbookSettingsController : NSObject <PKPaymentPassTableCellDelegate, PKPaymentServiceDelegate> {
    PSSpecifier * _addCardButtonSpecifier;
    PSSpecifier * _cardsGroupSpecifier;
    PSSpecifier * _companionCardsGroupSpecifier;
    NSArray * _companionPassSpecifiers;
    NSArray * _companionPasses;
    int  _context;
    <PKPassbookSettingsDataSource> * _dataSource;
    NSString * _defaultCardIdentifier;
    PSSpecifier * _defaultContactEmailSpecifier;
    PSSpecifier * _defaultContactPhoneSpecifier;
    PSSpecifier * _defaultPaymentSpecifier;
    PSSpecifier * _defaultShippingAddressSpecifier;
    <PKPassbookSettingsDelegate> * _delegate;
    NSArray * _lockscreenSwitchSpecifiers;
    <PKPassbookSettingsOptionsDelegate> * _optionsDelegate;
    <PKPassLibraryDataProvider> * _passLibraryDataProvider;
    NSArray * _passSpecifiers;
    NSArray * _passes;
    <PKPaymentDataProvider> * _paymentDataProvider;
    PKPaymentSetupAboutViewController * _privacyController;
    NSString * _provisioningPassIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassbookSettingsDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)_addPaymentCard;
- (id)_bridgeSpecifiers;
- (id)_companionPassSpecifiers;
- (id)_currentDefaultPaymentPass;
- (id)_defaultContactEmailSpecifier;
- (id)_defaultContactPhoneSpecifier;
- (id)_defaultPaymentSpecifier;
- (id)_defaultShippingAddressSpecifier;
- (id)_defaultsGroupSpecifiers;
- (id)_displayableStringForLabeledValue:(id)arg1;
- (id)_getDefaultContactEmail;
- (id)_getDefaultContactPhone;
- (id)_getDefaultPaymentCard;
- (id)_getDefaultShippingAddress;
- (void)_handleDefaultPaymentPassChangedTo:(id)arg1 withSender:(id)arg2 optionsController:(id)arg3 canPrompt:(BOOL)arg4;
- (id)_lockscreenSwitchGroupSpecifiers;
- (id)_lockscreenSwitchSettingForSpecifier:(id)arg1;
- (void)_openPrivacyLink;
- (id)_passSpecifiers;
- (void)_reloadPassData;
- (id)_restrictedModeSpecifier;
- (void)_setLockscreenSwitchSetting:(id)arg1 forSpecifier:(id)arg2;
- (id)_settingsSpecifiers;
- (void)_showCardDetails:(id)arg1;
- (void)_showDefaultContactEmailOptions:(id)arg1;
- (void)_showDefaultContactPhoneOptions:(id)arg1;
- (void)_showDefaultPaymentOptions:(id)arg1;
- (void)_showDefaultShippingAddressOptions:(id)arg1;
- (id)_specifierForPassUniqueID:(id)arg1;
- (void)_updateAddButtonSpecifier;
- (void)_updateCardsGroupSpecifier;
- (void)_updateCompanionGroupSpecifier;
- (void)_updateCompanionPassesAddButton;
- (void)addButtonPressedForPaymentPass:(id)arg1;
- (void)addCardTapped;
- (void)addCardTappedForPaymentPassWithUniqueID:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2 context:(int)arg3;
- (void)refreshDefaultCard;
- (void)refreshPasses;
- (void)removeFooterForSpecifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;

@end
