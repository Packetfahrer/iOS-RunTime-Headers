/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISFilteredAVPlayer : AVPlayer {
    BOOL  _filterEnabled;
    float  _filterSweepValue;
}

@property (getter=isFilterEnabled, nonatomic) BOOL filterEnabled;
@property (nonatomic) float filterSweepValue;

- (void)_updateAudioMix;
- (float)filterSweepValue;
- (BOOL)isFilterEnabled;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setFilterEnabled:(BOOL)arg1;
- (void)setFilterSweepValue:(float)arg1;

@end
