/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDuetEventManager : NSObject {
    _DKKnowledgeStore * _store;
}

@property (nonatomic, retain) _DKKnowledgeStore *store;

+ (id)actionSetTypeToUUIDMap;
+ (id)eventStreamForType:(unsigned int)arg1;
+ (id)identifierForType:(unsigned int)arg1 eventValue:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)logEventWithType:(unsigned int)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5;
- (void)setStore:(id)arg1;
- (id)store;

@end
