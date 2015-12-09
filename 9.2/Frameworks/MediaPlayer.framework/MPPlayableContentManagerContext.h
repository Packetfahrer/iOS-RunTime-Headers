/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPlayableContentManagerContext : NSObject {
    BOOL  _contentLimitsEnforced;
    BOOL  _endpointAvailable;
    int  _enforcedContentItemsCount;
    int  _enforcedContentTreeDepth;
}

@property (nonatomic, readonly) BOOL contentLimitsEnabled;
@property (nonatomic) BOOL contentLimitsEnforced;
@property (nonatomic) BOOL endpointAvailable;
@property (nonatomic) int enforcedContentItemsCount;
@property (nonatomic) int enforcedContentTreeDepth;

- (BOOL)contentLimitsEnabled;
- (BOOL)contentLimitsEnforced;
- (BOOL)endpointAvailable;
- (int)enforcedContentItemsCount;
- (int)enforcedContentTreeDepth;
- (void)setContentLimitsEnforced:(BOOL)arg1;
- (void)setEndpointAvailable:(BOOL)arg1;
- (void)setEnforcedContentItemsCount:(int)arg1;
- (void)setEnforcedContentTreeDepth:(int)arg1;

@end
