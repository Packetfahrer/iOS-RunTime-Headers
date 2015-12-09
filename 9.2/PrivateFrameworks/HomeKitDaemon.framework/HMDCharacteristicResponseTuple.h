/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicResponseTuple : NSObject {
    HMDCharacteristic * _characteristic;
    NSError * _error;
}

@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (nonatomic, readonly) NSError *error;

+ (id)tupleWithCharacteristic:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)characteristic;
- (id)description;
- (id)error;

@end
