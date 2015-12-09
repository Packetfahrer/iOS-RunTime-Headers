/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {
    unsigned int  _capacity;
    unsigned int  _count;
    struct { double x1; unsigned int x2; unsigned short x3; } * _entries;
}

@property (nonatomic, readonly) unsigned int count;

+ (BOOL)supportsSecureCoding;

- (void)addEventWithId:(unsigned int)arg1 atLocalTime:(unsigned short)arg2;
- (void)addEventWithId:(unsigned int)arg1 atLocalTime:(unsigned short)arg2 count:(double)arg3;
- (void)clear;
- (double)computeCountWithEventId:(unsigned int)arg1;
- (double)computeCountWithEventId:(unsigned int)arg1 atLocaltime:(unsigned short)arg2;
- (void)computeCounts:(double*)arg1 size:(unsigned int)arg2;
- (void)computeCounts:(double*)arg1 size:(unsigned int)arg2 atLocaltime:(unsigned short)arg3;
- (unsigned int)count;
- (void)dealloc;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLife:(double)arg1;
- (id)description;
- (id)descriptionWithEventNames:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned short)pointsPerDay;
- (void)removeEventsWithId:(unsigned int)arg1;
- (void)sortBuckets;
- (double)totalCounts;
- (double)totalCountsAtLocaltime:(unsigned short)arg1;

@end
