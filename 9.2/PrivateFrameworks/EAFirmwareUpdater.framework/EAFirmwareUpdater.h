/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
 */

@interface EAFirmwareUpdater : MobileAssetUpdater <EAAccessoryDelegate, NSStreamDelegate, iAUPServerDelegate> {
    EAAccessory * _accessory;
    NSString * _appProtocol;
    id /* block */  _applyCompletion;
    NSString * _bootloaderProtocol;
    NSObject<OS_dispatch_queue> * _eaNotificationDispatchQueue;
    NSString * _firmwareBundleFilename;
    NSURL * _firmwareBundleURL;
    BOOL  _firmwareUpdateComplete;
    unsigned int  _firmwareVersionMajor;
    unsigned int  _firmwareVersionMinor;
    unsigned int  _firmwareVersionRelease;
    iAUPServer * _iAUPServer;
    BOOL  _isExpectingReconnect;
    NSMutableData * _outputData;
    unsigned int  _productIDCode;
    id /* block */  _progressHandler;
    NSString * _protocolString;
    NSTimer * _reconnectTimer;
    EASession * _session;
    NSString * _updateBundleFilename;
    NSURL * _updateBundleURL;
}

@property (nonatomic, retain) EAAccessory *accessory;
@property (nonatomic, retain) NSString *appProtocol;
@property (nonatomic, copy) id /* block */ applyCompletion;
@property (nonatomic, retain) NSString *bootloaderProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *firmwareBundleFilename;
@property (nonatomic, retain) NSURL *firmwareBundleURL;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int productIDCode;
@property (nonatomic, retain) NSString *protocolString;
@property (nonatomic, retain) iAUPServer *server;
@property (nonatomic, retain) EASession *session;
@property (readonly) Class superclass;

+ (id)appProtocolStringWithProductIDCode:(unsigned int)arg1;
+ (id)bootloaderProtocolStringWithProductIDCode:(unsigned int)arg1;
+ (id)findAccessoryWithProductIDCode:(unsigned int)arg1;

- (void)_accessoryDidConnect:(id)arg1;
- (void)_accessoryDidDisconnect:(id)arg1;
- (id)accessory;
- (void)accessoryDidDisconnect:(id)arg1;
- (id)appProtocol;
- (id /* block */)applyCompletion;
- (id)applyFirmware:(id /* block */)arg1 progress:(id /* block */)arg2;
- (id)assetWithMaxVersion:(id)arg1;
- (id)bootloaderProtocol;
- (void)dealloc;
- (BOOL)findAccessory;
- (id)firmwareBundleFilename;
- (id)firmwareBundleURL;
- (void)firmwareUpdateComplete:(id)arg1;
- (id)flushOutput;
- (void)handleInputData;
- (id)initWithProductIDCode:(unsigned int)arg1 assetType:(id)arg2;
- (void)logStatusString:(id)arg1;
- (id)openSession;
- (id)overrideQueryPredicateFromDict:(id)arg1;
- (unsigned int)productIDCode;
- (id)protocolString;
- (id)queryPredicate;
- (void)reconnectTimerDidFire:(id)arg1;
- (id)server;
- (id)session;
- (void)setAccessory:(id)arg1;
- (void)setAppProtocol:(id)arg1;
- (void)setApplyCompletion:(id /* block */)arg1;
- (void)setBootloaderProtocol:(id)arg1;
- (void)setFirmwareBundleFilename:(id)arg1;
- (void)setFirmwareBundleURL:(id)arg1;
- (void)setProductIDCode:(unsigned int)arg1;
- (void)setProtocolString:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setSession:(id)arg1;
- (void)startReconnectTimer;
- (void)stopReconnectTimer;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (id)supportedProtocolForAccessory:(id)arg1;
- (void)updateComplete:(id)arg1;
- (void)updateProgress:(double)arg1;
- (id)validateAsset;
- (id)validateAssetAttributes:(id)arg1;
- (id)writeData:(id)arg1;

@end
