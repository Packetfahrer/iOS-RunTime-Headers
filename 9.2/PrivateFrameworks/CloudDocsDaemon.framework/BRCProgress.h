/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCProgress : NSProgress {
    BOOL  _isPublished;
    NSMutableDictionary * _progressByAliasContainerID;
}

+ (id)downloadProgressWithBRCDocumentItem:(id)arg1;
+ (id)progressWithBRCDocumentItem:(id)arg1 totalSize:(long long)arg2 kind:(id)arg3;
+ (id)uploadProgressWithBRCDocumentItem:(id)arg1 transferSize:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)addAliasItem:(id)arg1;
- (void)brc_publish;
- (void)brc_unpublish;
- (void)setCompletedUnitCount:(long long)arg1;

@end
