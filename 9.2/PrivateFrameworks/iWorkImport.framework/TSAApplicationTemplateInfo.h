/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSAApplicationTemplateInfo : TSATemplateInfo <NSCopying> {
    NSString * _documentVariant;
    NSString * _name;
    NSString * _previewVariant;
}

@property (nonatomic, readonly) NSURL *bundledDocumentContainerURL;
@property (nonatomic, readonly) NSURL *documentContainerURL;
@property (nonatomic, readonly) NSString *documentVariant;
@property (nonatomic, readonly) int downloadState;
@property (nonatomic, readonly) NSURL *downloadedDocumentContainerURL;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSBundle *previewBundle;
@property (nonatomic, readonly) NSString *previewVariant;
@property (nonatomic, readonly) NSURL *templateZipURL;

+ (id)bundledDocumentContainerDirectoryURL;
+ (id)documentURLWithDocumentContainerURL:(id)arg1 variant:(id)arg2;
+ (id)downloadedDocumentContainerDirectoryURL;
+ (id)localizationBundleForDocumentContainerURL:(id)arg1;
+ (id)localizationBundleForDocumentURL:(id)arg1;
+ (void)setBundledDocumentContainerDirectoryURL:(id)arg1;
+ (id)templateZipURLForTemplateName:(id)arg1;

- (id)bundledDocumentContainerURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)documentContainerURL;
- (id)documentURL;
- (id)documentURLWithDocumentContainerURL:(id)arg1;
- (id)documentVariant;
- (int)downloadState;
- (id)downloadedDocumentContainerURL;
- (id)initHeadlessWithName:(id)arg1;
- (id)initHeadlessWithName:(id)arg1 variant:(unsigned int)arg2;
- (id)initHeadlessWithName:(id)arg1 variant:(unsigned int)arg2 locale:(struct __CFLocale { }*)arg3;
- (id)initWithDisplayName:(id)arg1 name:(id)arg2 documentVariant:(id)arg3 previewVariant:(id)arg4;
- (id)initWithPropertyList:(id)arg1 documentVariant:(id)arg2 previewVariant:(id)arg3;
- (BOOL)isAvailable;
- (id)localizationBundle;
- (id)makeIdentifier;
- (id)name;
- (id)previewBundle;
- (id)previewImageURL;
- (id)previewVariant;
- (id)templateZipURL;

@end
