/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteDataAccessor : PKDataAccessor {
    PKPassLibrary * _library;
    NSString * _objectUniqueID;
}

@property (nonatomic, readonly, retain) PKPassLibrary *library;
@property (nonatomic, readonly, retain) NSString *objectUniqueID;

- (id)archiveData;
- (void)contentWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (id)displayProfileOfType:(int)arg1;
- (void)imageSetForType:(int)arg1 screenScale:(float)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(id /* block */)arg6;
- (id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2;
- (id)library;
- (void)noteShared;
- (id)objectUniqueID;
- (void)requestUpdateWithCompletion:(id /* block */)arg1;
- (void)revocationStatusWithCompletion:(id /* block */)arg1;
- (void)updateSettings:(unsigned int)arg1;

@end
