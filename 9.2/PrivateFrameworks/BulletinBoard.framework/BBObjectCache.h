/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBObjectCache : NSObject {
    NSMutableDictionary * _cache;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _cacheMutex;
    NSString * _identifier;
}

@property (nonatomic, copy) NSString *identifier;

+ (id)description;
+ (id)objectCacheForIdentifier:(id)arg1;

- (id)_descriptionForObject:(id)arg1 uniqueID:(id)arg2;
- (id)cacheObject:(id)arg1;
- (id)cachedObjectForUniqueID:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)identifier;
- (id)init;
- (void)removeCachedObject:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
