/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMChatItem : NSObject <NSCopying> {
    IMItem * _item;
}

@property (nonatomic, readonly) BOOL canDelete;

- (id)_initWithItem:(id)arg1;
- (id)_item;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (BOOL)canDelete;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;

@end
