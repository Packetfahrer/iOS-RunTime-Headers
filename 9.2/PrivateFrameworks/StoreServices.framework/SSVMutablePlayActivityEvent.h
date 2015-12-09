/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMutablePlayActivityEvent : SSVPlayActivityEvent

@property (getter=isSBEnabled, nonatomic) BOOL SBEnabled;
@property (nonatomic, copy) NSString *containerID;
@property (nonatomic) unsigned int containerType;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic) unsigned int endReasonType;
@property (nonatomic, copy) NSDate *eventDate;
@property (nonatomic, copy) NSTimeZone *eventTimeZone;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic) double itemDuration;
@property (nonatomic) double itemEndTime;
@property (nonatomic) double itemStartTime;
@property (nonatomic) unsigned int itemType;
@property (nonatomic) unsigned int mediaType;
@property (getter=isOffline, nonatomic) BOOL offline;
@property (nonatomic) long long persistentID;
@property (nonatomic, copy) NSString *personalizedContainerID;
@property (nonatomic, copy) NSData *recommendationData;
@property (nonatomic) unsigned int sourceType;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, copy) NSString *storeID;
@property (nonatomic, copy) NSData *timedMetadata;
@property (nonatomic, copy) NSData *trackInfo;

- (Class)_mutableCopyClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setContainerID:(id)arg1;
- (void)setContainerType:(unsigned int)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setEndReasonType:(unsigned int)arg1;
- (void)setEventDate:(id)arg1;
- (void)setEventTimeZone:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setItemDuration:(double)arg1;
- (void)setItemEndTime:(double)arg1;
- (void)setItemStartTime:(double)arg1;
- (void)setItemType:(unsigned int)arg1;
- (void)setMediaType:(unsigned int)arg1;
- (void)setOffline:(BOOL)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPersonalizedContainerID:(id)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setSBEnabled:(BOOL)arg1;
- (void)setSourceType:(unsigned int)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreID:(id)arg1;
- (void)setTimedMetadata:(id)arg1;
- (void)setTrackInfo:(id)arg1;

@end
