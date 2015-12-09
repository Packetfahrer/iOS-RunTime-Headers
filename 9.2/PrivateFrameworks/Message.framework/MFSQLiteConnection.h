/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSQLiteConnection : NSObject {
    void * _CPSearchContext;
    void * _ICUSearchContext;
    NSString * _databaseName;
    struct sqlite3 { } * _db;
    NSString * _path;
    MFWeakReferenceHolder * _poolHolder;
    struct __CFDictionary { } * _statementCache;
    unsigned int  _transactionCount;
    int  _transactionType;
}

@property (nonatomic, readonly) struct sqlite3 { }*db;
@property (nonatomic) MFSQLiteConnectionPool *pool;

- (const char *)_vfsModuleName;
- (int)beginTransaction;
- (int)beginTransactionWithType:(int)arg1;
- (void)close;
- (int)commitTransaction;
- (struct sqlite3 { }*)db;
- (void)dealloc;
- (void)flush;
- (id)initWithPath:(id)arg1 databaseName:(id)arg2;
- (BOOL)isOpen;
- (int)open;
- (id)pool;
- (struct sqlite3_stmt { }*)preparedStatementForPattern:(id)arg1;
- (int)rollbackTransaction;
- (void)setPool:(id)arg1;

@end
