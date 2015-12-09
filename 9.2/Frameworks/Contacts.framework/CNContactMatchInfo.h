/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactMatchInfo : NSObject {
    NSAttributedString * _excerpt;
    BOOL  _matchedNameProperty;
    NSDictionary * _matchedProperties;
    NSNumber * _relevanceScore;
}

@property (nonatomic, retain) NSAttributedString *excerpt;
@property (nonatomic) BOOL matchedNameProperty;
@property (nonatomic, copy) NSDictionary *matchedProperties;
@property (nonatomic, copy) NSNumber *relevanceScore;

- (void)dealloc;
- (id)excerpt;
- (BOOL)matchedNameProperty;
- (id)matchedProperties;
- (id)relevanceScore;
- (void)setExcerpt:(id)arg1;
- (void)setMatchedNameProperty:(BOOL)arg1;
- (void)setMatchedProperties:(id)arg1;
- (void)setRelevanceScore:(id)arg1;

@end
