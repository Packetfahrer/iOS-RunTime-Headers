/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSInPredicateOperator : NSPredicateOperator {
    unsigned int  _flags;
    NSSubstringPredicateOperator * _stringVersion;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)supportsSecureCoding;

- (void)_setOptions:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned int)arg1 modifier:(unsigned int)arg2 options:(unsigned int)arg3;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)options;
- (BOOL)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)stringVersion;
- (id)symbol;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2;

@end
