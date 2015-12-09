/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationResultErrorExtension : PBCodable <NSCopying> {
    NSString * _extensionName;
    struct { 
        unsigned int typeCode : 1; 
    }  _has;
    unsigned int  _typeCode;
}

@property (nonatomic, retain) NSString *extensionName;
@property (nonatomic, readonly) BOOL hasExtensionName;
@property (nonatomic) BOOL hasTypeCode;
@property (nonatomic) unsigned int typeCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extensionName;
- (BOOL)hasExtensionName;
- (BOOL)hasTypeCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setExtensionName:(id)arg1;
- (void)setHasTypeCode:(BOOL)arg1;
- (void)setTypeCode:(unsigned int)arg1;
- (unsigned int)typeCode;
- (void)writeTo:(id)arg1;

@end
