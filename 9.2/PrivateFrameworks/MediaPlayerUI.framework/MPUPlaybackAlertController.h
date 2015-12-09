/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUPlaybackAlertController : UIAlertController {
    NSError * _error;
    MPAVItem * _item;
    int  _playbackAlertType;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) MPAVItem *item;
@property (nonatomic, readonly) int playbackAlertType;

+ (id)genericAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(id /* block */)arg3;
+ (id)playbackAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(id /* block */)arg3;
+ (int)playbackAlertTypeForError:(id)arg1;
+ (id)userRemovedAlertControllerForItem:(id)arg1 dismissalBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)error;
- (id)item;
- (int)playbackAlertType;

@end
