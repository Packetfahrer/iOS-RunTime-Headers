/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCRelativePath : NSObject <NSSecureCoding> {
    NSString * _absolutePath;
    BRCRelativePath * _basePath;
    struct timespec { 
        int tv_sec; 
        long tv_nsec; 
    }  _birthtime;
    BRCBookmark * _bookmark;
    NSDirectoryEnumerator * _descendantsEnumerator;
    int  _deviceID;
    struct { int x1; long x2; long x3; char *x4; int x5; long x6; long x7; int x8; struct _opaque_pthread_mutex_t { long x_9_1_1; BOOL x_9_1_2[40]; } x9; struct _telldir {} *x10; } * _dir;
    unsigned int  _documentID;
    int  _fd;
    unsigned long long  _fileID;
    unsigned char  _finderInfo;
    unsigned int  _flags;
    unsigned int  _fsGenerationID;
    BRCGenerationID * _generationID;
    unsigned int  _hasFinderTags;
    unsigned int  _isAlias;
    unsigned int  _isBundle;
    unsigned int  _isBusy;
    unsigned int  _isExcluded;
    unsigned int  _isInPackage;
    unsigned int  _isPackageRoot;
    unsigned char  _itemScope;
    unsigned short  _mode;
    struct timespec { 
        int tv_sec; 
        long tv_nsec; 
    }  _mtime;
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    }  _mutex;
    unsigned int  _nlink;
    int  _openRefCount;
    unsigned long long  _parentFileID;
    unsigned int  _qtnResolved;
    NSData * _quarantineInfo;
    unsigned int  _readFault;
    NSString * _relativePath;
    BRCServerZone * _serverZone;
    BRCAccountSession * _session;
    BRCItemID * _sharedItemID;
    NSString * _sharedOwnerName;
    long long  _size;
    NSString * _symlinkContent;
    unsigned short  _type;
}

@property (nonatomic, readonly) NSString *absolutePath;
@property (nonatomic, readonly) long birthTime;
@property (nonatomic, readonly) BRCBookmark *bookmark;
@property (nonatomic, readonly) BRCLocalContainer *container;
@property (nonatomic, readonly) int deviceID;
@property (nonatomic, readonly) unsigned int documentID;
@property (nonatomic, readonly) BOOL exists;
@property (nonatomic, readonly) NSString *faultDisplayName;
@property (nonatomic, readonly) unsigned long long fileID;
@property (nonatomic, readonly) NSNumber *fileObjectID;
@property (nonatomic, readonly) unsigned long fileType;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned int fsGenerationID;
@property (nonatomic, readonly) BRCGenerationID *generationID;
@property (nonatomic, readonly) unsigned int hardlinkCount;
@property (nonatomic, readonly) BOOL hasFinderTags;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isAlias;
@property (nonatomic, readonly) BOOL isBundle;
@property (nonatomic, readonly) BOOL isBusy;
@property (nonatomic, readonly) BOOL isDocument;
@property (nonatomic, readonly) BOOL isExcluded;
@property (nonatomic, readonly) BOOL isExecutable;
@property (nonatomic, readonly) BOOL isFault;
@property (nonatomic, readonly) BOOL isFile;
@property (nonatomic, readonly) BOOL isHiddenExtension;
@property (nonatomic, readonly) BOOL isHiddenFile;
@property (nonatomic, readonly) BOOL isInPackage;
@property (nonatomic, readonly) BOOL isPackageRoot;
@property (nonatomic, readonly) BOOL isRoot;
@property (nonatomic, readonly) BOOL isSymLink;
@property (nonatomic, readonly) BOOL isUnixDir;
@property (nonatomic, readonly) BOOL isWritable;
@property (nonatomic, readonly) unsigned char itemScope;
@property (nonatomic, readonly) NSString *logicalName;
@property (nonatomic, readonly) long modificationTime;
@property (nonatomic, readonly) unsigned long long parentFileID;
@property (readonly) unsigned int parentHash;
@property (nonatomic, readonly) NSString *pathRelativeToPackageRoot;
@property (nonatomic, readonly) NSString *pathRelativeToRoot;
@property (nonatomic, readonly) NSData *quarantineInfo;
@property (nonatomic, readonly) BRCRelativePath *root;
@property (nonatomic, readonly) BRCServerZone *serverZone;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (nonatomic, readonly) BRCItemID *sharedItemID;
@property (nonatomic, readonly) NSString *sharedOwnerName;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) NSString *symlinkContent;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) NSURL *url;

