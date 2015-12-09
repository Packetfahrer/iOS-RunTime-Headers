/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AALoginPluginManager : NSObject {
    BOOL  _hasStashedLoginResponse;
    <AASetupAssistantDelegateService> * _idsPlugin;
    NSObject<OS_dispatch_queue> * _pluginNotificationQueue;
    NSArray * _plugins;
    BOOL  _shouldSkipiTunesPlugin;
    BOOL  _shouldStashLoginResponse;
}

@property (nonatomic) BOOL shouldSkipiTunesPlugin;
@property (nonatomic) BOOL shouldStashLoginResponse;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_loadPlugins;
- (BOOL)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3;
- (void)_stashServiceTokensFromResponse:(id)arg1;
- (id)collectParametersForIdentityEstablishmentRequest;
- (id)collectParametersForLoginRequest;
- (id)init;
- (void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(id /* block */)arg4;
- (void)setShouldSkipiTunesPlugin:(BOOL)arg1;
- (void)setShouldStashLoginResponse:(BOOL)arg1;
- (BOOL)shouldSkipiTunesPlugin;
- (BOOL)shouldStashLoginResponse;
- (void)unstashLoginResponse;

@end
