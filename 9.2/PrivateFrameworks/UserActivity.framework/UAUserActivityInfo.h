/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

@interface UAUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _activityDate;
    unsigned int  _changeCount;
    NSData * _contentAttributeSetData;
    NSString * _contentUserAction;
    NSString * _dynamicIdentifier;
    BOOL  _eligibleForHandoff;
    BOOL  _eligibleForPublicIndex;
    BOOL  _eligibleForSearch;
    NSData * _encodedUserInfo;
    NSError * _encodedUserInfoError;
    NSDictionary * _encodingOptions;
    NSError * _error;
    NSDate * _expirationDate;
    NSSet * _keywords;
    NSDictionary * _options;
    NSSet * _requiredUserInfoKeys;
    NSData * _streamsData;
    NSString * _teamIdentifier;
    NSString * _title;
    unsigned int  _type;
    NSString * _typeIdentifier;
    NSUUID * _uuid;
    NSURL * _webpageURL;
}

@property (copy) NSDate *activityDate;
@property unsigned int changeCount;
@property (copy) NSData *contentAttributeSetData;
@property (copy) NSString *contentUserAction;
@property (copy) NSString *dynamicIdentifier;
@property BOOL eligibleForHandoff;
@property BOOL eligibleForPublicIndex;
@property BOOL eligibleForSearch;
@property (copy) NSData *encodedUserInfo;
@property (copy) NSError *encodedUserInfoError;
@property (copy) NSDictionary *encodingOptions;
@property (copy) NSError *error;
@property (copy) NSDate *expirationDate;
@property (copy) NSSet *keywords;
@property (copy) NSDictionary *options;
@property (copy) NSSet *requiredUserInfoKeys;
@property (copy) NSData *streamsData;
@property (copy) NSString *teamIdentifier;
@property (copy) NSString *title;
@property unsigned int type;
@property (copy) NSString *typeIdentifier;
@property (copy) NSUUID *uuid;
@property (copy) NSURL *webpageURL;

+ (BOOL)supportsSecureCoding;

- (void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (id)activityDate;
- (unsigned int)changeCount;
- (id)contentAttributeSetData;
- (id)contentUserAction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dynamicIdentifier;
- (BOOL)eligibleForHandoff;
- (BOOL)eligibleForPublicIndex;
- (BOOL)eligibleForSearch;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedUserInfo;
- (id)encodedUserInfoError;
- (id)encodingOptions;
- (id)error;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)keywords;
- (id)logString;
- (id)optionalUserActivityData;
- (id)options;
- (id)requiredUserInfoKeys;
- (id)secondaryUserActivityString;
- (void)setActivityDate:(id)arg1;
- (void)setChangeCount:(unsigned int)arg1;
- (void)setContentAttributeSetData:(id)arg1;
- (void)setContentUserAction:(id)arg1;
- (void)setDynamicIdentifier:(id)arg1;
- (void)setEligibleForHandoff:(BOOL)arg1;
- (void)setEligibleForPublicIndex:(BOOL)arg1;
- (void)setEligibleForSearch:(BOOL)arg1;
- (void)setEncodedUserInfo:(id)arg1;
- (void)setEncodedUserInfoError:(id)arg1;
- (void)setEncodingOptions:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeywords:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setRequiredUserInfoKeys:(id)arg1;
- (void)setStreamsData:(id)arg1;
- (void)setTeamIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)statusString;
- (id)streamsData;
- (id)teamIdentifier;
- (id)title;
- (unsigned int)type;
- (id)typeIdentifier;
- (id)userActivityString;
- (id)uuid;
- (id)webpageURL;

@end
