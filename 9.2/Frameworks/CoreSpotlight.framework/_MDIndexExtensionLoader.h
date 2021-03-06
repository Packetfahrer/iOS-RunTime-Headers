/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _MDIndexExtensionLoader : NSObject {
    id  _extensionMatchingContext;
    NSDictionary * _indexExtensionsByBundleID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, retain) NSDictionary *indexExtensionsByBundleID;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_loadExtensionsSynchronously;
- (id)_matchingDictionary;
- (id)extensionMatchingContext;
- (id)indexExtensionsByBundleID;
- (id)init;
- (id)queue;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setIndexExtensionsByBundleID:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startLookingForExtensionsWithMatchUpdateHandler:(id /* block */)arg1;
- (void)stopLookingForExtensions;

@end
