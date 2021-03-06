/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSTonePurchase : SSPurchase <NSCoding, NSCopying, SSXPCCoding> {
    NSArray * _allowedToneStyles;
    NSNumber * _assigneeIdentifier;
    NSString * _assigneeToneStyle;
    BOOL  _shouldMakeDefaultRingtone;
    BOOL  _shouldMakeDefaultTextTone;
}

@property (copy) NSArray *allowedToneStyles;
@property (retain) NSNumber *assigneeIdentifier;
@property (copy) NSString *assigneeToneStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property BOOL shouldMakeDefaultRingtone;
@property BOOL shouldMakeDefaultTextTone;
@property (readonly) Class superclass;

- (void)_addEntriesToDatabaseEncoding:(id)arg1;
- (void)_setValuesUsingDatabaseEncoding:(id)arg1;
- (id)allowedToneStyles;
- (id)assigneeIdentifier;
- (id)assigneeToneStyle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1 offer:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAllowedToneStyles:(id)arg1;
- (void)setAssigneeIdentifier:(id)arg1;
- (void)setAssigneeToneStyle:(id)arg1;
- (void)setShouldMakeDefaultRingtone:(BOOL)arg1;
- (void)setShouldMakeDefaultTextTone:(BOOL)arg1;
- (BOOL)shouldMakeDefaultRingtone;
- (BOOL)shouldMakeDefaultTextTone;

@end
