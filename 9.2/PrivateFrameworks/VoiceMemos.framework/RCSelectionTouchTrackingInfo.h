/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCSelectionTouchTrackingInfo : NSObject {
    float  _lastLocation;
    int  _selectionAffinity;
    int  _selectionBarType;
    UITouch * _touch;
    float  _trackingOffset;
}

@property (nonatomic) int selectionAffinity;
@property (nonatomic) int selectionBarType;
@property (nonatomic) UITouch *touch;
@property (nonatomic) float trackingOffset;

- (void).cxx_destruct;
- (id)description;
- (int)selectionAffinity;
- (int)selectionBarType;
- (void)setSelectionAffinity:(int)arg1;
- (void)setSelectionBarType:(int)arg1;
- (void)setTouch:(id)arg1;
- (void)setTrackingOffset:(float)arg1;
- (id)touch;
- (float)trackingOffset;
- (void)updateTrackingInfo;

@end
