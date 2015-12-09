/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOnBodyStatus : CMLogItem {
    int  fConfidence;
    int  fResult;
}

@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) int result;

+ (BOOL)supportsSecureCoding;

- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOnBodyResult:(int)arg1 confidence:(int)arg2 timestamp:(double)arg3;
- (int)result;

@end
