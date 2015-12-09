/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKTimePeriod : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _endDate;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *startDate;

+ (BOOL)supportsSecureCoding;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;

- (void).cxx_destruct;
- (int)compareByEndDate:(id)arg1;
- (int)compareByStartDate:(id)arg1;
- (BOOL)containsDate:(id)arg1;
- (BOOL)containsTimePeriod:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (BOOL)endsBeforeDate:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)overlapsTimePeriod:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;
- (BOOL)startsAfterDate:(id)arg1;

@end
