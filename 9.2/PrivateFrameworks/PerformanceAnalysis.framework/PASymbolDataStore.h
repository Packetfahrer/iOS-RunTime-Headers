/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASymbolDataStore : NSObject <PASerializable> {
    NSMutableDictionary * _pidToCSSymbolicatorCache;
    NSMutableSet * _sharedCacheUUIDsAlreadySearchedFor;
    BOOL  _shouldSymbolicate;
    BOOL  _shouldUseDsymForUUIDToFindBinaries;
    NSMutableDictionary * _uuidToCSSymbolOwnerCache;
    NSMutableDictionary * _uuidToSharedCacheImageInfoDictionary;
    NSMutableDictionary * _uuidToSymbolOwnerDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL shouldSymbolicate;
@property BOOL shouldUseDsymForUUIDToFindBinaries;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (id)_PACSSymbolOwnerForImageUUID:(id)arg1 andPath:(id)arg2 andPidHint:(int)arg3;
- (void)_addNewSymbolOwnerForCSSymbolOwnerRef:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg1;
- (void)_fillUUIDCacheWithKernelSymbolOwners;
- (void)_fillUUIDCacheWithSymbolOwnersFromCurrentProcesses;
- (BOOL)_isLikelyToBeKernelAddress:(unsigned long long)arg1;
- (void)_populateCSSymbolOwnerCacheWithLivingProcesses;
- (void)_populateSharedCacheMappingsDictionaryWithSharedCachesInLivingProcesses;
- (id)_sharedCacheMappingsForSharedCacheUUID:(id)arg1;
- (id)_symbolHandleForAddress:(unsigned long long)arg1 withImageUUIDMappings:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)_symbolHandleForOffsetInBinary:(unsigned long long)arg1 inImageUUID:(id)arg2 andImageMappingSlide:(unsigned long long)arg3 andPidHint:(int)arg4;
- (id)_symbolHandleForOffsetIntoSymbolOwner:(unsigned long long)arg1 withSymbolOwner:(id)arg2 andSymbolOwnerBaseAddress:(unsigned long long)arg3 andPidHint:(int)arg4;
- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)cacheSymbolicatorForPid:(int)arg1;
- (id)copySymbolicationInfoForLivingPid:(int)arg1;
- (struct _CSTypeRef { unsigned int x1; unsigned int x2; })csSymbolicatorForPid:(int)arg1;
- (void)dealloc;
- (void)flushCachedSymbolicatorForPid:(int)arg1;
- (void)flushSymbolicatorCache;
- (id)init;
- (void)makeSureKernelBinariesAreKnown;
- (id)ownerContainingSymbol:(id)arg1;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setShouldSymbolicate:(BOOL)arg1;
- (void)setShouldUseDsymForUUIDToFindBinaries:(BOOL)arg1;
- (BOOL)shouldSymbolicate;
- (BOOL)shouldUseDsymForUUIDToFindBinaries;
- (unsigned long)sizeInBytesForSerializedVersion;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inLivingPid:(int)arg2;
- (id)symbolHandleForAddress:(unsigned long long)arg1 inSampleTask:(id)arg2 isLiving:(BOOL)arg3;
- (id)symbolHandleForAddress:(unsigned long long)arg1 withSymbolicator:(struct _CSTypeRef { unsigned int x1; unsigned int x2; })arg2;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inLivingPid:(int)arg3;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 inSampleTask:(id)arg3 isLiving:(BOOL)arg4;
- (id)symbolHandleForOffset:(unsigned long long)arg1 inBinaryWithUUID:(id)arg2 withBinaryOffsetInTask:(unsigned long long)arg3 inLivingPid:(int)arg4;

@end
