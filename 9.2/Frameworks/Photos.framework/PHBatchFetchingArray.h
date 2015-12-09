/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHBatchFetchingArray : NSArray <NSCacheDelegate> {
    unsigned int  _batchSize;
    NSCache * _cache;
    unsigned int  _count;
    <PHBatchFetchingArrayDataSource> * _dataSource;
    NSArray * _firstBatch;
    unsigned int  _firstBatchIndex;
    NSObject<OS_dispatch_queue> * _firstBatchQueue;
    NSArray * _oids;
    NSSet * _oidsSet;
    unsigned int  _propertyHint;
    NSMutableDictionary * _uuidsByOIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSArray *oids;
@property (readonly) NSSet *oidsSet;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;

+ (BOOL)accessInstanceVariablesDirectly;

- (void).cxx_destruct;
- (id)__batchHelper:(unsigned int)arg1;
- (void)_evictBatchNumber:(int)arg1;
- (void)_invalidateUUIDCache;
- (id)_phObjectAtIndex:(unsigned int)arg1;
- (id)_phObjectsForOIDs:(id)arg1;
- (unsigned int)_populateObjectBuffer:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_rememberUUIDsForBatch:(id)arg1;
- (unsigned int)batchSize;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 dataSource:(id)arg3;
- (id)initWithOIDs:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3;
- (void)min:(id*)arg1 andMax:(id*)arg2 forKeypath:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)oids;
- (id)oidsSet;
- (id)photoLibrary;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
