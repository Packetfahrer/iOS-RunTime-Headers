/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRFieldPkgItem : PBCodable <NSCopying> {
    struct { 
        unsigned int mtime : 1; 
        unsigned int isExecutable : 1; 
        unsigned int isWritable : 1; 
    }  _has;
    BOOL  _isExecutable;
    BOOL  _isWritable;
    long long  _mtime;
    NSString * _path;
    NSData * _quarantineInfo;
    NSData * _signature;
    NSString * _symlinkContent;
    int  _type;
}

@property (nonatomic) BOOL hasIsExecutable;
@property (nonatomic) BOOL hasIsWritable;
@property (nonatomic) BOOL hasMtime;
@property (nonatomic, readonly) BOOL hasPath;
@property (nonatomic, readonly) BOOL hasQuarantineInfo;
@property (nonatomic, readonly) BOOL hasSignature;
@property (nonatomic, readonly) BOOL hasSymlinkContent;
@property (nonatomic) BOOL isExecutable;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) long long mtime;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSData *quarantineInfo;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic, retain) NSString *symlinkContent;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (void)clear;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsExecutable;
- (BOOL)hasIsWritable;
- (BOOL)hasMtime;
- (BOOL)hasPath;
- (BOOL)hasQuarantineInfo;
- (BOOL)hasSignature;
- (BOOL)hasSymlinkContent;
- (unsigned int)hash;
- (id)initWithPkgItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExecutable;
- (BOOL)isWritable;
- (void)mergeFrom:(id)arg1;
- (long long)mtime;
- (id)path;
- (id)quarantineInfo;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsExecutable:(BOOL)arg1;
- (void)setHasIsWritable:(BOOL)arg1;
- (void)setHasMtime:(BOOL)arg1;
- (void)setIsExecutable:(BOOL)arg1;
- (void)setIsWritable:(BOOL)arg1;
- (void)setMtime:(long long)arg1;
- (void)setPath:(id)arg1;
- (void)setQuarantineInfo:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSymlinkContent:(id)arg1;
- (void)setType:(int)arg1;
- (id)signature;
- (id)symlinkContent;
- (int)type;
- (void)updateWithPkgItem:(id)arg1;
- (void)writeTo:(id)arg1;

@end
