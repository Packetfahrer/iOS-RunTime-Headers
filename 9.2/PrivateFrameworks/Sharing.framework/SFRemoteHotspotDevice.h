/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding> {
    NSData * _advertisementData;
    NSNumber * _batteryLife;
    NSString * _deviceIdentifier;
    NSString * _deviceName;
    BOOL  _hasDuplicates;
    unsigned char  _networkType;
    NSNumber * _signalStrength;
}

@property (nonatomic, readonly, copy) NSData *advertisementData;
@property (retain) NSNumber *batteryLife;
@property (copy) NSString *deviceIdentifier;
@property (copy) NSString *deviceName;
@property BOOL hasDuplicates;
@property unsigned char networkType;
@property (retain) NSNumber *signalStrength;

+ (BOOL)supportsSecureCoding;

- (id)advertisementData;
- (id)batteryLife;
- (void)dealloc;
- (id)description;
- (id)deviceIdentifier;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasDuplicates;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; })arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned char)networkType;
- (unsigned char)networkTypeForIncomingType:(unsigned char)arg1;
- (void)setBatteryLife:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setHasDuplicates:(BOOL)arg1;
- (void)setNetworkType:(unsigned char)arg1;
- (void)setSignalStrength:(id)arg1;
- (id)signalStrength;

@end
