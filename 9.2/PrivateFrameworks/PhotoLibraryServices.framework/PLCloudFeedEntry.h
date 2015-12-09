/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudFeedEntry : PLManagedObject

@property (nonatomic, readonly) NSURL *URIRepresentation;
@property (nonatomic, retain) NSString *entryAlbumGUID;
@property (nonatomic, retain) NSDate *entryDate;
@property (nonatomic, retain) NSString *entryInvitationRecordGUID;
@property (nonatomic, readonly) int entryPriority;
@property (nonatomic, retain) NSNumber *entryPriorityNumber;
@property (nonatomic, readonly) int entryType;
@property (nonatomic, retain) NSNumber *entryTypeNumber;

+ (id)allEntriesInLibrary:(id)arg1;
+ (id)allEntriesInManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)entriesSortDescriptorsAscending:(BOOL)arg1;
+ (id)entryWithURIRepresentation:(id)arg1 inLibrary:(id)arg2;
+ (id)firstEntryWithType:(int)arg1 albumGUID:(id)arg2 inLibrary:(id)arg3;
+ (id)recentAssetsEntriesInLibrary:(id)arg1 limit:(int)arg2;
+ (id)recentEntriesInLibrary:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 limit:(int)arg4;

- (id)URIRepresentation;
- (int)entryPriority;
- (int)entryType;
- (BOOL)shouldBeRemovedFromPhotoLibrary:(id)arg1;

@end
