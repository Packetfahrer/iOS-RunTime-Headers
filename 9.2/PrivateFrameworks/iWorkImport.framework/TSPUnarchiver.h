/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPUnarchiver : NSObject {
    <TSPUnarchiverDelegate> * _delegate;
    struct vector<void (^)(), std::__1::allocator<void (^)()> >="__begin_"^@?"__end_"^@?"__end_cap_"{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >="__first_"^@? {}  _finalizeHandlers;
    <TSPLazyReferenceDelegate> * _lazyReferenceDelegate;
    struct auto_ptr<google::protobuf::Message> { 
        struct Message {} *__ptr_; 
    }  _message;
    unsigned int  _messageType;
    unsigned long long  _messageVersion;
    <TSPObjectDelegate> * _objectDelegate;
    long long  _objectIdentifier;
    struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > { 
        struct UnarchiverReference {} *__begin_; 
        struct UnarchiverReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverReference *, std::__1::allocator<TSP::UnarchiverReference> > { 
            struct UnarchiverReference {} *__first_; 
        } __end_cap_; 
    }  _references;
    struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
        struct UnarchiverRepeatedReference {} *__begin_; 
        struct UnarchiverRepeatedReference {} *__end_; 
        struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { 
            struct UnarchiverRepeatedReference {} *__first_; 
        } __end_cap_; 
    }  _repeatedReferences;
    struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { 
        struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *__ptr_; 
    }  _strongReferences;
    TSPUnknownContent * _unknownContent;
}

