/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUMutableCustomFormatData : TSUCustomFormatData

@property (nonatomic) unsigned short currencyCodeIndex;
@property (nonatomic) unsigned char decimalWidth;
@property (nonatomic) BOOL formatContainsIntegerToken;
@property (nonatomic, copy) NSString *formatString;
@property (nonatomic) int fractionAccuracy;
@property (nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;
@property (nonatomic, copy) NSIndexSet *interstitialStringInsertionIndexes;
@property (nonatomic, copy) NSArray *interstitialStrings;
@property (nonatomic) BOOL isComplexFormat;
@property (nonatomic) BOOL isConditional;
@property (nonatomic) unsigned char minimumIntegerWidth;
@property (nonatomic) unsigned char numberOfHashDecimalPlaceholders;
@property (nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;
@property (nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;
@property (nonatomic) BOOL requiresFractionReplacement;
@property (nonatomic) double scaleFactor;
@property (nonatomic) BOOL showThousandsSeparator;
@property (nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;
@property (nonatomic) BOOL useAccountingStyle;

+ (id)customFormatData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
