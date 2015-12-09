/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICFolder : ICNoteContainer <ICCloudObject>

@property (nonatomic, retain) ICAccount *account;
@property (nonatomic, retain) NSSet *children;
@property (nonatomic, retain) NSDate *dateForLastTitleModification;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) short folderType;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL importedFromLegacy;
@property (nonatomic, readonly) BOOL isDefaultFolderForAccount;
@property (nonatomic, retain) NSSet *noteChanges;
@property (nonatomic, retain) NSSet *notes;
@property (nonatomic, retain) ICFolder *parent;
@property (nonatomic, retain) NSDate *parentModificationDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;

+ (id)allCloudObjects;
+ (id)allFoldersInContext:(id)arg1;
+ (unsigned int)countOfFoldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)deduplicatingTitle:(id)arg1 forFolder:(id)arg2 ofAccount:(id)arg3;
+ (void)deleteFolder:(id)arg1;
+ (id)englishTitleForDefaultFolder;
+ (id)englishTitleForTrashFolder;
+ (id)existingCloudObjectForRecordID:(id)arg1;
+ (id)folderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)folderWithIdentifierCreatingIfNecessary:(id)arg1 context:(id)arg2;
+ (id)foldersMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)keyPathsForValuesAffectingIsLeaf;
+ (id)keyPathsForValuesAffectingTitleForTableViewCell;
+ (id)keyPathsForValuesAffectingVisibleNoteContainerChildren;
+ (id)localizedNewFolderName;
+ (id)localizedTitleForDefaultFolder;
+ (id)localizedTitleForTrashFolder;
+ (id)newCloudObjectForRecord:(id)arg1;
+ (id)newFolderInContext:(id)arg1;
+ (id)newFolderWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)predicateForVisibleFolders;
+ (id)predicateForVisibleFoldersIncludingHiddenNoteContainers:(BOOL)arg1;
+ (void)purgeFolder:(id)arg1;
+ (id)recordType;
+ (id)reservedFolderTitles;
+ (id)stringByScrubbingStringForFolderName:(id)arg1;
+ (id)visibleFoldersInContext:(id)arg1;

- (id)accountName;
- (void)awakeFromFetch;
- (int)compare:(id)arg1;
- (unsigned int)countOfVisibleNotesInFolder;
- (void)deleteFromLocalDatabase;
- (void)fixBrokenReferences;
- (BOOL)hasAllMandatoryFields;
- (BOOL)isAncestorOfFolder:(id)arg1;
- (BOOL)isDefaultFolderForAccount;
- (BOOL)isDefaultFolderOrDescendantOfDefaultFolder;
- (BOOL)isDeletable;
- (BOOL)isEditable;
- (BOOL)isInICloudAccount;
- (BOOL)isLeaf;
- (BOOL)isMovable;
- (BOOL)isRecentlyDeletedFolder;
- (BOOL)isTitleValid:(id)arg1 error:(out id*)arg2;
- (id)localizedTitle;
- (id)loggingDescriptionValues;
- (void)markForDeletion;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeParentFromRecord:(id)arg1;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentFolder;
- (id)predicateForAttachmentsInFolder;
- (id)predicateForNotesInFolder;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleAttachments;
- (id)predicateForVisibleAttachmentsInFolder;
- (id)predicateForVisibleNotes;
- (id)predicateForVisibleNotesInFolder;
- (void)prepareForDeletion;
- (id)recordZoneID;
- (void)regenerateNestedTitleForSorting;
- (void)resetUniqueIdentifier;
- (void)setAccount:(id)arg1;
- (void)setMarkedForDeletion:(BOOL)arg1;
- (void)setNeedsInitialFetchFromCloud:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)shouldTrackChanges;
- (BOOL)supportsEditingNotes;
- (id)threadUnsafeNewlyCreatedRecord;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (void)unmarkForDeletionIncludingParentHierarchy;
- (void)updateSortOrder;
- (BOOL)validateTitle:(inout id*)arg1 error:(out id*)arg2;
- (BOOL)visibleChildFoldersContainsFolderWithTitle:(id)arg1;
- (id)visibleNoteContainerChildren;
- (id)visibleNotes;
- (unsigned int)visibleNotesCount;
- (id)visibleNotesInFolder;
- (id)visibleNotesIncludingChildFolders;

@end
