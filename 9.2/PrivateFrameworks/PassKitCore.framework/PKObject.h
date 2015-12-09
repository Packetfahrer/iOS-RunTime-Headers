/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKObject : NSObject <NSCopying, NSSecureCoding> {
    NSString * _authenticationToken;
    PKContent * _content;
    PKDataAccessor * _dataAccessor;
    PKDisplayProfile * _displayProfile;
    PKImageSet * _imageSets;
    BOOL  _initializedViaInitWithCoder;
    NSData * _manifestHash;
    float  _preferredImageScale;
    NSString * _preferredImageSuffix;
    unsigned int  _settings;
    int  _shareCount;
    NSString * _uniqueID;
    NSURL * _webServiceURL;
}

@property (nonatomic, readonly, retain) NSData *archiveData;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic, retain) PKContent *content;
@property (nonatomic, retain) PKDataAccessor *dataAccessor;
@property (nonatomic, retain) PKDisplayProfile *displayProfile;
@property (nonatomic, readonly) BOOL initializedViaInitWithCoder;
@property (nonatomic, copy) NSData *manifestHash;
@property (nonatomic, readonly, retain) NSDate *modificationDate;
@property (nonatomic) float preferredImageScale;
@property (nonatomic, retain) NSString *preferredImageSuffix;
@property (nonatomic, readonly) BOOL remoteAssetsDownloaded;
@property (nonatomic, readonly, retain) NSData *serializedFileWrapper;
@property (nonatomic) unsigned int settings;
@property (nonatomic) int shareCount;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, copy) NSURL *webServiceURL;

+ (unsigned int)defaultSettings;
+ (BOOL)isValidObjectWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
+ (BOOL)supportsSecureCoding;

- (id)archiveData;
- (id)authenticationToken;
- (id)content;
- (id)contentLoadedIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataAccessor;
- (void)dealloc;
- (id)displayProfile;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (void)flushImageSetOfType:(int)arg1;
- (void)flushLoadedContent;
- (void)flushLoadedImageSets;
- (id)imageSetLoadedIfNeeded:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (id)initWithDataAccessor:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)initWithFileURL:(id)arg1 warnings:(id*)arg2 orError:(id*)arg3;
- (BOOL)initializedViaInitWithCoder;
- (BOOL)isContentLoaded;
- (BOOL)isImageSetLoaded:(int)arg1;
- (BOOL)isImageSetType:(int)arg1 equalToImageSetTypeFromObject:(id)arg2;
- (void)loadContentAsyncWithCompletion:(id /* block */)arg1;
- (void)loadContentSync;
- (void)loadImageSetAsync:(int)arg1 preheat:(BOOL)arg2 withCompletion:(id /* block */)arg3;
- (void)loadImageSetSync:(int)arg1 preheat:(BOOL)arg2;
- (id)localizedString:(id)arg1;
- (id)manifestHash;
- (id)modificationDate;
- (void)noteShared;
- (float)preferredImageScale;
- (id)preferredImageSuffix;
- (void)reloadDisplayProfileOfType:(int)arg1;
- (BOOL)remoteAssetsDownloaded;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (id)serializedFileWrapper;
- (void)setAuthenticationToken:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDataAccessor:(id)arg1;
- (void)setDisplayProfile:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setMissingImageSetsFromObject:(id)arg1;
- (void)setPreferredImageScale:(float)arg1;
- (void)setPreferredImageSuffix:(id)arg1;
- (void)setSettings:(unsigned int)arg1;
- (void)setSettingsWithoutUpdatingDataAccessor:(unsigned int)arg1;
- (void)setShareCount:(int)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setWebServiceURL:(id)arg1;
- (unsigned int)settings;
- (int)shareCount;
- (id)uniqueID;
- (void)updateImageSetCachesAtURL:(id)arg1;
- (id)webServiceURL;

@end
