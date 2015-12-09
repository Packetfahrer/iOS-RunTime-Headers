/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNObservedResult : NSObject {
    unsigned int  _time;
    id  _value;
}

@property (readonly) BOOL isResultEvent;
@property (readonly) int logTime;
@property (readonly) id logValue;
@property (readonly) unsigned int time;
@property (readonly) id value;

+ (id)completionResultWithTime:(unsigned int)arg1;
+ (id)failureWithError:(id)arg1 time:(unsigned int)arg2;
+ (id)resultWithTime:(unsigned int)arg1 value:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithValue:(id)arg1 time:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isResultEvent;
- (int)logTime;
- (id)logValue;
- (unsigned int)time;
- (id)value;

@end
