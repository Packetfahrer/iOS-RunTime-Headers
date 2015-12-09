/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMTimer : NSObject {
    NSString * _name;
    SEL  _selector;
    id  _target;
    double  _timeInterval;
    id  _timer;
    NSDictionary * _userInfo;
    BOOL  _wakeDevice;
}

@property (nonatomic, readonly, retain) NSDate *fireDate;
@property (nonatomic, readonly, retain) id userInfo;

- (void)dealloc;
- (id)fireDate;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;
- (id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7;
- (void)invalidate;
- (void)setFireTimeInterval:(double)arg1;
- (id)userInfo;

@end
