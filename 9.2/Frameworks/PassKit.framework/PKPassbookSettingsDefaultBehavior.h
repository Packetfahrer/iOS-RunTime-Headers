/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {
    PKPaymentOptionsDefaults * _options;
    PKPassLibraryDefaultDataProvider * _passLibraryDataProvider;
    PKPaymentDefaultDataProvider * _paymentDataProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (BOOL)deviceInRestrictedMode;
- (BOOL)deviceSupportsInAppPayments;
- (id)init;
- (id)optionsDelegate;
- (id)passLibraryDataProvider;
- (id)paymentDataProvider;
- (id)secureElementID;
- (BOOL)secureElementIsProductionSigned;
- (id)setupDelegate;
- (BOOL)showPassState;

@end
