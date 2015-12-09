/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackage : PBCodable <NSCopying> {
    CKDPAsset * _manifest;
    NSMutableArray * _sections;
}

@property (nonatomic, readonly) BOOL hasManifest;
@property (nonatomic, retain) CKDPAsset *manifest;
@property (nonatomic, retain) NSMutableArray *sections;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasManifest;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)manifest;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sections;
- (id)sectionsAtIndex:(unsigned int)arg1;
- (unsigned int)sectionsCount;
- (void)setManifest:(id)arg1;
- (void)setSections:(id)arg1;
- (void)writeTo:(id)arg1;

@end
