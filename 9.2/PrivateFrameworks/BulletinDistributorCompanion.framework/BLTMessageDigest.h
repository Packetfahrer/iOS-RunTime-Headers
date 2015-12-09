/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTMessageDigest : NSObject <NSCoding> {
    NSData * _messageDigest;
}

@property (nonatomic, retain) NSData *messageDigest;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToMessageDigest:(id)arg1;
- (id)messageDigest;
- (void)setMessageDigest:(id)arg1;

@end
