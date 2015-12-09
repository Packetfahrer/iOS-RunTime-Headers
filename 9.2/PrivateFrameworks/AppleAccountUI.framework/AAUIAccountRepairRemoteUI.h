/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAccountRepairRemoteUI : NSObject <RUIObjectModelDelegate> {
    ACAccount * _account;
    UINavigationController * _accountRepairUIViewController;
    ACAccountStore * _accountStore;
    NSString * _agreeURL;
    NSDictionary * _cookieHeadersForRepairRequest;
    <AAUIAccountRepairRemoteUIDelegate> * _delegate;
    BOOL  _isModal;
    id /* block */  _linkLoadCompletion;
    RUILoader * _loader;
    NSMutableArray * _objectModels;
    UIViewController * _originatingViewController;
    UINavigationController * _parentNavController;
    UIAlertView * _tcConfirmationAlert;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AAUIAccountRepairRemoteUIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addHeadersToRequest:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cleanUpAndDismissWithSuccess:(BOOL)arg1;
- (void)_cleanupRUILoader;
- (void)_displayConnectionErrorAndDismiss;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)delegate;
- (id)initWithAccount:(id)arg1 inStore:(id)arg2;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(id /* block */)arg4;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)presentFromViewController:(id)arg1 modal:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (unsigned int)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2;
- (void)useCookieHeadersForInitialRequest:(id)arg1;

@end
