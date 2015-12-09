/* Generated by RuntimeBrowser.
 */

@protocol TUCallServicesClient <NSObject>

@required

- (void)handleCallControlFailureWithUserInfo:(NSDictionary *)arg1;
- (void)handleCallModelStateChanged:(TUCallModelState *)arg1;
- (void)handleConversationReceivedData:(NSData *)arg1 forCallWithUUID:(NSString *)arg2;
- (void)handleCurrentCallsChanged:(NSArray *)arg1;
- (void)handleCurrentCallsChanged:(NSArray *)arg1 callDisconnected:(TUCall *)arg2;
- (void)handleLocalFrequencyChangedTo:(NSData *)arg1 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg2;
- (void)handleNotificationName:(NSString *)arg1 forCallWithUniqueProxyIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)handleRemoteFrequencyChangedTo:(NSData *)arg1 forCallsWithUniqueProxyIdentifiers:(NSArray *)arg2;

@end
