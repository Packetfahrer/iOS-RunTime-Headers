/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKExtensionHostContext : NSExtensionContext <GKRemoteViewControllerDelegate, GKServiceViewControllerDelegate> {
    GKGame * _game;
    GKUIRemoteViewController * _remoteViewControllerWeak;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GKGame *game;
@property (readonly) unsigned int hash;
@property (nonatomic) GKUIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void)dealloc;
- (BOOL)extensionHasGameCenterEntitlement;
- (id)extensionObjectProxy;
- (id)game;
- (void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(id /* block */)arg3;
- (void)nudge;
- (void)performActivityType:(id)arg1 withActivityItemsAndSharingInfo:(id)arg2;
- (id)remoteViewController;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidFinish;
- (void)remoteViewControllerIsCanceling;
- (void)remoteViewControllerIsFinishing;
- (void)setGame:(id)arg1;
- (void)setInitialState:(id)arg1 withReply:(id /* block */)arg2;
- (void)setRemoteViewController:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2 withReply:(id /* block */)arg3;

@end
