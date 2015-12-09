/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptShareInfo : NSObject {
    NSString * _etag;
    NSData * _publicKey;
    NSData * _publicPCSData;
    NSString * _publicPCSEtag;
    CKShareID * _shareID;
    NSURL * _shareURL;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic, retain) NSData *publicPCSData;
@property (nonatomic, retain) NSString *publicPCSEtag;
@property (nonatomic, retain) CKShareID *shareID;
@property (nonatomic, retain) NSURL *shareURL;

- (void).cxx_destruct;
- (id)etag;
- (id)publicKey;
- (id)publicPCSData;
- (id)publicPCSEtag;
- (void)setEtag:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicPCSData:(id)arg1;
- (void)setPublicPCSEtag:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setShareURL:(id)arg1;
- (id)shareID;
- (id)shareURL;

@end
