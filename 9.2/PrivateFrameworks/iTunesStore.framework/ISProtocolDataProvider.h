/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISProtocolDataProvider : ISDataProvider <NSCopying> {
    BOOL  _shouldPostFooterSectionChanged;
    BOOL  _shouldProcessAccount;
    BOOL  _shouldProcessAuthenticationDialogs;
    BOOL  _shouldProcessDialogs;
    BOOL  _shouldProcessProtocol;
    BOOL  _shouldTriggerDownloads;
}

@property BOOL shouldPostFooterSectionChanged;
@property BOOL shouldProcessAccount;
@property BOOL shouldProcessAuthenticationDialogs;
@property BOOL shouldProcessDialogs;
@property BOOL shouldProcessProtocol;
@property BOOL shouldTriggerDownloads;

- (void)_checkDownloadQueues;
- (void)_checkInAppPurchaseQueueForAction:(id)arg1;
- (void)_performActionsForResponse:(id)arg1;
- (void)_presentDialog:(id)arg1;
- (BOOL)_processFailureTypeFromDictionary:(id)arg1 error:(id*)arg2;
- (void)_refreshSubscriptionStatus;
- (void)_selectFooterSection:(id)arg1;
- (BOOL)_shouldFailWithTokenErrorForDialog:(id)arg1 dictionary:(id)arg2 error:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (BOOL)processDialogFromDictionary:(id)arg1 error:(id*)arg2;
- (BOOL)processDictionary:(id)arg1 error:(id*)arg2;
- (void)setShouldPostFooterSectionChanged:(BOOL)arg1;
- (void)setShouldProcessAccount:(BOOL)arg1;
- (void)setShouldProcessAuthenticationDialogs:(BOOL)arg1;
- (void)setShouldProcessDialogs:(BOOL)arg1;
- (void)setShouldProcessProtocol:(BOOL)arg1;
- (void)setShouldTriggerDownloads:(BOOL)arg1;
- (BOOL)shouldPostFooterSectionChanged;
- (BOOL)shouldProcessAccount;
- (BOOL)shouldProcessAuthenticationDialogs;
- (BOOL)shouldProcessDialogs;
- (BOOL)shouldProcessProtocol;
- (BOOL)shouldTriggerDownloads;

@end
