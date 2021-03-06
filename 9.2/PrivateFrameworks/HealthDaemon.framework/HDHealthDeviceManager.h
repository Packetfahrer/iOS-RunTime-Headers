/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHealthDeviceManager : NSObject <CBCentralManagerPrivateDelegate, HDDaemonDeviceManager> {
    NSMutableArray * _allServicesArray;
    CBUUID * _allServicesUUID;
    NSMutableDictionary * _bluetoothUpdateHandlers;
    CBCentralManager * _central;
    NSMutableDictionary * _connectedPeripheralsByPeripheralUUID;
    NSMutableDictionary * _connectionInfosByPeripheralUUID;
    HDIdentifierTable * _connectionInfosTable;
    NSLock * _connectionLock;
    <HDHealthDaemon> * _daemon;
    <HDHealthDataCollectionManager> * _dataCollectionManager;
    NSMutableDictionary * _discoveryInfosByServiceUUID;
    HDIdentifierTable * _discoveryInfosTable;
    NSLock * _discoveryLock;
    NSMutableDictionary * _healthServicesByPeripheralUUID;
    NSMutableDictionary * _propertyManagerByPeripheralUUID;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _scanServiceUUIDs;
}

@property (nonatomic, retain) NSMutableArray *allServicesArray;
@property (nonatomic, retain) CBUUID *allServicesUUID;
@property (nonatomic, retain) NSMutableDictionary *bluetoothUpdateHandlers;
@property (nonatomic, retain) CBCentralManager *central;
@property (nonatomic, retain) NSMutableDictionary *connectedPeripheralsByPeripheralUUID;
@property (nonatomic, retain) NSMutableDictionary *connectionInfosByPeripheralUUID;
@property (nonatomic, retain) HDIdentifierTable *connectionInfosTable;
@property (nonatomic, retain) NSLock *connectionLock;
@property (nonatomic) <HDHealthDaemon> *daemon;
@property (nonatomic, retain) <HDHealthDataCollectionManager> *dataCollectionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *discoveryInfosByServiceUUID;
@property (nonatomic, retain) HDIdentifierTable *discoveryInfosTable;
@property (nonatomic, retain) NSLock *discoveryLock;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableDictionary *healthServicesByPeripheralUUID;
@property (nonatomic, retain) NSMutableDictionary *propertyManagerByPeripheralUUID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSSet *scanServiceUUIDs;
@property (readonly) Class superclass;

+ (int)_isBTLESupportedWithCentral:(id)arg1 error:(id*)arg2;
+ (Class)_serviceClassWithServiceType:(int)arg1;
+ (Class)_serviceClassWithServiceUUID:(id)arg1;
+ (id)serviceClassesByUUIDKeys;

- (void).cxx_destruct;
- (unsigned int)_addConnectedPeripheral:(id)arg1 forService:(id)arg2 withSessionHandler:(id /* block */)arg3 withTransitoryHandler:(id /* block */)arg4 withCharacteristicsHandler:(id /* block */)arg5;
- (id)_copyConnectionInfosForPeripheralUUID:(id)arg1;
- (id)_copyDiscoveryInfosForServiceUUID:(id)arg1;
- (id)_createDiscoveryTimeout:(unsigned int)arg1 forIdentifier:(unsigned int)arg2;
- (void)_notifyBluetoothStatusUpdates:(int)arg1 error:(id)arg2;
- (void)_queue_stopScan;
- (void)_queue_updateScan;
- (void)_removeConnectedPeripheral:(unsigned int)arg1 withError:(id)arg2;
- (void)_reportExistingDiscoveriesForService:(id)arg1;
- (id)_reportPeripheral:(id)arg1 serviceUUID:(id)arg2;
- (id)_serviceFromUUID:(id)arg1 peripheral:(id)arg2;
- (id)allServicesArray;
- (id)allServicesUUID;
- (id)bluetoothUpdateHandlers;
- (id)central;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 willRestoreState:(id)arg2;
- (void)centralManagerDidUpdateState:(id)arg1;
- (unsigned int)connectHealthDevice:(id)arg1 healthDatabase:(id)arg2 sessionHandler:(id /* block */)arg3 error:(id*)arg4;
- (unsigned int)connectHealthDevice:(id)arg1 healthDatabase:(id)arg2 sessionHandler:(id /* block */)arg3 transitoryHandler:(id /* block */)arg4 characteristicsHandler:(id /* block */)arg5 error:(id*)arg6;
- (id)connectedPeripheralsByPeripheralUUID;
- (id)connectionInfosByPeripheralUUID;
- (id)connectionInfosTable;
- (id)connectionLock;
- (id)daemon;
- (id)dataCollectionManager;
- (void)dataReceived:(id)arg1 deviceEntity:(id)arg2;
- (void)disconnectHealthDevice:(unsigned int)arg1;
- (unsigned int)discoverHealthServicesWithType:(int)arg1 timeout:(unsigned int)arg2 handler:(id /* block */)arg3 error:(id*)arg4;
- (void)discoveredCharacteristics:(id)arg1 forDevice:(id)arg2 service:(id)arg3;
- (void)discoveredServices:(id)arg1 forPeripheral:(id)arg2;
- (id)discoveryInfosByServiceUUID;
- (id)discoveryInfosTable;
- (id)discoveryLock;
- (void)getProperty:(id)arg1 forSession:(unsigned int)arg2 withHandler:(id /* block */)arg3;
- (id)healthServiceForUUID:(id)arg1;
- (id)healthServicesByPeripheralUUID;
- (BOOL)healthUpdatesEnabledFromDevice:(id)arg1 database:(id)arg2 error:(id*)arg3;
- (id)initWithCentralManager:(id)arg1 healthDaemon:(id)arg2 queue:(id)arg3;
- (id)initWithHealthDaemon:(id)arg1;
- (void)performOperation:(id)arg1 onSession:(unsigned int)arg2 withParameters:(id)arg3 completion:(id /* block */)arg4;
- (id)propertyManagerByPeripheralUUID;
- (id)queue;
- (void)reportTransitoryData:(id)arg1 fromDevice:(id)arg2 withError:(id)arg3;
- (id)reviewSavedHealthServiceSessions:(id)arg1 withError:(id*)arg2;
- (id)scanServiceUUIDs;
- (void)sendBluetoothStatusUpdatesForServer:(id)arg1 withHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)servicesInvalidatedForDevice:(id)arg1 withError:(id)arg2;
- (void)setAllServicesArray:(id)arg1;
- (void)setAllServicesUUID:(id)arg1;
- (void)setBluetoothUpdateHandlers:(id)arg1;
- (void)setCentral:(id)arg1;
- (void)setConnectedPeripheralsByPeripheralUUID:(id)arg1;
- (void)setConnectionInfosByPeripheralUUID:(id)arg1;
- (void)setConnectionInfosTable:(id)arg1;
- (void)setConnectionLock:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setDataCollectionManager:(id)arg1;
- (void)setDiscoveryInfosByServiceUUID:(id)arg1;
- (void)setDiscoveryInfosTable:(id)arg1;
- (void)setDiscoveryLock:(id)arg1;
- (void)setHealthServicesByPeripheralUUID:(id)arg1;
- (BOOL)setHealthUpdatesEnabled:(BOOL)arg1 fromDevice:(id)arg2 database:(id)arg3 error:(id*)arg4;
- (void)setPropertyManagerByPeripheralUUID:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setScanServiceUUIDs:(id)arg1;
- (id)shortDescription;
- (void)stopDiscoveryWithIdentifier:(unsigned int)arg1;

@end