@property (nonatomic, readonly) BOOL canValidateReferences;
@property (nonatomic, readonly) <TSPUnarchiverDelegate> *delegate;
@property (nonatomic, readonly) BOOL documentHasCurrentFileFormatVersion;
@property (nonatomic, readonly) unsigned long long fileFormatVersion;
@property (nonatomic, readonly) BOOL hasDocumentVersionUUID;
@property (nonatomic, readonly) BOOL hasPreUFFVersion;
@property (nonatomic, readonly) BOOL isCrossAppPaste;
@property (nonatomic, readonly) BOOL isCrossDocumentPaste;
@property (nonatomic, readonly) BOOL isFromCopy;
@property (nonatomic, readonly) unsigned int messageType;
@property (nonatomic, readonly) unsigned long long messageVersion;
@property (nonatomic, readonly) <TSPObjectDelegate> *objectDelegate;
@property (nonatomic, readonly) long long objectIdentifier;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, readonly) unsigned long long preUFFVersion;
@property (nonatomic, readonly) TSPUnknownContent *unknownContent;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFinalizeHandler:(id /* block */)arg1;
- (BOOL)canValidateReferences;
- (id)delegate;
- (BOOL)documentHasCurrentFileFormatVersion;
- (unsigned long long)fileFormatVersion;
- (struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)filterIdentifiers:(const struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > { }*)arg1;
- (struct vector<void (^)(), std::__1::allocator<void (^)()> >=^@?^@?{__compressed_pair<void (^__strong *)(), std::__1::allocator<void (^)()> >=^@? {}*)finalizeHandlers;
- (BOOL)hasDocumentVersionUUID;
- (BOOL)hasPreUFFVersion;
- (id)initWithMessageType:(unsigned int)arg1 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; })arg2 identifier:(long long)arg3 strongReferences:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg4 fieldInfos:(struct auto_ptr<TSP::FieldInfoTree> { struct FieldInfoTree {} *x1; })arg5 messageVersion:(unsigned long long)arg6 unknownMessages:(id)arg7 ignoreVersionChecking:(BOOL)arg8 objectDelegate:(id)arg9 lazyReferenceDelegate:(id)arg10 delegate:(id)arg11 error:(id*)arg12;
- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isFromCopy;
- (const struct Message { int (**x1)(); }*)message;
- (unsigned int)messageType;
- (unsigned long long)messageVersion;
- (id)objectDelegate;
- (long long)objectIdentifier;
- (id)objectUUID;
- (unsigned long long)preUFFVersion;
- (id)readDataReferenceMessage:(const struct DataReference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; }*)arg1;
- (void)readLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(id /* block */)arg7;
- (void)readReferenceMessage1:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 message2:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2 completion:(id /* block */)arg3;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 weakSelector:(SEL)arg6 completion:(id /* block */)arg7;
- (void)readReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 repeatedMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2 completion:(id /* block */)arg3;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(id /* block */)arg6;
- (void)readRepeatedLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 delegate:(id)arg6 completion:(id /* block */)arg7;
- (void)readRepeatedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 isWeak:(BOOL)arg2 validateStrongReferences:(BOOL)arg3 allowUnknownObject:(BOOL)arg4 selector:(SEL)arg5 completion:(id /* block */)arg6;
- (void)readRepeatedUnownedReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedWeakLazyReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (id)readRepeatedWeakObjectUUIDPathReferenceMessage:(const struct RepeatedPtrField<TSP::UUIDPath> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (id)readRepeatedWeakObjectUUIDReferenceMessage:(const struct RepeatedPtrField<TSP::UUID> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readRepeatedWeakReferenceMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg1 completion:(id /* block */)arg2;
- (void)readSparseReferenceArrayMessage:(const struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 completion:(id /* block */)arg2;
- (void)readSparseReferenceArrayMessage:(const struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 isWeak:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)readSparseWeakObjectUUIDPathReferenceArrayMessage:(const struct SparseUUIDPathArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseUUIDPathArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (id)readSparseWeakObjectUUIDReferenceArrayMessage:(const struct SparseUUIDArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseUUIDArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1;
- (void)readSparseWeakReferenceArrayMessage:(const struct SparseReferenceArray { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::SparseReferenceArray_Entry> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; unsigned int x6; }*)arg1 completion:(id /* block */)arg2;
- (void)readUnownedReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readWeakLazyReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (id)readWeakObjectUUIDPathReferenceMessage:(const struct UUIDPath { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct RepeatedPtrField<TSP::UUID> { void **x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; } x5; }*)arg1 completion:(id /* block */)arg2;
- (id)readWeakObjectUUIDReferenceMessage:(const struct UUID { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; unsigned long long x6; }*)arg1 completion:(id /* block */)arg2;
- (void)readWeakReferenceMessage1:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 message2:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg2 completion:(id /* block */)arg3;
- (void)readWeakReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 completion:(id /* block */)arg2;
- (void)readWeakReferenceMessage:(const struct Reference { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; int x6; bool x7; }*)arg1 repeatedMessage:(const struct RepeatedPtrField<TSP::Reference> { void **x1; int x2; int x3; int x4; }*)arg2 completion:(id /* block */)arg3;
- (void)readWeakReferenceToObjectUUID:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (struct vector<TSP::UnarchiverReference, std::__1::allocator<TSP::UnarchiverReference> > { struct UnarchiverReference {} *x1; struct UnarchiverReference {} *x2; struct __compressed_pair<TSP::UnarchiverReference *, std::__1::allocator<TSP::UnarchiverReference> > { struct UnarchiverReference {} *x_3_1_1; } x3; }*)references;
- (struct vector<TSP::UnarchiverRepeatedReference, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { struct UnarchiverRepeatedReference {} *x1; struct UnarchiverRepeatedReference {} *x2; struct __compressed_pair<TSP::UnarchiverRepeatedReference *, std::__1::allocator<TSP::UnarchiverRepeatedReference> > { struct UnarchiverRepeatedReference {} *x_3_1_1; } x3; }*)repeatedReferences;
- (struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)strongReferences;
- (id)unknownContent;
- (void)validateReferenceToObjectIdentifier:(long long)arg1 isWeak:(BOOL*)arg2 validateStrongReferences:(BOOL)arg3 selector:(SEL)arg4 weakSelector:(SEL)arg5;

@end
