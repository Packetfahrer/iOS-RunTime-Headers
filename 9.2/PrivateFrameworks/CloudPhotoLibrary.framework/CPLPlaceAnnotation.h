/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPlaceAnnotation : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _placeLevel;
    NSString * _placeName;
}

@property (nonatomic, copy) NSNumber *placeLevel;
@property (nonatomic, copy) NSString *placeName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)placeLevel;
- (id)placeName;
- (void)setPlaceLevel:(id)arg1;
- (void)setPlaceName:(id)arg1;

@end
