/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteDatabase : NSObject {
    NSString * _databasePath;
    struct sqlite3 { } * _db;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    BOOL  _isInTransaction;
    BOOL  _readOnly;
    id /* block */  _setupBlock;
    struct __CFDictionary { } * _statementCache;
    BOOL  _takesTaskCompletionAssertions;
    struct SBSProcessAssertion { } * _taskAssertion;
    int  _taskAssertionCount;
}

@property (nonatomic, copy) id /* block */ setupBlock;
@property BOOL takesTaskCompletionAssertions;

+ (void)_setTakesTaskCompletionAssertions:(BOOL)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 isCorrupt:(BOOL*)arg4;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;

- (void)_accessDatabaseUsingBlock:(id /* block */)arg1;
- (void)_beginTaskCompletionAssertion;
- (void)_endTaskCompletionAssertion;
- (int)_openDatabase;
- (int)_openFlags;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (void)_resetCorruptDatabase;
- (BOOL)_resetDatabaseWithPath:(id)arg1;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 cache:(BOOL)arg2;
- (void)accessDatabaseUsingBlock:(id /* block */)arg1;
- (void)beginTaskCompletionAssertion;
- (int)countChanges;
- (void)dealloc;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)dispatchBlockAsync:(id /* block */)arg1;
- (void)dispatchBlockSync:(id /* block */)arg1;
- (void)endTaskCompletionAssertion;
- (BOOL)executeSQL:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s { }*)arg1;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id /* block */)arg3;
- (void)setSetupBlock:(id /* block */)arg1;
- (void)setTakesTaskCompletionAssertions:(BOOL)arg1;
- (BOOL)setUserVersion:(int)arg1;
- (BOOL)setUserVersion:(int)arg1 forDatabase:(id)arg2;
- (id /* block */)setupBlock;
- (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (BOOL)takesTaskCompletionAssertions;
- (int)userVersion;
- (int)userVersionForDatabase:(id)arg1;

@end
