/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCTreeEnumerator : NSObject {
    BRCLocalContainer * _container;
    NSObject<OS_dispatch_group> * _group;
    id /* block */  _handler;
    BRCItemID * _parentID;
    unsigned int  _rowID;
    NSMutableIndexSet * _seen;
    BRCAccountSession * _session;
    NSMutableIndexSet * _toVisit;
    id /* block */  _whenDone;
}

@property (nonatomic, copy) id /* block */ whenDone;

- (void).cxx_destruct;
- (void)_iterate:(unsigned int)arg1;
- (void)_iterateWithoutParent:(unsigned int)arg1;
- (void)_scheduleAsync;
- (void)_visitNewParent:(unsigned int)arg1;
- (void)done;
- (void)enumerateBelow:(id)arg1 group:(id)arg2;
- (id)initWithContainer:(id)arg1 handler:(id /* block */)arg2;
- (void)setWhenDone:(id /* block */)arg1;
- (id /* block */)whenDone;

@end
