/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceLocationVisit : RTSource <NSCopying, NSSecureCoding> {
    int  _locationOfInterestType;
}

@property (nonatomic, readonly) int locationOfInterestType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterestType:(int)arg1;
- (int)locationOfInterestType;

@end
