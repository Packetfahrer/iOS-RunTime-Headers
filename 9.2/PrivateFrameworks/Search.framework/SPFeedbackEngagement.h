/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@interface SPFeedbackEngagement : SPFeedback {
    NSString * _actionTarget;
    NSURL * _action_destination;
    NSString * _cardType;
    int  _displayPosition;
    BOOL  _engagementOnCard;
    NSString * _lastSearchQuery;
    double  _resultScore;
    double  _sectionScore;
    BOOL  _userReturnedToResultsList;
}

@property (nonatomic, retain) NSString *actionTarget;
@property (nonatomic, retain) NSURL *action_destination;
@property (nonatomic, retain) NSString *cardType;
@property int displayPosition;
@property (nonatomic) BOOL engagementOnCard;
@property (nonatomic, retain) NSString *lastSearchQuery;
@property double resultScore;
@property double sectionScore;
@property (nonatomic) BOOL userReturnedToResultsList;

- (void).cxx_destruct;
- (id)actionTarget;
- (id)action_destination;
- (id)cardType;
- (int)displayPosition;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)engagementOnCard;
- (id)initWithCoder:(id)arg1;
- (id)lastSearchQuery;
- (id)parsecFeedbackFromSession:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2;
- (double)resultScore;
- (double)sectionScore;
- (void)setActionTarget:(id)arg1;
- (void)setAction_destination:(id)arg1;
- (void)setCardType:(id)arg1;
- (void)setDisplayPosition:(int)arg1;
- (void)setEngagementOnCard:(BOOL)arg1;
- (void)setLastSearchQuery:(id)arg1;
- (void)setResultScore:(double)arg1;
- (void)setSectionScore:(double)arg1;
- (void)setUserReturnedToResultsList:(BOOL)arg1;
- (BOOL)userReturnedToResultsList;

@end
