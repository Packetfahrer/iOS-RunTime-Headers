/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDContact : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _identifier;
    NSString * _personId;
    unsigned int  _personIdType;
    _CDContactStatistics * _statistics;
    unsigned int  _type;
}

@property (retain) NSString *displayName;
@property (retain) NSString *identifier;
@property (retain) NSString *identifierType;
@property (retain) NSString *personId;
@property unsigned int personIdType;
@property (retain) _CDContactStatistics *statistics;
@property unsigned int type;

+ (id)_CDValueForContactProperty:(id)arg1;
+ (id)_contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)contactPropertiesForContacts:(id)arg1;
+ (id)contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned int)arg5;
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 personId:(id)arg3 personIdType:(unsigned int)arg4;
+ (id)contactWithIdentifier:(id)arg1 type:(unsigned int)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned int)arg5;
+ (id)normalizedStringKey:(id)arg1;
+ (id)predicateForContact:(id)arg1;
+ (id)predicateForContactWithDisplayName:(id)arg1;
+ (id)predicateForContactWithIdentifier:(id)arg1;
+ (id)predicateForContactWithPersonId:(id)arg1 personIdType:(unsigned int)arg2;
+ (id)predicateForContactWithType:(unsigned int)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)typeAsCNContactPropertyKey:(unsigned int)arg1;
+ (unsigned int)typeFromString:(id)arg1;

- (void).cxx_destruct;
- (int)compare:(id)arg1;
- (id)contactProperty;
- (id)contactPropertyWithMechanismHint:(int)arg1;
- (id)contactPropertyWithOptionalMechanismHint:(int*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)identifier;
- (id)identifierType;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactProperty:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned int)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned int)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)mayContainPrefix:(id)arg1;
- (BOOL)mayRepresentSamePersonAs:(id)arg1;
- (void)mergeWithContact:(id)arg1;
- (id)personId;
- (unsigned int)personIdType;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIdentifierType:(id)arg1;
- (void)setPersonId:(id)arg1;
- (void)setPersonIdType:(unsigned int)arg1;
- (void)setStatistics:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (id)statistics;
- (unsigned int)type;

@end
