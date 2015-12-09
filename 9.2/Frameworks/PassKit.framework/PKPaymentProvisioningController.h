/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentProvisioningController : NSObject <PKPaymentWebServiceDelegate> {
    NSMutableArray * _associatedCredentials;
    NSTimer * _descriptionTimer;
    PKPaymentEligibilityResponse * _eligibilityResponse;
    NSString * _localizedProgressDescription;
    NSString * _productIdentifier;
    PKPaymentPass * _provisionedPass;
    PKPaymentRequirementsResponse * _requirementsResponse;
    int  _state;
    NSMutableSet * _tasks;
    PKPaymentWebService * _webService;
}

@property (nonatomic, readonly, copy) NSArray *associatedCredentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentEligibilityResponse *eligibilityResponse;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *localizedProgressDescription;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, readonly) PKPaymentPass *provisionedPass;
@property (nonatomic, readonly) PKPaymentRequirementsResponse *requirementsResponse;
@property (nonatomic) int state;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) PKPaymentWebService *webService;

- (int)_defaultResetState;
- (id)_displayableErrorOverrideForUnderlyingError:(id)arg1;
- (void)_handleProvisioningError:(id)arg1 forRequest:(id)arg2;
- (void)_passAlreadyProvisioned;
- (void)_queryEligibilityForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryRequirementsForCredential:(id)arg1 completion:(id /* block */)arg2;
- (void)_registerWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)_requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_setLocalizedProgressDescription:(id)arg1;
- (void)_setState:(int)arg1 notify:(BOOL)arg2;
- (void)_updateLocalizedProgressAndInvalidateTimer;
- (void)_validatePreconditionsWhileRetrievingRemoteCredentials:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)acceptTerms;
- (id)alertForDisplayableError:(id)arg1;
- (id)alertForDisplayableError:(id)arg1 earlyExitHandler:(id /* block */)arg2;
- (void)associateCredential:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)associateCredentials:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)associatedCredentials;
- (void)dealloc;
- (id)displayableErrorForError:(id)arg1;
- (id)displayableErrorForProvisioningError:(id)arg1;
- (id)eligibilityResponse;
- (id)initWithWebService:(id)arg1;
- (id)localizedProgressDescription;
- (void)paymentWebService:(id)arg1 didCompleteTSMConnectionForTaskID:(unsigned int)arg2;
- (void)paymentWebService:(id)arg1 didQueueTSMConnectionForTaskID:(unsigned int)arg2;
- (id)productIdentifier;
- (id)provisionedPass;
- (void)requestEligibility:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestProvisioning:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestRequirements:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)requirementsResponse;
- (void)reset;
- (void)resolveAmbiguousRequirementsWithProductIdentifier:(id)arg1;
- (void)resolveRequirementsUsingProduct:(id)arg1;
- (void)retrieveRemoteCredentials:(id /* block */)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)validatePreconditionsAndRegister:(id /* block */)arg1;
- (void)validatePreconditionsRegisterAndAssociateRemoteCredentials:(id /* block */)arg1;
- (id)webService;

@end
