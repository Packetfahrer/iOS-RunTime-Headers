/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
 */

@interface CUIKUserActivity : NSObject {
    NSSet * _activityKeywords;
    NSString * _activitySubtitle;
    NSString * _activityTitle;
    unsigned int  _type;
    unsigned int  _version;
}

@property (nonatomic, retain) NSSet *activityKeywords;
@property (nonatomic, retain) NSString *activitySubtitle;
@property (nonatomic, retain) NSString *activityTitle;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int version;

+ (double)_doubleFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (int)_integerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (id)_stringFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (unsigned int)_typeFromDictionary:(id)arg1;
+ (unsigned int)_unsignedIntegerFromDictionary:(id)arg1 key:(id)arg2 error:(BOOL*)arg3;
+ (id)activityForActivity:(id)arg1;
+ (id)activityForDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)activityKeywords;
- (id)activitySubtitle;
- (id)activityTitle;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned int)arg1;
- (void)setActivityKeywords:(id)arg1;
- (void)setActivitySubtitle:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)type;
- (void)updateActivity:(id)arg1;
- (unsigned int)version;

@end
