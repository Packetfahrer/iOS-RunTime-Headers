/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCNotification : BRQueryItem {
    NSString * _aliasContainerID;
    BRCLocalContainer * _container;
    NSMutableSet * _containerIDsWithReverseAliases;
    BRCItemID * _itemID;
    unsigned long long  _oldParentFileID;
    unsigned long long  _parentFileID;
    BRCItemID * _parentID;
    NSSet * _parentIDs;
    NSString * _unsaltedBookmarkData;
}

@property (nonatomic, readonly) NSString *aliasContainerID;
@property (nonatomic, readonly) BRCLocalContainer *container;
@property (nonatomic, retain) NSMutableSet *containerIDsWithReverseAliases;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) unsigned long long oldParentFileID;
@property (nonatomic, readonly) NSNumber *oldParentFileObjectID;
@property (nonatomic, readonly) unsigned long long parentFileID;
@property (nonatomic, readonly) NSNumber *parentFileObjectID;
@property (nonatomic, readonly) BRCItemID *parentID;
@property (nonatomic, retain) NSSet *parentIDs;
@property (nonatomic, retain) NSString *unsaltedBookmarkData;
@property (nonatomic, readonly) NSURL *url;

+ (id)notificationGatheredFromItem:(id)arg1;
+ (id)notificationWithAliasItem:(id)arg1 targetItemNotification:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addAliasDecoration:(id)arg1;
- (id)aliasContainerID;
- (BOOL)canMerge:(id)arg1;
- (Class)classForCoder;
- (id)container;
- (id)containerIDsWithReverseAliases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)generateLogicalExtension:(id)arg1 physicalExtension:(id)arg2;
- (id)initWithAliasItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)initWithLocalItem:(id)arg1 itemDiffs:(unsigned long long)arg2;
- (id)itemID;
- (void)merge:(id)arg1;
- (id)notificationByStrippingSharingInfoIfNeeded;
- (unsigned long long)oldParentFileID;
- (id)oldParentFileObjectID;
- (unsigned long long)parentFileID;
- (id)parentFileObjectID;
- (id)parentID;
- (id)parentIDs;
- (void)setContainerIDsWithReverseAliases:(id)arg1;
- (void)setParentIDs:(id)arg1;
- (void)setUnsaltedBookmarkData:(id)arg1;
- (id)subclassDescription;
- (id)unsaltedBookmarkData;

@end
