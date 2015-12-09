/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HAPTimerDelegate> {
    struct BonjourBrowser { } * _bonjourBrowser;
    HAPTimer * _bonjourEventTimer;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableSet * _discoveredAccessoryServers;
    NSMutableSet * _pendingBonjourEvents;
}

@property (nonatomic, retain) HAPTimer *bonjourEventTimer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HAPAccessoryServerBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableSet *discoveredAccessoryServers;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableSet *pendingBonjourEvents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_delegateRespondsToSelector:(SEL)arg1;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)arg1;
- (void)_handleBonjourBrowserEvent:(unsigned int)arg1 eventInfo:(id)arg2;
- (void)_handleBonjourRemoveWithEventInfo:(id)arg1;
- (long)_initializeAndStartBonjourBrowser;
- (void)_invalidateAccessoryServers:(BOOL)arg1;
- (void)_pendBonjourEvent:(id)arg1;
- (void)_pendBonjourRemoveEvent:(id)arg1;
- (void)_processPendingBonjourEvent:(id)arg1;
- (int)_purgePendingBonjourEvents:(id)arg1 withProcessing:(BOOL)arg2;
- (long)_server:(id*)arg1 forBonjourDevice:(id)arg2;
- (void)_setReachability:(BOOL)arg1 forServer:(id)arg2;
- (void)_timerDidExpire:(id)arg1;
- (id)bonjourEventTimer;
- (id)delegate;
- (id)delegateQueue;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (id)initWithQueue:(id)arg1;
- (int)linkType;
- (id)pendingBonjourEvents;
- (void)processPendingBonjourRemoveEvents:(id)arg1;
- (void)setBonjourEventTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDiscoveredAccessoryServers:(id)arg1;
- (void)setPendingBonjourEvents:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)timerDidFire:(id)arg1;

@end
