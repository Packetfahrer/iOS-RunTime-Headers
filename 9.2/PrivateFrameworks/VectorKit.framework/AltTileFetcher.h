/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface AltTileFetcher : NSObject {
    GEOTileLoader * _geoTileLoader;
    struct map<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob>, GEOTileKeyComp, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> > > > { 
        struct __tree<std::__1::__value_type<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, std::__1::__map_value_compare<_GEOTileKey, std::__1::__value_type<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, GEOTileKeyComp, true>, std::__1::allocator<std::__1::__value_type<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> > > > { 
            struct __tree_node<std::__1::__value_type<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_GEOTileKey, std::__1::__value_type<_GEOTileKey, std::__1::shared_ptr<altitude::GeoServicesLoadJob> >, GEOTileKeyComp, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _keyToJobMap;
    struct Mutex { 
        void *mMutex; 
    }  _mutex;
    unsigned int  _numDownloads;
    NSString * _tileLoaderClientIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelJob:(struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (void)cancelRequests;
- (void)dealloc;
- (void)fetchDataForJob:(struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; })getJobForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)init;
- (BOOL)isDownloading;
- (void)purgeExpired:(double)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)updateJobPriority:(struct shared_ptr<altitude::GeoServicesLoadJob> { struct GeoServicesLoadJob {} *x1; struct __shared_weak_count {} *x2; }*)arg1;

@end
