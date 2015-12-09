/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContact : NSObject <NSSecureCoding> {
    NSString * _emailAddress;
    NSPersonNameComponents * _name;
    CNPhoneNumber * _phoneNumber;
    CNPostalAddress * _postalAddress;
    NSString * _supplementarySubLocality;
}

@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSPersonNameComponents *name;
@property (nonatomic, retain) CNPhoneNumber *phoneNumber;
@property (nonatomic, retain) CNPostalAddress *postalAddress;
@property (nonatomic, retain) NSString *supplementarySubLocality;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)emailAddress;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCNContact:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)phoneNumber;
- (id)postalAddress;
- (void)setEmailAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setSupplementarySubLocality:(id)arg1;
- (id)supplementarySubLocality;

@end
