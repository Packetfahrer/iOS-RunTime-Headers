/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainerCache : NSObject {
    <NSObject> * _containerStatusObserver;
    NSMutableDictionary * _containersByID;
    BOOL  _didFetchAllContainers;
    <BRContainerHelper> * _helper;
    struct br_pacer_t { } * _invalidationPacer;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
}

+ (id)containerCache;

- (id)_allContainersByIDNoCopy;
- (void)_containerListDidChange;
- (void)_invalidate;
- (id)allContainers;
- (id)allContainersByID;
- (id)containerByID:(id)arg1 forURL:(id)arg2;
- (void)dealloc;
- (id)documentContainers;
- (id)initWithHelper:(id)arg1;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
