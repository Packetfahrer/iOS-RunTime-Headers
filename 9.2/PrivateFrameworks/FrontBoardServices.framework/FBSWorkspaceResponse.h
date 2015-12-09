/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceResponse : NSObject <BSXPCCoding> {
    BKSAnimationFenceHandle * _animationFence;
}

@property (nonatomic, retain) BKSAnimationFenceHandle *animationFence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)animationFence;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setAnimationFence:(id)arg1;

@end
