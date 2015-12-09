/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contactPoint;
    NSString * _identifier;
    NSString * _organizationName;
    BOOL  _requiresUserInteraction;
    NSString * _sourceAddress;
    unsigned int  _type;
    NSString * _typeDescription;
}

@property (nonatomic, copy) NSString *contactPoint;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *organizationName;
@property (nonatomic) BOOL requiresUserInteraction;
@property (nonatomic, copy) NSString *sourceAddress;
@property (nonatomic) unsigned int type;
@property (nonatomic, copy) NSString *typeDescription;
@property (nonatomic, readonly) NSString *typeDescriptionUnlocalized;

+ (BOOL)supportsSecureCoding;
+ (id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2;

- (id)contactPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (BOOL)needsServerRequest;
- (id)organizationName;
- (BOOL)requiresUserInteraction;
- (void)setContactPoint:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (void)setRequiresUserInteraction:(BOOL)arg1;
- (void)setSourceAddress:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setTypeDescription:(id)arg1;
- (id)sourceAddress;
- (unsigned int)type;
- (id)typeDescription;
- (id)typeDescriptionUnlocalized;

@end
