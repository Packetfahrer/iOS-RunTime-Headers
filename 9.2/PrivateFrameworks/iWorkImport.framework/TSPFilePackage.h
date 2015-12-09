/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFilePackage : TSPPackage {
    NSObject<OS_dispatch_queue> * _bookmarkDataQueue;
    TSUZipArchive * _componentZipArchive;
    TSUTemporaryDirectory * _dataDirectory;
    NSMutableDictionary * _dataURLMap;
}

+ (BOOL)isValidPackageAtURL:(id)arg1;
+ (BOOL)isValidPackageAtZipArchive:(id)arg1;
+ (unsigned int)zipArchiveOptions;
+ (id)zipArchiveURLFromPackageURL:(id)arg1;

- (void).cxx_destruct;
- (id)bookmarkDataForDataStorage:(id)arg1 options:(unsigned int)arg2;
- (BOOL)bookmarkDataNeedsWriteForDataStorage:(id)arg1 options:(unsigned int)arg2;
- (id)componentZipArchive;
- (BOOL)didReloadZipArchive:(id)arg1 error:(id*)arg2;
- (BOOL)hasDataAtRelativePath:(id)arg1;
- (id)initWithPackageIdentifier:(unsigned char)arg1 documentProperties:(id)arg2 fileFormatVersion:(unsigned long long)arg3 decryptionKey:(id)arg4 fileCoordinatorDelegate:(id)arg5 isLazyLoading:(BOOL)arg6;
- (id)newDataStorageAtRelativePath:(id)arg1 decryptionInfo:(id)arg2;
- (id)newDocumentPropertiesWithURL:(id)arg1 zipProvider:(id /* block */)arg2 error:(id*)arg3;
- (id)newRawDataReadChannelAtRelativePath:(id)arg1;
- (int)packageType;
- (void)prepareForDocumentReplacementWithSuccess:(BOOL)arg1 forSafeSave:(BOOL)arg2 originalURL:(id)arg3;

@end
