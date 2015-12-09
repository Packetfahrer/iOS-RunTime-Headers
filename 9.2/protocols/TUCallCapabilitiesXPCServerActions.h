/* Generated by RuntimeBrowser.
 */

@protocol TUCallCapabilitiesXPCServerActions <NSObject>

@required

- (void)cancelPinRequestFromPrimaryDevice;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (void)requestPinFromPrimaryDevice;
- (void)setRelayCallingEnabled:(BOOL)arg1;
- (void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(NSString *)arg2;
- (void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(NSString *)arg2;
- (void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1;
- (void)setThumperCallingEnabled:(BOOL)arg1;
- (void)setVoLTECallingEnabled:(BOOL)arg1;
- (void)setWiFiCallingEnabled:(BOOL)arg1;

@end
