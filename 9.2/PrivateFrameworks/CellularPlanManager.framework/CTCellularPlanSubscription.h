/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
 */

@interface CTCellularPlanSubscription : NSObject <NSCopying, NSSecureCoding> {
    int  _accountStatus;
    NSString * _accountURL;
    BOOL  _autoRenew;
    double  _billingEndDate;
    double  _billingStartDate;
    NSString * _carrierName;
    NSArray * _dataUsage;
    NSArray * _homeCountryList;
    NSString * _iccid;
    NSString * _planDescription;
    int  _planStatus;
    int  _planType;
    int  _subscriptionResult;
    double  _timestamp;
}

@property (nonatomic, readonly) int accountStatus;
@property (nonatomic, readonly) NSString *accountURL;
@property (nonatomic, readonly) BOOL autoRenew;
@property (nonatomic, readonly) double billingEndDate;
@property (nonatomic, readonly) double billingStartDate;
@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) NSArray *dataUsage;
@property (nonatomic, readonly) NSArray *homeCountryList;
@property (nonatomic, readonly) NSString *iccid;
@property (nonatomic, readonly) NSString *planDescription;
@property (nonatomic) int planStatus;
@property (nonatomic, readonly) int planType;
@property (nonatomic) int subscriptionResult;
@property (nonatomic, readonly) double timestamp;

+ (BOOL)supportsSecureCoding;

- (int)accountStatus;
- (id)accountURL;
- (BOOL)autoRenew;
- (double)billingEndDate;
- (double)billingStartDate;
- (id)carrierName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataUsage;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)homeCountryList;
- (id)iccid;
- (id)initWithCoder:(id)arg1;
- (id)initWithIccid:(id)arg1 subscriptionResult:(int)arg2 autoRenew:(BOOL)arg3 billingStartDate:(double)arg4 billingEndDate:(double)arg5 carrierName:(id)arg6 planType:(int)arg7 planDescription:(id)arg8 planStatus:(int)arg9 accountStatus:(int)arg10 accountURL:(id)arg11 timestamp:(double)arg12 homeCountryList:(id)arg13 dataUsage:(id)arg14;
- (BOOL)isEqualOrNewerThanSubscription:(id)arg1;
- (id)planDescription;
- (int)planStatus;
- (int)planType;
- (void)setPlanStatus:(int)arg1;
- (void)setSubscriptionResult:(int)arg1;
- (int)subscriptionResult;
- (double)timestamp;

@end
