/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAsset : PHObject <PUDisplayAsset, _PLImageLoadingAsset> {
    NSDate * _adjustmentTimestamp;
    int  _avalanchePickType;
    NSString * _burstIdentifier;
    NSString * _cloudIdentifier;
    BOOL  _cloudIsDeletable;
    int  _cloudPlaceholderKind;
    BOOL  _complete;
    NSDate * _creationDate;
    NSString * _directory;
    double  _duration;
    int  _exifOrientation;
    NSArray * _faceRegions;
    BOOL  _favorite;
    NSString * _filename;
    BOOL  _hasAdjustments;
    BOOL  _hidden;
    BOOL  _isPhotoIris;
    NSData * _locationData;
    unsigned int  _mediaSubtypes;
    int  _mediaType;
    NSDate * _modificationDate;
    unsigned int  _persistenceState;
    unsigned int  _pixelHeight;
    unsigned int  _pixelWidth;
    short  _savedAssetType;
    unsigned int  _thumbnailIndex;
    NSDate * _trashedDate;
    NSString * _uniformTypeIdentifier;
    long long  _videoCpDurationValue;
    unsigned short  _videoCpVisibilityState;
}

@property (nonatomic, readonly) NSURL *ALAssetURL;
@property (nonatomic, readonly) NSDate *adjustmentTimestamp;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) int assetSource;
@property (nonatomic, readonly) int avalanchePickType;
@property (nonatomic, readonly) NSString *burstIdentifier;
@property (nonatomic, readonly) unsigned int burstSelectionTypes;
@property (nonatomic, readonly) BOOL canPlayPhotoIris;
@property (nonatomic, readonly, copy) NSString *cloudIdentifier;
@property (nonatomic, readonly) BOOL cloudIsDeletable;
@property (nonatomic, readonly) int cloudPlaceholderKind;
@property (nonatomic, readonly) BOOL complete;
@property (nonatomic, readonly) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *directory;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) NSArray *faceRegions;
@property (getter=isFavorite, nonatomic, readonly) BOOL favorite;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) unsigned int fullsizeDataFormat;
@property (nonatomic, readonly) BOOL hasAdjustments;
@property (nonatomic, readonly) BOOL hasPhotoColorAdjustments;
@property (readonly) unsigned int hash;
@property (getter=isHidden, nonatomic, readonly) BOOL hidden;
@property (nonatomic, readonly) int imageOrientation;
@property (nonatomic, readonly) BOOL isHDVideo;
@property (nonatomic, readonly) BOOL isJPEG;
@property (nonatomic, readonly) BOOL isPartOfBurst;
@property (nonatomic, readonly) BOOL isPhotoIris;
@property (nonatomic, readonly) BOOL isPhotoIrisPlaceholder;
@property (nonatomic, readonly) BOOL isRAW;
@property (nonatomic, readonly) BOOL isTemporaryPlaceholder;
@property (nonatomic, readonly) NSString *localizedGeoDescription;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) NSData *locationData;
@property (nonatomic, readonly) unsigned int mediaSubtypes;
@property (nonatomic, readonly) unsigned int mediaType;
@property (nonatomic, readonly) int mediaType;
@property (nonatomic, readonly) NSString *metadataDebugDescription;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) unsigned int persistenceState;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisStillDisplayTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoIrisVideoDuration;
@property (nonatomic, readonly) unsigned int pixelHeight;
@property (nonatomic, readonly) unsigned int pixelWidth;
@property (nonatomic, readonly) BOOL representsBurst;
@property (nonatomic, readonly) short savedAssetType;
@property (nonatomic, readonly) unsigned int sourceType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int thumbnailIndex;
@property (getter=isTrashed, nonatomic, readonly) BOOL trashed;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) long long videoCpDurationValue;
@property (nonatomic, readonly) unsigned short videoCpVisibilityState;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (void)_computeFingerPrintsOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)_fetchAssetsMatchingAdjustedFingerPrint:(id)arg1;
+ (id)_fetchAssetsMatchingMasterFingerPrint:(id)arg1;
+ (BOOL)_isLivePhotoWithPhotoIris:(BOOL)arg1 hasAdjustments:(BOOL)arg2 videoCpDuration:(long long)arg3 videoCPVisibility:(unsigned short)arg4 sourceType:(unsigned int)arg5;
+ (BOOL)_isPhotoIrisPlaceholderWithPhotoIris:(BOOL)arg1 videoCpDuration:(long long)arg2 sourceType:(unsigned int)arg3;
+ (id)_transformMediaSubtypeComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithALAssetURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithBurstIdentifier:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetsWithMediaType:(int)arg1 options:(id)arg2;
+ (id)fetchAssetsWithOptions:(id)arg1;
+ (id)fetchKeyAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsBursts;
+ (BOOL)managedObjectSupportsHiddenState;
+ (BOOL)managedObjectSupportsSavedAssetType;
+ (BOOL)managedObjectSupportsTrashedState;
+ (BOOL)managedObjectSupportsVisibilityState;
+ (id)pl_managedAssetsForAssets:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)ALAssetURL;
- (id)PTPProperties;
- (id)__dictionaryWithContentsOfData:(id)arg1;
- (id)_createCommentPropertyObject;
- (id)_createPropertyObjectOfClass:(Class)arg1 properties:(id)arg2 isExtraObject:(BOOL)arg3;
- (id)_fileURLForMetadataWithExtension:(id)arg1;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(id /* block */)arg4;
- (id)adjustmentTimestamp;
- (id)adjustmentsDebugMetadata;
- (double)aspectRatio;
- (int)assetSource;
- (id)assetsLibraryURL;
- (int)avalanchePickType;
- (id)burstIdentifier;
- (unsigned int)burstSelectionTypes;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canPerformSharingAction;
- (BOOL)canPlayPhotoIris;
- (void)cancelContentEditingInputRequest:(unsigned int)arg1;
- (Class)changeRequestClass;
- (id)cloudIdentifier;
- (BOOL)cloudIsDeletable;
- (int)cloudPlaceholderKind;
- (int)cloudSharedAssetPlaceholderKind;
- (id)commentProperties;
- (BOOL)complete;
- (id)creationDate;
- (id)debugFilename;
- (id)description;
- (id)descriptionProperties;
- (id)detailedDebugDescriptionInLibrary:(id)arg1;
- (id)directory;
- (id)duplicateProperties;
- (double)duration;
- (unsigned int)effectiveThumbnailIndex;
- (id)embeddedThumbnailProperties;
- (int)exifOrientation;
- (id)faceRegions;
- (void)fetchKeywordsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchPropertySetsIfNeeded;
- (id)fileURLForAdjustedFullsizeImage;
- (id)fileURLForAdjustmentsDirectory;
- (id)fileURLForDiagnosticFile;
- (id)fileURLForFullsizeImage;
- (id)fileURLForFullsizeRenderImage;
- (id)fileURLForFullsizeRenderVideo;
- (id)fileURLForLargePreview;
- (id)fileURLForMediumPreview;
- (id)fileURLForMutationsDirectory;
- (id)fileURLForPenultimateFullsizeRenderImage;
- (id)fileURLForPrebakedLandscapeScrubberThumbnails;
- (id)fileURLForPrebakedPortraitScrubberThumbnails;
- (id)fileURLForSubstandardFullsizeRenderImage;
- (id)fileURLForUnadjustedFullsizeImage;
- (id)fileURLForVideoComplementFile;
- (id)fileURLForVideoPreviewFile;
- (id)fileURLForXMPFile;
- (id)filename;
- (BOOL)hasAdjustments;
- (BOOL)hasLegacyAdjustments;
- (BOOL)hasPhotoColorAdjustments;
- (int)imageOrientation;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (id)internalProperties;
- (BOOL)isAudio;
- (BOOL)isCloudPhotoLibraryAsset;
- (BOOL)isCloudPlaceholder;
- (BOOL)isCloudSharedAsset;
- (BOOL)isFavorite;
- (BOOL)isHDVideo;
- (BOOL)isHidden;
- (BOOL)isInFlight;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isIncludedInMoments;
- (BOOL)isJPEG;
- (BOOL)isLocatedAtCoordinates:(struct { double x1; double x2; })arg1;
- (BOOL)isMediaSubtype:(unsigned int)arg1;
- (BOOL)isMogul;
- (BOOL)isPartOfBurst;
- (BOOL)isPhoto;
- (BOOL)isPhotoIris;
- (BOOL)isPhotoIrisPlaceholder;
- (BOOL)isPhotoStreamPhoto;
- (BOOL)isRAW;
- (BOOL)isStreamedVideo;
- (BOOL)isTimelapsePlaceholder;
- (BOOL)isTrashed;
- (BOOL)isVideo;
- (short)kind;
- (short)kindSubtype;
- (id)location;
- (id)locationData;
- (id)mainFileURL;
- (id)managedAssetForPhotoLibrary:(id)arg1;
- (unsigned int)mediaSubtypes;
- (int)mediaType;
- (id)metadataDebugDescription;
- (id)modificationDate;
- (id)momentProperties;
- (int)orientation;
- (int)originalImageOrientation;
- (id)originalMetadataProperties;
- (id)pathForAdjustmentDataFile;
- (id)pathForAdjustmentDirectory;
- (id)pathForAdjustmentFile;
- (id)pathForMutationsDirectory;
- (id)pathForOriginalFile;
- (id)pathForPenultimateFullsizeRenderImageFile;
- (id)pathForSubstandardFullsizeRenderImageFile;
- (unsigned int)persistenceState;
- (id)photoIrisProperties;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (id)pl_managedAsset;
- (id)pl_photoLibrary;
- (BOOL)representsBurst;
- (unsigned int)requestContentEditingInputWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)reservedFileURLForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int*)arg3;
- (id)reservedPathForLargeDisplayableImageFileForceLarge:(BOOL)arg1 forceUpgradeFromSubstandardIfNecessary:(BOOL)arg2 outImageType:(int*)arg3;
- (short)savedAssetType;
- (unsigned int)sourceType;
- (id)thumbnailIdentifier;
- (unsigned int)thumbnailIndex;
- (id)trashedDate;
- (id)uniformTypeIdentifier;
- (long long)videoCpDurationValue;
- (unsigned short)videoCpVisibilityState;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (int)_pu_mediaTypeForAssets:(id)arg1;
+ (id)pu_typeStringForAssets:(id)arg1;
+ (id)pu_typeStringForAssetsWithIdentifiers:(id)arg1;

- (unsigned int)fullsizeDataFormat;
- (unsigned int)isContentEqualTo:(id)arg1;
- (BOOL)isTemporaryPlaceholder;
- (id)localizedGeoDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

- (id)avAsset;
- (unsigned long)fullFilesizeBytes;
- (struct CGSize { float x1; float x2; })fullSize;
- (id)getVideoAdjustmentPath;
- (BOOL)hasFull;
- (BOOL)hasIris;
- (BOOL)isPano;
- (BOOL)isVideoSlowmo;
- (unsigned long)localFilesizeBytes;
- (struct CGSize { float x1; float x2; })localSize;
- (BOOL)original;
- (struct CGSize { float x1; float x2; })originalSize;
- (struct CGSize { float x1; float x2; })sizeForFormat:(int)arg1;
- (struct CGSize { float x1; float x2; })thumbnailSize;

@end
