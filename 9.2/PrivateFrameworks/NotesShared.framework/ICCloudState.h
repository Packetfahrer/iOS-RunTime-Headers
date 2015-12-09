/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudState : NSManagedObject

@property (nonatomic, retain) ICCloudSyncingObject *cloudSyncingObject;
@property (nonatomic) long long currentLocalVersion;
@property (nonatomic) BOOL inCloud;
@property (nonatomic) long long latestVersionSyncedToCloud;
@property (nonatomic, retain) NSDate *localVersionDate;

- (BOOL)isInCloud;

@end
