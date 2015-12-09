/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactCustomDataSource : NSObject <CNContactChangesObserver, CNContactDataSource> {
    NSMutableArray * _allContacts;
    BOOL  _autoUpdateContacts;
    CNContactFilter * _filter;
    NSArray * _filteredContacts;
    NSMapTable * _identifiersToIndexes;
    NSArray * _keysToFetch;
    BOOL  _observingContacts;
    <CNContactDataSourceDelegate> * delegate;
}

@property (nonatomic, retain) NSMutableArray *allContacts;
@property (nonatomic) BOOL autoUpdateContacts;
@property (nonatomic, readonly) BOOL canReload;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) NSDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (nonatomic, copy) CNContactFilter *filter;
@property (nonatomic, retain) NSArray *filteredContacts;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMapTable *identifiersToIndexes;
@property (nonatomic, readonly) NSArray *indexSections;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic, readonly) CNContact *meContact;
@property (nonatomic, readonly) NSString *meContactIdentifier;
@property (nonatomic) BOOL observingContacts;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (nonatomic, readonly) CNContactStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendDataSourceDidChange;
- (void)_startObservingContacts;
- (void)_stopObservingContacts;
- (void)_updateContactsObserving;
- (void)_updateFilter;
- (id)allContacts;
- (BOOL)autoUpdateContacts;
- (BOOL)canReload;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3;
- (void)contactDidChange:(id)arg1;
- (id)contactMatchInfos;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)effectiveFilter;
- (id)filter;
- (id)filteredContacts;
- (id)identifiersToIndexes;
- (id)indexPathForContact:(id)arg1;
- (id)indexSections;
- (id)initWithContacts:(id)arg1;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 filter:(id)arg3;
- (id)keysToFetch;
- (id)meContactIdentifier;
- (BOOL)observingContacts;
- (id)sections;
- (void)setAllContacts:(id)arg1;
- (void)setAutoUpdateContacts:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilteredContacts:(id)arg1;
- (void)setIdentifiersToIndexes:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setObservingContacts:(BOOL)arg1;

@end
