/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableArchive : NSObject {
    SFUFileDataRepresentation * _archiveFileRep;
    SFUMemoryDataRepresentation * _archiveMemoryRep;
    SFUZipEntry * _archiveZipEntryRep;
    struct { 
        unsigned long long version; 
        unsigned long long compatibleVersion; 
    }  _archivedVersions;
    struct map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long> > > > { struct __tree<std::__1::__value_type<long long, std::__1::pair<long long, long long> >, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::pair<long long, long long> >, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, std::__1::pair<long long, long long> > > > { struct __tree_node<std::__1::__value_type<long long, std::__1::pair<long long, long long> >, void *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, std::__1::pair<long long, long long> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, std::__1::pair<long long, long long> >, std::__1::less<long long>, true> > { unsigned long x_3_2_1; } x_1_1_3; } x1; } * _entries;
}

+ (BOOL)_checkFileHeader:(const char *)arg1 length:(unsigned long)arg2 dffVersion:(unsigned short*)arg3 archivedVersions:(struct { unsigned long long x1; unsigned long long x2; }*)arg4 defaultObjectVersion:(unsigned int*)arg5 hasDescriptors:(BOOL*)arg6 hasToc:(BOOL*)arg7 otherDataLength:(unsigned int*)arg8 closedCleanly:(BOOL*)arg9;
+ (id)_newStringFromUtf8DataInStream:(id)arg1 length:(unsigned long)arg2;
+ (void)cancelStreaming;
+ (BOOL)readArchivedVersionsFromStream:(id)arg1 versions:(struct { unsigned long long x1; unsigned long long x2; }*)arg2 error:(id*)arg3;
+ (BOOL)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int*)arg2 error:(id*)arg3;
+ (BOOL)streamDistributableArchive:(id)arg1 estimatedDataLength:(long long)arg2 toUnarchiver:(id)arg3 supplementalDataBundle:(id)arg4 closedCleanly:(BOOL*)arg5 context:(id)arg6 error:(id*)arg7;

- (void).cxx_destruct;
- (id)_createInputStreamWithOffset:(long long)arg1 length:(long long)arg2;
- (BOOL)_readEntriesFromToc:(id)arg1 error:(id*)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })archivedVersions;
- (BOOL)containsObjectWithIdentifier:(long long)arg1;
- (id)createStreamForObject:(long long)arg1 length:(long long*)arg2;
- (void)dealloc;
- (id)initWithDffData:(id)arg1 error:(id*)arg2;
- (long long)lengthOfObject:(long long)arg1;

@end
