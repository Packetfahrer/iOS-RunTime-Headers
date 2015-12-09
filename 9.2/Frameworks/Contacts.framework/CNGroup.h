/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    int  _iOSLegacyIdentifier;
    NSString * _identifier;
    NSString * _name;
    CNGroup * _snapshot;
}

@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) CNGroup *snapshot;

+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)predicateForGroupWithNameMatching:(id)arg1;
+ (id)predicateForGroupsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForGroupsWithIdentifiers:(id)arg1;
+ (id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForiOSLegacyIdentifier:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroup:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)snapshot;

@end
