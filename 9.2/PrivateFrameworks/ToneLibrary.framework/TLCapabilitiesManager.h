/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLCapabilitiesManager : NSObject {
    BOOL  _alertToneStoreAvailable;
    NSDictionary * _deviceCodeNameSimplicationMapping;
    BOOL  _ringtoneStoreAvailable;
}

@property (getter=_isAlertToneStoreAvailable, setter=_setAlertToneStoreAvailable:, nonatomic) BOOL _alertToneStoreAvailable;
@property (setter=_setDeviceCodeNameSimplicationMapping:, nonatomic, copy) NSDictionary *_deviceCodeNameSimplicationMapping;
@property (getter=_isRingtoneStoreAvailable, setter=_setRingtoneStoreAvailable:, nonatomic) BOOL _ringtoneStoreAvailable;
@property (getter=isAlertToneStoreAvailable, nonatomic, readonly) BOOL alertToneStoreAvailable;
@property (nonatomic, readonly) NSString *deviceCodeName;
@property (getter=isFakingSynchronizedVibrationCapability, nonatomic, readonly) BOOL fakingSynchronizedVibrationCapability;
@property (nonatomic, readonly) BOOL hasSynchronizedVibrationsCapability;
@property (nonatomic, readonly) BOOL hasUserGeneratedVibrationsCapability;
@property (nonatomic, readonly) BOOL hasVibratorCapability;
@property (getter=isRingtoneStoreAvailable, nonatomic, readonly) BOOL ringtoneStoreAvailable;
@property (nonatomic, readonly) NSString *simplifiedDeviceCodeName;

+ (id)sharedCapabilitiesManager;

- (void)_checkRingtoneStoreAvailability;
- (id)_deviceCodeNameSimplicationMapping;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1;
- (BOOL)_hasSynchronizedVibrationsCapability;
- (BOOL)_hasTelephonyCapability;
- (BOOL)_isAlertToneStoreAvailable;
- (BOOL)_isRingtoneStoreAvailable;
- (void)_setAlertToneStoreAvailable:(BOOL)arg1;
- (void)_setDeviceCodeNameSimplicationMapping:(id)arg1;
- (void)_setRingtoneStoreAvailable:(BOOL)arg1;
- (void)dealloc;
- (id)deviceCodeName;
- (BOOL)hasSynchronizedVibrationsCapability;
- (BOOL)hasUserGeneratedVibrationsCapability;
- (BOOL)hasVibratorCapability;
- (id)init;
- (BOOL)isAlertToneStoreAvailable;
- (BOOL)isFakingSynchronizedVibrationCapability;
- (BOOL)isRingtoneStoreAvailable;
- (id)simplifiedDeviceCodeName;

@end
