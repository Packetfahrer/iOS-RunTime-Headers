/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIDatabase : NSObject {
    struct sqlite3 { } * _db;
    struct __CFDictionary { } * _groupObjectsById;
    int  _options;
    NSString * _path;
    NSDictionary * _preparedStatements;
    int  _queryCounter;
    NSObject<OS_dispatch_queue> * _searchQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    PSITokenizer * _tokenizer;
    NSMutableArray * _tokenizerOutputNormalizedTokens;
    struct { 
        int location; 
        int length; 
    }  _tokenizerOutputRanges;
    NSMutableString * _tokenizerOutputString;
    NSMutableArray * _tokenizerOutputTokens;
}

@property (nonatomic, readonly) int options;
@property (nonatomic, readonly, copy) NSString *path;

+ (void)_dropDatabase:(struct sqlite3 { }*)arg1 withCompletion:(id /* block */)arg2;
+ (struct sqlite3 { }*)_openDatabaseAtPath:(id)arg1 options:(int)arg2;
+ (void)dropDatabaseAtPath:(id)arg1 withCompletion:(id /* block */)arg2;

- (void)_inSearchQueueAsync:(id /* block */)arg1;
- (unsigned long long)_inqAddUUID:(id)arg1 string:(id)arg2 category:(short)arg3 owningGroupId:(unsigned long long)arg4 isInBatch:(BOOL)arg5;
- (unsigned long long)_inqAssetIdForUUID:(id)arg1 insertIfNeeded:(BOOL)arg2;
- (void)_inqAsync:(id /* block */)arg1;
- (id)_inqDequeueGroupObjectWithId:(unsigned long long)arg1 isCachedGroup:(BOOL*)arg2;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt { }*)arg1 allowError:(int)arg2 withStatementBlock:(id /* block */)arg3;
- (void)_inqExecutePreparedStatement:(struct sqlite3_stmt { }*)arg1 withStatementBlock:(id /* block */)arg2;
- (void)_inqGetTokensFromString:(id)arg1 forIndexing:(BOOL)arg2 useWildcard:(BOOL)arg3 tokenOutput:(struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; int x4; int x5; struct { /* ? */ } *x6; int x7; int x8; }*)arg4;
- (unsigned long long)_inqGroupIdForCategory:(short)arg1 owningGroupId:(unsigned long long)arg2 contentString:(id)arg3 insertIfNeeded:(BOOL)arg4 tokenOutput:(const struct tokenOutput_t { id x1; id x2; struct { /* ? */ } x3; int x4; int x5; struct { /* ? */ } *x6; int x7; int x8; }*)arg5;
- (struct __CFArray { }*)_inqNewAssetIdsForGroupId:(unsigned long long)arg1;
- (struct __CFArray { }*)_inqNewAssetUUIDsForAssetIds:(const void**)arg1 count:(long)arg2;
- (id)_inqNewContentStringForGroupId:(unsigned long long)arg1;
- (id)_inqNewGroupArraysFromGroupIdSets:(id)arg1 forQuery:(id)arg2;
- (struct __CFSet { }*)_inqNewGroupIdsForAssetId:(unsigned long long)arg1;
- (struct __CFSet { }*)_inqNewGroupIdsMatchingToken:(id)arg1;
- (void*)_inqNewGroupsFromDeleteOperation:(BOOL)arg1 matchingGroupIds:(const void**)arg2 count:(long)arg3;
- (void)_inqPerformBatch:(id /* block */)arg1;
- (void)_inqPrepareAndExecuteStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)_inqPrepareStatement:(const char *)arg1;
- (struct sqlite3_stmt { }*)_inqPreparedContainsStatementWithPrefix:(const char *)arg1 matchingIds:(const void**)arg2 count:(long)arg3;
- (void)_inqRecycleGroups;
- (void)_inqRemoveUUID:(id)arg1 isInBatch:(BOOL)arg2;
- (void)_inqSync:(id /* block */)arg1;
- (void)_inqUpdateGATableWithGroupId:(unsigned long long)arg1 assetId:(unsigned long long)arg2;
- (void)_inqUpdatePrefixTreeWithGroupId:(unsigned long long)arg1 text:(id)arg2;
- (void)_query:(id)arg1 recursiveAddToGroupResults:(id)arg2 aggregate:(id)arg3 atIndex:(unsigned int)arg4 outOf:(unsigned int)arg5 inGroupArrays:(id)arg6;
- (void)addAsset:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addAssets:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)dealloc;
- (void)dropDatabaseWithCompletion:(id /* block */)arg1;
- (void)group:(id)arg1 fetchOwningContentString:(BOOL)arg2 assetUUIDs:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 completionHandler:(id /* block */)arg4;
- (id)initWithPath:(id)arg1 options:(int)arg2;
- (id)newQueryWithSearchText:(id)arg1;
- (id)newQueryWithSearchText:(id)arg1 isWildcardSearch:(BOOL)arg2;
- (int)options;
- (id)path;
- (void)query:(id)arg1 searchString:(id)arg2 earlyResultsHandler:(id /* block */)arg3 resultsHandler:(id /* block */)arg4;
- (void)query:(id)arg1 searchString:(id)arg2 resultsHandler:(id /* block */)arg3;
- (void)removeAssetWithUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeAssetsWithUUIDs:(id)arg1 completion:(id /* block */)arg2;

@end
