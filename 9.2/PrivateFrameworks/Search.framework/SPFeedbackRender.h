/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackRender : SPFeedback {
    NSArray * _hiddentExtResults;
    BOOL  _leftOfHome;
    NSArray * _sections;
    double  _triggerTimestamp;
}

@property (nonatomic, retain) NSArray *hiddentExtResults;
@property (nonatomic) BOOL leftOfHome;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic) double triggerTimestamp;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)hiddentExtResults;
- (id)initWithCoder:(id)arg1;
- (BOOL)leftOfHome;
- (id)parsecFeedbackFromSession:(id)arg1;
- (id)sections;
- (void)setHiddentExtResults:(id)arg1;
- (void)setLeftOfHome:(BOOL)arg1;
- (void)setSections:(id)arg1;
- (void)setTriggerTimestamp:(double)arg1;
- (double)triggerTimestamp;

@end