+ (int)locateByFileID:(unsigned long long)arg1 zone:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_close;
- (BOOL)_fixupRelativePath;
- (id)_initWithPath:(id)arg1 relativeToRoot:(id)arg2;
- (BOOL)_resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int*)arg2;
- (int)_resolveBasePath;
- (int)_resolvePathTypeAndContainer;
- (int)_resolveSymlinkRelativeTo:(int)arg1 path:(id)arg2;
- (int)_resolveWhenDoesntExist;
- (int)_resolveWhenExists;
- (BOOL)_shouldKeepBasePathOpen;
- (id)absolutePath;
- (long)birthTime;
- (id)bookmark;
- (void)close;
- (void)closeDirectoryScan;
- (id)container;
- (void)dealloc;
- (id)description;
- (int)deviceID;
- (unsigned int)documentID;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)exists;
- (id)faultDisplayName;
- (unsigned long long)fileID;
- (id)fileObjectID;
- (unsigned long)fileType;
- (id)filename;
- (BOOL)flock:(int)arg1;
- (unsigned int)fsGenerationID;
- (id)generationID;
- (unsigned int)hardlinkCount;
- (BOOL)hasFinderTags;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileID:(unsigned long long)arg1 zone:(id)arg2;
- (id)initWithPath:(id)arg1 zone:(id)arg2;
- (id)initWithRootPath:(id)arg1 session:(id)arg2;
- (BOOL)isAlias;
- (BOOL)isBundle;
- (BOOL)isBusy;
- (BOOL)isDocument;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToRelativePath:(id)arg1;
- (BOOL)isExcluded;
- (BOOL)isExecutable;
- (BOOL)isFault;
- (BOOL)isFile;
- (BOOL)isHiddenExtension;
- (BOOL)isHiddenFile;
- (BOOL)isInPackage;
- (BOOL)isPackageRoot;
- (BOOL)isResolved;
- (BOOL)isRoot;
- (BOOL)isSymLink;
- (BOOL)isUnixDir;
- (BOOL)isWritable;
- (unsigned char)itemScope;
- (id)logicalName;
- (id)logicalURLWithLogicalName:(id)arg1;
- (long)modificationTime;
- (id)nextChild;
- (id)nextDescendant;
- (BOOL)openDirectoryForRecursiveScan;
- (BOOL)openDirectoryForScanWithError:(int*)arg1;
- (unsigned long long)parentFileID;
- (unsigned int)parentHash;
- (id)pathOfPackageRoot;
- (id)pathRelativeToPackageRoot;
- (id)pathRelativeToRoot;
- (id)pathWithChildAtPath:(id)arg1;
- (BOOL)performOnOpenFileDescriptor:(id /* block */)arg1 error:(int*)arg2;
- (BOOL)performOnOpenParentFileDescriptor:(id /* block */)arg1 error:(int*)arg2;
- (id)quarantineInfo;
- (id)refreshFromPathMustExist:(BOOL)arg1;
- (BOOL)resolveAndKeepOpenMustExist:(BOOL)arg1 error:(int*)arg2;
- (BOOL)resolveMustExist:(BOOL)arg1 error:(int*)arg2;
- (id)root;
- (id)serverZone;
- (id)session;
- (id)sharedItemID;
- (id)sharedOwnerName;
- (long long)size;
- (id)symlinkContent;
- (unsigned short)type;
- (id)url;

@end
