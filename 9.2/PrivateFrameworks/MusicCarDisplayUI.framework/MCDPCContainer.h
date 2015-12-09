/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDPCContainer : NSObject {
    struct { 
        unsigned int didInvalidateRootItem : 1; 
        unsigned int didInvalidateIndicies : 1; 
        unsigned int willChangeCount : 1; 
        unsigned int didChangeCount : 1; 
    }  __supportedDelegateCalls;
    int  _cachedCount;
    NSMapTable * _cachedIndiciesByIdentifier;
    NSMapTable * _cachedItemsByIndicies;
    <MCDPCContainerDelegate> * _delegate;
    NSString * _identifier;
    NSIndexPath * _indexPath;
    MCDPCModel * _model;
    MCDPCItem * _rootItem;
}

@property (nonatomic, readonly) int cachedCount;
@property (nonatomic) <MCDPCContainerDelegate> *delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) MCDPCModel *model;
@property (nonatomic, readonly) MCDPCItem *rootItem;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (void)_contentItemsUpdated:(id)arg1;
- (id)_initWithModel:(id)arg1 rootItem:(id)arg2 indexPath:(id)arg3;
- (int)cachedCount;
- (id)cachedItemForIdentifier:(id)arg1;
- (id)cachedItemForIndex:(int)arg1;
- (id)containerAtIndex:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)getChildrenInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 completion:(id /* block */)arg2;
- (void)getCountOfChildrenWithCompletion:(id /* block */)arg1;
- (void)getRootItemWithCompletion:(id /* block */)arg1;
- (id)identifier;
- (id)indexPath;
- (void)invalidate;
- (BOOL)isValidForRefreshedParent:(id)arg1;
- (id)model;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (id)rootItem;
- (void)setCount:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)updateRootItemWithCompletion:(id /* block */)arg1;

@end
