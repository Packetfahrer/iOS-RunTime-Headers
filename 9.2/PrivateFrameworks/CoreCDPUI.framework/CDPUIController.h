/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPUIController : NSObject <CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate, CDPStateUIProvider, CDPWaitingApprovalDelegate, KeychainSyncViewControllerDelegate> {
    <CDPUIDelegate> * _delegate;
    CDPDevicePickerViewController * _devicePicker;
    NSArray * _devices;
    BOOL  _forceInlinePresentation;
    NSNumber * _icscNumericLength;
    BOOL  _isNumericICSC;
    BOOL  _isRandomICSC;
    BOOL  _isUsingMultipleICSC;
    UINavigationController * _navController;
    BOOL  _offerRemoteApproval;
    UIViewController * _presentingViewController;
    CDPRemoteDeviceSecretValidator * _remoteSecretValidator;
    UIViewController * _rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CDPUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceInlinePresentation;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)approveFromAnotherDeviceTappedFromDevicePicker:(id)arg1;
- (void)cancelSignInFromDevicePicker:(id)arg1;
- (void)cancelTapped:(id)arg1;
- (void)cancelTappedFromRootViewController:(id)arg1;
- (void)cancelledRemoteSecretEntry:(id)arg1;
- (void)cdpContext:(id)arg1 promptForAccountPasswordWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(BOOL)arg2 numericLength:(id)arg3 isRandom:(BOOL)arg4 validator:(id)arg5;
- (void)cdpContext:(id)arg1 promptForInteractiveAuthenticationWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2;
- (void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 offeringRemoteApproval:(BOOL)arg3 validator:(id)arg4;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountLockOutWithCompletion:(id /* block */)arg2;
- (void)cdpContext:(id)arg1 promptToInformUserOfAccountUnlockWithCompletion:(id /* block */)arg2;
- (id)delegate;
- (void)devicePicker:(id)arg1 didSelectDevice:(id)arg2;
- (void)dismissPresentedViewControllerCompletion:(id /* block */)arg1;
- (void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1;
- (BOOL)forceInlinePresentation;
- (id)initWithPresentingViewControlller:(id)arg1;
- (void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3;
- (void)presentRootController:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2;
- (void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2;
- (void)remoteSecretEntry:(id)arg1 escapeHatchTappedWithOffer:(unsigned int)arg2 device:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setForceInlinePresentation:(BOOL)arg1;
- (void)waitingApprovalViewController:(id)arg1 escapeHatchTappedWithOffer:(unsigned int)arg2;

@end
