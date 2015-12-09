/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _color;
    NSString * _enclosureColor;
    BOOL  _isMonitoringUnlockEvents;
    NSLocale * _locale;
    NSLock * _monitoringLock;
    NSString * _serverFriendlyDescription;
    NSString * _uniqueDeviceIdentifier;
}

@property (copy) NSString *color;
@property (copy) NSString *enclosureColor;
@property BOOL hasBeenUnlockedSinceLastCheckIn;
@property (readonly) NSString *integratedCircuitCardIdentifier;
@property (readonly) NSString *internationalMobileEquipmentIdentity;
@property (readonly) BOOL isInternalBuild;
@property (readonly) BOOL isProtectedWithPasscode;
@property (copy) NSLocale *locale;
@property (readonly) NSString *mobileEquipmentIdentifier;
@property (readonly) NSString *phoneNumber;
@property (readonly) NSString *serialNumber;
@property (readonly) NSData *serializedData;
@property (copy) NSString *serverFriendlyDescription;
@property (copy) NSString *uniqueDeviceIdentifier;
@property (readonly) NSString *userChosenName;

+ (id)_buildNumber;
+ (id)_generateServerFriendlyDescription;
+ (id)_hardwareModel;
+ (id)_lookUpCurrentColor;
+ (id)_lookUpCurrentEnclosureColor;
+ (id)_lookUpCurrentUniqueDeviceID;
+ (id)_osName;
+ (id)_osVersion;
+ (id)currentDevice;
+ (id)deviceSpecificLocalizedStringWithKey:(id)arg1;
+ (id)deviceWithSerializedData:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)enclosureColor;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasBeenUnlockedSinceLastCheckIn;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)integratedCircuitCardIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (BOOL)isInternalBuild;
- (BOOL)isProtectedWithPasscode;
- (id)locale;
- (id)mobileEquipmentIdentifier;
- (id)phoneNumber;
- (id)serialNumber;
- (id)serializedData;
- (id)serverFriendlyDescription;
- (void)setColor:(id)arg1;
- (void)setEnclosureColor:(id)arg1;
- (void)setHasBeenUnlockedSinceLastCheckIn:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setServerFriendlyDescription:(id)arg1;
- (void)setUniqueDeviceIdentifier:(id)arg1;
- (id)uniqueDeviceIdentifier;
- (id)userChosenName;

@end
