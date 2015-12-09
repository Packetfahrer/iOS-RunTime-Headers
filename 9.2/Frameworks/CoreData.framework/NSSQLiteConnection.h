/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteConnection : NSSQLConnection {
    NSSQLiteStatement * _beginStatement;
    struct __CFDictionary { } * _cachedEntityConstrainedValuesUpdateStatements;
    struct __CFDictionary { } * _cachedEntityUpdateStatements;
    NSMutableDictionary * _cachedFetchStatements;
    NSSQLiteStatement * _commitStatement;
    struct sqlite3 { } * _db;
    NSString * _dbPathRegisteredWithBackupd;
    unsigned long long  _debugInode;
    void * _extraBuffersForRegisteredFunctions;
    struct sqlite3_stmt { } * _fetchPKStatement;
    NSSQLEntity * _finalEntity;
    NSSQLEntity * _lastEntity;
    unsigned int  _lastEntityKey;
    NSMutableDictionary * _pragmaSettings;
    NSSQLiteStatement * _rollbackStatement;
    int  _rowsProcessedCount;
    struct __sqliteConnectionFlags { 
        unsigned int _readyToBind : 1; 
        unsigned int _fetchInProgress : 1; 
        unsigned int _fileSystemType : 2; 
        unsigned int _proxyLocking : 1; 
        unsigned int _vacuumSetupNeeded : 1; 
        unsigned int _usingWAL : 1; 
        unsigned int _disallowReconnect : 1; 
        unsigned int _reserved : 24; 
    }  _sqliteConnectionFlags;
    NSMutableArray * _temporaryTables;
    double  _timeOutIncrement;
    double  _timeOutOption;
    struct sqlite3_stmt { } * _updatePKStatement;
    long long  _vacuumTracker;
    NSMutableSet * _vmCachedStatements;
    struct sqlite3_stmt { } * _vmstatement;
}

+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;
+ (const char *)_databaseOpenURLStringForURL:(id)arg1;
+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (void)_setDebugFlags:(int)arg1;
+ (void)initialize;
+ (int)openAtPath:(const char *)arg1 handle:(struct sqlite3 {}**)arg2 flags:(int)arg3 module:(const char *)arg4;
+ (int)readMagicWordFromPath:(const char *)arg1;

- (id)_adapter;
- (id)_beginPowerAssertionWithAssert:(unsigned int*)arg1;
- (void)_bindVariablesForConstrainedValuesWithRow:(id)arg1;
- (void)_bindVariablesWithDeletedRow:(id)arg1;
- (void)_bindVariablesWithInsertedRow:(id)arg1;
- (void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(struct __CFBitVector { }*)arg3;
- (void**)_buffersForRegisteredFunctions;
- (void)_clearBindVariablesForConstrainedValuesUpdateStatement:(id)arg1;
- (void)_clearBindVariablesForInsertedRow;
- (void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(struct __CFBitVector { }*)arg2;
- (void)_clearCachedStatements;
- (void)_clearOtherStatements;
- (void)_clearTransactionCaches;
- (void)_configureAutoVacuum;
- (void)_configureIntegrityCheck;
- (void)_configurePageSize;
- (void)_configurePragmaOptions:(int)arg1 createdSchema:(BOOL)arg2;
- (void)_configureSynchronousMode;
- (void)_configureUbiquityMetadataTable;
- (void)_endPowerAssertionWithAssert:(unsigned int)arg1 andApp:(id)arg2;
- (void)_ensureDatabaseOpen;
- (void)_ensureNoFetchInProgress;
- (void)_ensureNoStatementPrepared;
- (void)_ensureNoTransactionOpen;
- (void)_executeSQLString:(id)arg1;
- (long long)_fetchMaxPrimaryKeyForEntity:(id)arg1;
- (void)_finalizeStatement;
- (void)_forceDisconnectOnError;
- (long long)_getCurrentAutoVacuumValue;
- (BOOL)_hasTableWithName:(id)arg1;
- (id)_newValueForColumn:(id)arg1 atIndex:(unsigned int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)_performPostSaveTasks;
- (void)_registerExtraFunctions;
- (int)_rowsChangedByLastExecute;
- (void)_setupVacuumIfNecessary;
- (struct sqlite3_stmt { }*)_vmstatement;
- (void)addPeerRange:(id)arg1;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (id)allPeerRanges;
- (void)beginTransaction;
- (void)bindTempTableForBindIntarray:(id)arg1;
- (void)cacheCurrentDBStatementOn:(id)arg1;
- (void)cacheStatement:(id)arg1 forRequest:(id)arg2;
- (void)cacheUpdateConstrainedValuesStatement:(id)arg1 forEntity:(id)arg2;
- (void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(struct __CFBitVector { }*)arg3;
- (id)cachedStatementForRequest:(id)arg1;
- (id)cachedUpdateConstrainedValuesStatmentForEntity:(id)arg1;
- (id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(struct __CFBitVector { }*)arg2;
- (BOOL)canConnect;
- (void)clearCachedStatementForRequestWithIdentifier:(id)arg1;
- (void)commitTransaction;
- (void)connect;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (BOOL)databaseIsEmpty;
- (void)dealloc;
- (void)deleteRow:(id)arg1;
- (void)didCreateSchema;
- (void)disconnect;
- (void)dropUbiquityTables;
- (void)endFetch;
- (void)endPrimaryKeyGeneration;
- (void)execute;
- (id)executeAttributeUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2;
- (void)executeCorrelationChangesForValue1:(unsigned long long)arg1 value2:(unsigned long long)arg2 value3:(unsigned long long)arg3 value4:(unsigned long long)arg4;
- (id)executeMulticolumnUniquenessCheckSQLStatement:(id)arg1 returningColumns:(id)arg2;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (id)fetchUbiquityKnowledgeVector;
- (void)finalize;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (id)generateStatementForCheckingMulticolumnConstraint:(id)arg1 onObjects:(id)arg2;
- (id)generateStatementForCheckingUniqueAttributesOnObjects:(id)arg1;
- (id)generateSubselectForColumn:(id)arg1 givenObjects:(id)arg2;
- (void)handleCorruptedDB:(id)arg1;
- (BOOL)hasCachedModelTable;
- (BOOL)hasMetadataTable;
- (BOOL)hasPrimaryKeyTable;
- (void)incrementInUseCounterForCachedStatementForRequest:(id)arg1;
- (id)initWithAdapter:(id)arg1;
- (void)insertRow:(id)arg1;
- (BOOL)isFetchInProgress;
- (BOOL)isLocalFS;
- (BOOL)isOpen;
- (id)newFetchUUIDSForSubentitiesRootedAt:(id)arg1;
- (id)newFetchedArray;
- (BOOL)performIntegrityCheck;
- (void)prepareForPrimaryKeyGeneration;
- (void)prepareSQLStatement:(id)arg1;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (void)releaseSQLStatement;
- (void)replaceUbiquityKnowledgeVector:(id)arg1;
- (void)resetSQLStatement;
- (void)rollbackTransaction;
- (int)rowsChangedByLastStatement;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)ubiquityTableKeysAndValues;
- (id)ubiquityTableValueForKey:(id)arg1;
- (void)updateConstrainedValuesForRow:(id)arg1;
- (void)updateRow:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (void)willCreateSchema;
- (void)writeCorrelationChangesFromTracker:(id)arg1;
- (void)writeCorrelationDeletesFromTracker:(id)arg1;
- (void)writeCorrelationInsertsFromTracker:(id)arg1;
- (void)writeCorrelationMasterReordersFromTracker:(id)arg1;
- (void)writeCorrelationReordersFromTracker:(id)arg1;

@end
