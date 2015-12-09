/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

@interface XBApplicationIdentity : NSObject <NSCopying> {
    NSString * _bundleContainerPath;
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    NSString * _dataContainerPath;
    NSString * _snapshotContainerPath;
}

@property (nonatomic, copy) NSString *bundleContainerPath;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundlePath;
@property (nonatomic, copy) NSString *dataContainerPath;
@property (nonatomic, copy) NSString *snapshotContainerPath;

+ (id)identityForApplicationInfo:(id)arg1;
+ (id)identityForApplicationProxy:(id)arg1;
+ (id)identityForBundleIdentifier:(id)arg1;
+ (id)identityForCompatibilityInfo:(id)arg1;

- (id)bundleContainerPath;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataContainerPath;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setBundleContainerPath:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundlePath:(id)arg1;
- (void)setDataContainerPath:(id)arg1;
- (void)setSnapshotContainerPath:(id)arg1;
- (id)snapshotContainerPath;
- (id)snapshotContainerPathForGroupID:(id)arg1;
- (id)snapshotContainerPathForSnapshot:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
