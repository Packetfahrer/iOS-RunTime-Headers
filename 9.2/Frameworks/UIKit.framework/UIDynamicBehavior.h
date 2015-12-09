/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDynamicBehavior : NSObject {
    id /* block */  _action;
    NSMutableArray * _addedBehaviors;
    NSMutableArray * _behaviors;
    UIDynamicAnimator * _context;
    NSMutableArray * _items;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, readonly, copy) NSArray *childBehaviors;
@property (nonatomic, readonly) UIDynamicAnimator *dynamicAnimator;

+ (BOOL)_isPrimitiveBehavior;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_associate;
- (void)_changedParameterForBody:(id)arg1;
- (id)_context;
- (void)_dissociate;
- (id)_items;
- (id)_itemsDescription;
- (void)_reevaluate:(unsigned int)arg1;
- (void)_setContext:(id)arg1;
- (void)_setItems:(id)arg1;
- (void)_step;
- (id /* block */)action;
- (void)addChildBehavior:(id)arg1;
- (BOOL)allowsAnimatorToStop;
- (id)childBehaviors;
- (id)description;
- (id)dynamicAnimator;
- (id)init;
- (id)items;
- (void)removeChildBehavior:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)willMoveToAnimator:(id)arg1;

@end
