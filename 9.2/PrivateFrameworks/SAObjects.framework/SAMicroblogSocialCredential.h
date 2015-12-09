/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMicroblogSocialCredential : AceObject <SABackgroundContextObject>

@property (nonatomic, copy) NSString *accessToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *personalizationPermission;
@property (nonatomic, copy) NSString *socialNetwork;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *tokenSecret;

+ (id)socialCredential;
+ (id)socialCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)accessToken;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)personalizationPermission;
- (void)setAccessToken:(id)arg1;
- (void)setPersonalizationPermission:(id)arg1;
- (void)setSocialNetwork:(id)arg1;
- (void)setTokenSecret:(id)arg1;
- (id)socialNetwork;
- (id)tokenSecret;

@end
