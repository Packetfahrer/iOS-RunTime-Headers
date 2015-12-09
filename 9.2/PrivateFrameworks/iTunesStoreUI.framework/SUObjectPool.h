/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUObjectPool : NSObject {
    NSMutableDictionary * _poolObjects;
    NSMutableArray * _vendedObjects;
}

@property (nonatomic, readonly) NSArray *vendedObjects;

- (void)addObjects:(id)arg1 forClass:(Class)arg2;
- (id)addObjectsOfClass:(Class)arg1 count:(int)arg2 forClass:(Class)arg3;
- (id)copyPoppedObjectForClass:(Class)arg1;
- (void)dealloc;
- (id)vendedObjects;

@end
