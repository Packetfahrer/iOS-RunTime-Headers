/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSPersistentDictionary : NSObject <NSLocking> {
    struct sqlite3_stmt { } * _byDate;
    struct sqlite3 { } * _db;
    struct sqlite3_stmt { } * _fetch;
    struct sqlite3_stmt { } * _insert;
    NSObject<OS_dispatch_semaphore> * _lock;
    struct __CFString { } * _loggingFacility;
    Class  _objectClass;
    NSString * _path;
    struct sqlite3_stmt { } * _remove;
    struct sqlite3_stmt { } * _removeAll;
    struct sqlite3_stmt { } * _reset;
    _SYSharedServiceDB * _sharedDB;
}

- (void).cxx_destruct;
- (id)_dataFromObject:(id)arg1;
- (void)_ensureDBSchema;
- (id)_objectFromData:(id)arg1;
- (void)_openDBForceRecreate:(BOOL)arg1;
- (void)_prepareStatements;
- (void)_withDB:(id /* block */)arg1;
- (void)dealloc;
- (void)enumerateObjectsSortedByExpirationDate:(id /* block */)arg1;
- (id)init;
- (id)initWithPath:(id)arg1 objectClass:(Class)arg2 loggingFacility:(struct __CFString { }*)arg3;
- (id)initWithSharedDBForService:(id)arg1 objectClass:(Class)arg2;
- (void)lock;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)resetObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 expires:(id)arg3;
- (void)unlock;

@end
