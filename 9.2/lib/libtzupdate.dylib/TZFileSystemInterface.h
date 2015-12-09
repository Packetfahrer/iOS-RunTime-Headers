/* Generated by RuntimeBrowser
   Image: /usr/lib/libtzupdate.dylib
 */

@interface TZFileSystemInterface : NSObject {
    NSURL * _ICUDestinationDirectoryURL;
    NSURL * _ICUDestinationFileURL;
    NSURL * _cachedTZDataLocation;
    TZVersionInfo * _currentVersionInfo;
    NSURL * _dataExpansionVersionDirectory;
    TZVersionInfo * _lastInstalledVersionInfo;
    NSURL * _latestLinkDestinationAtStartup;
    NSURL * _latestTZDataLink;
    TZVersionInfo * _latestVersionInfo;
    NSString * _systemICUChecksum;
    NSURL * _systemICUDataFileURL;
    TZVersionInfo * _systemVersionInfo;
    NSURL * _temporaryDirectory;
    NSURL * _zoneinfoDestinationURL;
}

@property (retain) NSURL *ICUDestinationDirectoryURL;
@property (retain) NSURL *ICUDestinationFileURL;
@property (retain) NSURL *cachedTZDataLocation;
@property (readonly) TZVersionInfo *currentVersionInfo;
@property (readonly) NSURL *currentZoneinfoLinkURL;
@property (readonly) NSURL *dataExpansionParentURL;
@property (retain) NSURL *dataExpansionVersionDirectory;
@property (readonly) TZVersionInfo *lastInstalledVersionInfo;
@property (readonly) NSURL *latestLinkDestinationAtStartup;
@property (retain) NSURL *latestTZDataLink;
@property (readonly) NSURL *latestTZLinkURL;
@property (readonly) TZVersionInfo *latestVersionInfo;
@property (readonly) NSString *systemICUChecksum;
@property (readonly) NSURL *systemICUDataFileURL;
@property (readonly) NSURL *systemICUDirectoryURL;
@property (readonly) TZVersionInfo *systemVersionInfo;
@property (readonly) NSURL *systemZoneinfoDirectoryURL;
@property (retain) NSURL *temporaryDirectory;
@property (retain) NSURL *zoneinfoDestinationURL;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)ICUDestinationDirectoryURL;
- (id)ICUDestinationFileURL;
- (void)cacheTZLatestDestination;
- (id)cachedTZDataLocation;
- (BOOL)createExpansionDirectoryWithVersionString:(id)arg1 withError:(id*)arg2;
- (BOOL)createLatestLinkWithDestination:(id)arg1 error:(id*)arg2;
- (id)createTemporaryExpansionDirectoryPathWithError:(id*)arg1;
- (id)currentVersionInfo;
- (id)currentZoneinfoLinkURL;
- (id)dataExpansionParentURL;
- (id)dataExpansionVersionDirectory;
- (id)init;
- (id)lastInstalledVersionInfo;
- (id)latestLinkDestinationAtStartup;
- (id)latestTZDataLink;
- (id)latestTZLinkURL;
- (id)latestVersionInfo;
- (id)obtainDestinationOfLinkAtURL:(id)arg1;
- (void)resetTemporaryDirectory;
- (void)setCachedTZDataLocation:(id)arg1;
- (void)setDataExpansionVersionDirectory:(id)arg1;
- (void)setICUDestinationDirectoryURL:(id)arg1;
- (void)setICUDestinationFileURL:(id)arg1;
- (void)setLatestTZDataLink:(id)arg1;
- (void)setTemporaryDirectory:(id)arg1;
- (void)setZoneinfoDestinationURL:(id)arg1;
- (id)systemICUChecksum;
- (id)systemICUDataFileURL;
- (id)systemICUDirectoryURL;
- (id)systemVersionInfo;
- (id)systemZoneinfoDirectoryURL;
- (id)temporaryDirectory;
- (id)zoneinfoDestinationURL;

@end
