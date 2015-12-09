/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKShareInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _container;
    int  _environment;
    NSString * _etag;
    NSString * _iWorkDocumentName;
    NSString * _ownerFirstName;
    NSString * _ownerLastName;
    int  _participantPermission;
    int  _participantStatus;
    int  _participantType;
    NSData * _privateToken;
    NSData * _protectedFullToken;
    NSData * _publicProtectionData;
    NSString * _publicProtectionEtag;
    NSData * _publicToken;
    CKShareID * _shareID;
}

@property (nonatomic, retain) NSString *container;
@property (nonatomic) int environment;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *iWorkDocumentName;
@property (nonatomic, retain) NSString *ownerFirstName;
@property (nonatomic, retain) NSString *ownerLastName;
@property (nonatomic) int participantPermission;
@property (nonatomic) int participantStatus;
@property (nonatomic) int participantType;
@property (nonatomic, retain) NSData *privateToken;
@property (nonatomic, retain) NSData *protectedFullToken;
@property (nonatomic, retain) NSData *publicProtectionData;
@property (nonatomic, retain) NSString *publicProtectionEtag;
@property (nonatomic, retain) NSData *publicToken;
@property (nonatomic, retain) CKShareID *shareID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)ckShortDescription;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)environment;
- (id)etag;
- (id)iWorkDocumentName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)ownerFirstName;
- (id)ownerLastName;
- (int)participantPermission;
- (int)participantStatus;
- (int)participantType;
- (id)privateToken;
- (id)protectedFullToken;
- (id)publicProtectionData;
- (id)publicProtectionEtag;
- (id)publicToken;
- (void)setContainer:(id)arg1;
- (void)setEnvironment:(int)arg1;
- (void)setEtag:(id)arg1;
- (void)setIWorkDocumentName:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setParticipantPermission:(int)arg1;
- (void)setParticipantStatus:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPrivateToken:(id)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setPublicProtectionData:(id)arg1;
- (void)setPublicProtectionEtag:(id)arg1;
- (void)setPublicToken:(id)arg1;
- (void)setShareID:(id)arg1;
- (id)shareID;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (struct _OpaquePCSShareProtection { }*)publicPCS;
- (void)setPublicPCS:(struct _OpaquePCSShareProtection { }*)arg1;

@end
