/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPRemoteSecretEntryViewController : CDPPassphraseEntryViewController <CDPRemoteSecretEntryPaneDelegate, DevicePINControllerDelegate> {
    BOOL  _cancelValidationOnBack;
    <CDPRemoteSecretEntryDelegate> * _delegate;
    CDPDevice * _device;
    unsigned int  _escapeOffer;
    BOOL  _hasNumericSecret;
    NSNumber * _numericSecretLength;
    int  _remainingAttempts;
    unsigned int  _validationState;
    CDPRemoteDeviceSecretValidator * _validator;
}

@property (nonatomic) BOOL cancelValidationOnBack;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CDPRemoteDeviceSecretValidator *validator;

- (void).cxx_destruct;
- (BOOL)cancelValidationOnBack;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)didEnterValidRemoteSecret:(id)arg1;
- (void)disableUserInteractionAndStartSpinner;
- (void)enableUserInteractionAndStopSpinner;
- (id)initWithDevice:(id)arg1 validator:(id)arg2 escapeOffer:(unsigned int)arg3 delegate:(id)arg4;
- (id)initWithIsNumeric:(BOOL)arg1 numericLength:(id)arg2 validator:(id)arg3 escapeOffer:(unsigned int)arg4 delegate:(id)arg5;
- (id)initWithValidator:(id)arg1;
- (id)pinInstructionsPrompt;
- (BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (void)remoteSecretPane:(id)arg1 escapeHatchTappedWithOffer:(unsigned int)arg2 device:(id)arg3;
- (void)setCancelValidationOnBack:(BOOL)arg1;
- (void)setPane:(id)arg1;
- (void)showIncorrectRemoteSecretAlertWithIsLocalSecret:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)simplePIN;
- (id)title;
- (BOOL)useProgressiveDelays;
- (BOOL)validatePIN:(id)arg1;
- (id)validator;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
