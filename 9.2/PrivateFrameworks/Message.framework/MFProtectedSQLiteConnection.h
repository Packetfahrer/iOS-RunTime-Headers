/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFProtectedSQLiteConnection : MFSQLiteConnection {
    BOOL  _attached;
    NSString * _protectedName;
    NSString * _vfsName;
    long  _vfsOnce;
}

@property (nonatomic, readonly) BOOL isProtectedDatabaseAttached;

- (const char *)_vfsModuleName;
- (int)attachProtectedDatabase;
- (void)close;
- (void)dealloc;
- (int)detachProtectedDatabase;
- (id)initWithPath:(id)arg1 databaseName:(id)arg2 protectedName:(id)arg3;
- (BOOL)isProtectedDatabaseAttached;

@end
