/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECAsset : NSObject {
    NSString * _abGroupIdentifier;
    _DECABHelper * _abHelper;
    int  _abHelperMode;
    unsigned char  _deviceIndex;
    NSString * _fileName;
    int  _notificationToken;
    id /* block */  _onUpdate;
    NSString * _resourcePath;
}

+ (id)assetFromPlistWithClass:(Class)arg1 onUpdate:(id /* block */)arg2;
+ (int)assetVersion;
+ (id)bundlePath;
+ (void)initialize;
+ (void)updateAssetMetadata;

- (void).cxx_destruct;
- (id)abHelper;
- (id)contentsAsDictionary;
- (void)dealloc;
- (id)init;
- (id)initWithBundlePath:(id)arg1 fileName:(id)arg2 fileType:(id)arg3 onUpdate:(id /* block */)arg4 abHelperMode:(int)arg5 deviceIndex:(unsigned char)arg6;
- (id)initWithFileName:(id)arg1 fileExtension:(id)arg2 onUpdate:(id /* block */)arg3;
- (id)path;
- (void)setUpdateBlock:(id /* block */)arg1;

@end
