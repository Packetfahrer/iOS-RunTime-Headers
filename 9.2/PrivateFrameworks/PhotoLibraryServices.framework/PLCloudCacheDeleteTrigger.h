/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudCacheDeleteTrigger : PLCloudTrigger {
    BOOL  _activated;
    long long  _goal;
    int  _urgency;
}

@property (nonatomic, readonly) long long goal;
@property (nonatomic, readonly) int urgency;

- (void)activate;
- (id)description;
- (long long)goal;
- (id)init;
- (long long)processPurgeRequestWithUrgency:(int)arg1 targetBytesCount:(long long)arg2;
- (int)urgency;

@end
