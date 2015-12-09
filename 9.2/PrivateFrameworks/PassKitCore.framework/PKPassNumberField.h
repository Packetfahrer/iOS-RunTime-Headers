/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassNumberField : PKPassField {
    NSString * _currencyCode;
    int  _numberStyle;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (nonatomic) int numberStyle;

+ (BOOL)supportsSecureCoding;

- (id)currencyCode;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)numberStyle;
- (void)setCurrencyCode:(id)arg1;
- (void)setNumberStyle:(int)arg1;
- (id)value;

@end
