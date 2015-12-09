/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUDateParserLibrary : NSObject {
    NSMutableArray * mAvailableDateParsers;
    TSULocale * mLocale;
    unsigned int  mMaxPermittedParsers;
    unsigned int  mNumberOfUses;
    NSCondition * mParserLibraryConditionVariable;
    unsigned int  mParsersCreated;
}

- (id)checkoutDateParser;
- (id)initWithLocale:(id)arg1;
- (void)returnDateParser:(id)arg1;

@end