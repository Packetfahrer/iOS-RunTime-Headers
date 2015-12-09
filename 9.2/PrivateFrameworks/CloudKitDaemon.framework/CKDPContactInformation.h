/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPContactInformation : PBCodable <NSCopying> {
    NSString * _containerScopedUserId;
    NSString * _emailAddress;
    NSString * _firstName;
    NSString * _lastName;
}

@property (nonatomic, retain) NSString *containerScopedUserId;
@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, readonly) BOOL hasContainerScopedUserId;
@property (nonatomic, readonly) BOOL hasEmailAddress;
@property (nonatomic, readonly) BOOL hasFirstName;
@property (nonatomic, readonly) BOOL hasLastName;
@property (nonatomic, retain) NSString *lastName;

- (void).cxx_destruct;
- (id)containerScopedUserId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailAddress;
- (id)firstName;
- (BOOL)hasContainerScopedUserId;
- (BOOL)hasEmailAddress;
- (BOOL)hasFirstName;
- (BOOL)hasLastName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)lastName;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setContainerScopedUserId:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
