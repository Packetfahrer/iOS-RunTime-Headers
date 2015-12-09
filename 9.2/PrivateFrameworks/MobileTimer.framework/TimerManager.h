/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface TimerManager : NSObject {
    UILocalNotification * _notification;
    double  _remainingTime;
    int  _state;
}

@property (nonatomic) double defaultDuration;
@property (nonatomic, readonly) NSString *defaultSound;
@property (nonatomic, readonly) double fireTime;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) int state;

+ (id)copyFetchScheduledNotification;
+ (BOOL)discardOldVersion;
+ (BOOL)isTimerNotification:(id)arg1;
+ (id)newNotificationAt:(double)arg1 withSound:(id)arg2;
+ (void)setSoundID:(id)arg1 forNotification:(id)arg2;
+ (id)sharedManager;
+ (void)updateTimerShortcutItem;
+ (BOOL)upgrade;

- (void).cxx_destruct;
- (BOOL)cancel;
- (void)changeSound:(id)arg1;
- (double)defaultDuration;
- (id)defaultSound;
- (double)fireTime;
- (BOOL)pause;
- (void)reloadState;
- (void)reloadStateAndRefreshLocalNotifications;
- (double)remainingTime;
- (BOOL)resume;
- (void)scheduleAt:(double)arg1 withSound:(id)arg2;
- (void)setDefaultDuration:(double)arg1;
- (void)setDefaultSound:(id)arg1;
- (int)state;

@end
