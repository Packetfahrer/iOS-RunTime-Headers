/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKEvent : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue> {
    double  _confidence;
    NSDate * _endDate;
    NSDate * _startDate;
    _DKEventStream * _stream;
    NSTimeZone * _timeZone;
    _DKObject * _value;
}

@property double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *endDate;
@property (readonly) unsigned int hash;
@property (retain) NSDate *startDate;
@property (retain) _DKEventStream *stream;
@property (readonly) Class superclass;
@property (retain) NSTimeZone *timeZone;
@property (retain) _DKObject *value;

+ (id)entityName;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6;
+ (id)eventWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 metadata:(id)arg5;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)compareValue:(id)arg1;
- (double)confidence;
- (BOOL)copyFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2;
- (BOOL)copyToManagedObject:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithStream:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 value:(id)arg4 confidence:(double)arg5 metadata:(id)arg6;
- (id)primaryValue;
- (void)setConfidence:(double)arg1;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStream:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setValue:(id)arg1;
- (id)startDate;
- (id)stream;
- (id)timeZone;
- (id)value;

@end
