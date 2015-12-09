/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSqliteDatabase : NSObject {
    BOOL  _currentExclusivity;
    struct sqlite3 { } * _db;
    NSString * _filename;
    BOOL  _isInMemory;
    NSCache * _queryCache;
    NSObject<OS_dispatch_queue> * _queue;
    struct _opaque_pthread_t { long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[4088]; } * _threadInQueue;
    int  _transactionDepth;
    BOOL  _transactionRolledback;
    NSHashTable * _weakQueries;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) struct sqlite3 { }*handle;
@property (nonatomic, readonly) BOOL isInMemory;

+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 double:(double)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 int64:(long long)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 int:(int)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nscoding:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nsdata:(id)arg3;
+ (int)bindParam:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2 nsstring:(id)arg3;
+ (int)bindParamToNull:(struct sqlite3_stmt { }*)arg1 name:(const char *)arg2;
+ (id)corruptionMarkerFilename;
+ (id)corruptionMarkerPathForPath:(id)arg1;
+ (id)inMemoryPath;
+ (BOOL)isInMemoryPath:(id)arg1;
+ (id)protectedDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)protectedDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
+ (id)randomlyNamedInMemoryPathWithBaseName:(id)arg1;
+ (id)sqliteDatabaseInMemoryWithError:(id*)arg1;
+ (id)sqliteDatabaseWithFilename:(id)arg1 error:(id*)arg2;
+ (id)sqliteDatabaseWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
+ (void)truncateDatabaseAtPath:(id)arg1;

- (void).cxx_destruct;
- (BOOL)_transactionWithExclusivity:(BOOL)arg1 transaction:(id /* block */)arg2;
- (void)clearCaches;
- (void)closePermanently;
- (id)corruptionMarkerPath;
- (BOOL)createSnapshot:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)errorMessage:(int)arg1 forQuery:(id)arg2;
- (id)filename;
- (BOOL)frailReadTransaction:(id /* block */)arg1;
- (BOOL)frailWriteTransaction:(id /* block */)arg1;
- (struct sqlite3 { }*)handle;
- (BOOL)hasColumnOnTable:(id)arg1 named:(id)arg2;
- (BOOL)hasIndexNamed:(id)arg1;
- (BOOL)hasTableNamed:(id)arg1;
- (id)initWithFilename:(id)arg1 flags:(int)arg2 error:(id*)arg3;
- (BOOL)isInMemory;
- (id)languageForFTSTable:(id)arg1;
- (unsigned long long)numberOfRowsInTable:(id)arg1;
- (void)placeCorruptionMarker;
- (BOOL)prepAndRunQuery:(id)arg1 onPrep:(id /* block */)arg2 onRow:(id /* block */)arg3 onError:(id /* block */)arg4;
- (void)prepQuery:(id)arg1 onPrep:(id /* block */)arg2 onError:(id /* block */)arg3;
- (void)readTransaction:(id /* block */)arg1;
- (BOOL)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id /* block */)arg2;
- (BOOL)runQuery:(struct sqlite3_stmt { }*)arg1 onRow:(id /* block */)arg2 onError:(id /* block */)arg3;
- (void)setUserVersion:(unsigned int)arg1;
- (void)simulateOnDiskDatabase;
- (id)tablesWithColumnNamed:(id)arg1;
- (unsigned int)userVersion;
- (void)writeTransaction:(id /* block */)arg1;

@end
