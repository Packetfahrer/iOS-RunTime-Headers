/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKCategory : _DKObject <_DKHasComparableValue, _DKHasObjectType, _DKHasPrimaryValue> {
    _DKCategoryType * _categoryType;
    int  _integerValue;
}

@property (retain) _DKCategoryType *categoryType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property int integerValue;
@property (readonly) Class superclass;

+ (id)categoryWithInteger:(int)arg1 type:(id)arg2;
+ (id)entityName;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)categoryType;
- (int)compareValue:(id)arg1;
- (BOOL)copyFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteger:(int)arg1 type:(id)arg2;
- (int)integerValue;
- (id)objectType;
- (id)primaryValue;
- (void)setCategoryType:(id)arg1;
- (void)setIntegerValue:(int)arg1;
- (double)valueDouble;
- (long long)valueInteger;

@end
