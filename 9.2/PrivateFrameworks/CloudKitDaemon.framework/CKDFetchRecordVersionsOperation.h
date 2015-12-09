/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchRecordVersionsOperation : CKDDatabaseOperation {
    NSArray * _desiredKeys;
    NSObject<OS_dispatch_group> * _fetchVersionsGroup;
    BOOL  _isDeleted;
    NSString * _minimumVersionETag;
    NSArray * _recordIDs;
    id /* block */  _recordVersionFetchedBlock;
    BOOL  _shouldFetchAssetContent;
}

@property (nonatomic, retain) NSArray *desiredKeys;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchVersionsGroup;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic, retain) NSString *minimumVersionETag;
@property (nonatomic, retain) NSArray *recordIDs;
@property (nonatomic, copy) id /* block */ recordVersionFetchedBlock;
@property (nonatomic) BOOL shouldFetchAssetContent;

- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleRecordVersionsFecthedForID:(id)arg1 isDeleted:(BOOL)arg2 versions:(id)arg3 responseCode:(id)arg4;
- (unsigned long long)activityStart;
- (id)desiredKeys;
- (id)fetchVersionsGroup;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (BOOL)isDeleted;
- (void)main;
- (id)minimumVersionETag;
- (id)recordIDs;
- (id /* block */)recordVersionFetchedBlock;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchVersionsGroup:(id)arg1;
- (void)setIsDeleted:(BOOL)arg1;
- (void)setMinimumVersionETag:(id)arg1;
- (void)setRecordIDs:(id)arg1;
- (void)setRecordVersionFetchedBlock:(id /* block */)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (BOOL)shouldFetchAssetContent;

@end
