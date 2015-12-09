/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKComparisonMetadataFilter : _HKMetadataFilter {
    id  _value;
}

@property (nonatomic, readonly) id value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)_acceptsOperatorType:(unsigned int)arg1;
+ (id)filterWithKey:(id)arg1 operatorType:(unsigned int)arg2 value:(id)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithKey:(id)arg1 operatorType:(unsigned int)arg2 value:(id)arg3;
- (BOOL)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithHealthDaemon:(id)arg1;

@end
