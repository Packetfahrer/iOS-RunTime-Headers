/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSAuthenticationManager : NSObject {
    MSAlertManager * _alertManager;
    int  _bagRefetchCount;
    BOOL  _isListeningToKeybagChanges;
    int  _keybagChangeNotifyToken;
    int  _state;
}

@property (nonatomic) BOOL isListeningToKeybagChanges;
@property (nonatomic) int keybagChangeNotifyToken;
@property (getter=isWaitingForAuth, nonatomic, readonly) BOOL waitingForAuth;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_accountForPersonID:(id)arg1;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)_promptUserForAuthComplianceForAccount:(id)arg1 personID:(id)arg2;
- (void)dealloc;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (id)initWithAlertManager:(id)arg1;
- (BOOL)isListeningToKeybagChanges;
- (BOOL)isWaitingForAuth;
- (int)keybagChangeNotifyToken;
- (void)rearmAuthenticationAlert;
- (void)setIsListeningToKeybagChanges:(BOOL)arg1;
- (void)setKeybagChangeNotifyToken:(int)arg1;
- (void)waitForDeviceUnlock;

@end