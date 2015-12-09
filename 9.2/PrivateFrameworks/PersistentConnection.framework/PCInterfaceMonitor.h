/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCInterfaceMonitor : NSObject <PCInterfaceMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {
    NSMapTable * _delegateMap;
    <PCInterfaceUsabilityMonitorProtocol> * _internal;
}

@property (nonatomic, readonly) struct __CFString { }*currentRAT;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int interfaceIdentifier;
@property (nonatomic, readonly) BOOL isBadLinkQuality;
@property (nonatomic, readonly) BOOL isInterfaceHistoricallyUsable;
@property (nonatomic, readonly) BOOL isInterfaceUsable;
@property (nonatomic, readonly) BOOL isInternetReachable;
@property (nonatomic, readonly) BOOL isLTEWithCDRX;
@property (nonatomic, readonly) BOOL isPoorLinkQuality;
@property (nonatomic, readonly) BOOL isRadioHot;
@property (nonatomic, readonly) int linkQuality;
@property (nonatomic, readonly, retain) NSString *linkQualityString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __CFString { }*wwanInterfaceName;

+ (BOOL)isBadLinkQuality:(int)arg1;
+ (BOOL)isPoorLinkQuality:(int)arg1;
+ (id)sharedInstanceForIdentifier:(int)arg1;
+ (id)stringForLinkQuality:(int)arg1;

- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (struct __CFString { }*)currentRAT;
- (void)dealloc;
- (id)initWithInterfaceIdentifier:(int)arg1;
- (int)interfaceIdentifier;
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(id)arg1;
- (void)interfaceReachabilityChanged:(id)arg1;
- (BOOL)isBadLinkQuality;
- (BOOL)isInterfaceHistoricallyUsable;
- (BOOL)isInterfaceUsable;
- (BOOL)isInternetReachable;
- (BOOL)isLTEWithCDRX;
- (BOOL)isPoorLinkQuality;
- (BOOL)isRadioHot;
- (int)linkQuality;
- (id)linkQualityString;
- (void)removeDelegate:(id)arg1;
- (struct __CFString { }*)wwanInterfaceName;

@end
