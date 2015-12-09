/* Generated by RuntimeBrowser.
 */

@protocol NMSMessageCenterDelegate <NSObject>

@optional

- (void)messageCenter:(NMSMessageCenter *)arg1 didReceiveIncomingFileTransfer:(NMSIncomingFileTransfer *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didReceiveUnknownRequest:(NMSIncomingRequest *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifier:(NSString *)arg2 forFileTransfer:(NMSOutgoingFileTransfer *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifier:(NSString *)arg2 forResponse:(NMSOutgoingResponse *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didResolveIDSIdentifierForRequest:(NMSOutgoingRequest *)arg2;
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullyDeliverRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;
- (void)messageCenter:(NMSMessageCenter *)arg1 didSuccessfullySendRequestWithIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@end
