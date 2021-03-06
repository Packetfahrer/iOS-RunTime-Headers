/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNPhoneNumber : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {
    struct __CFPhoneNumber { } * _phoneNumberRef;
    NSString * _stringValue;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *digits;
@property (nonatomic, readonly, copy) NSString *formattedInternationalStringValue;
@property (nonatomic, readonly, copy) NSString *formattedStringValue;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *normalizedStringValue;
@property (nonatomic, readonly) struct __CFPhoneNumber { }*phoneNumberRef;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *unformattedInternationalStringValue;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)defaultCountryCode;
+ (id)phoneNumberWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
+ (id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2;
+ (id)phoneNumberWithStringValue:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)description;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedInternationalStringValue;
- (id)formattedStringValue;
- (unsigned int)hash;
- (id)init;
- (id)initWithCFPhoneNumberRef:(struct __CFPhoneNumber { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDigits:(id)arg1 countryCode:(id)arg2;
- (id)initWithStringValue:(id)arg1;
- (id)initWithStringValue:(id)arg1 countryCode:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLikePhoneNumber:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)stringValue;
- (id)unformattedInternationalStringValue;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

- (id)normalizedStringValue;

@end
