/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPObjectContextDelegate> {
    NSError * _error;
    BOOL  _ignoreDocumentSupport;
    NSMutableSet * _persistenceWarnings;
}

@property (nonatomic, readonly) BOOL areNewExternalReferencesToDataAllowed;
@property (nonatomic, readonly) NSUUID *baseUUIDForObjectUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) <NSFilePresenter> *filePresenter;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL ignoreDocumentSupport;
@property (nonatomic, readonly) BOOL isDocumentSupportTemporary;
@property (nonatomic, readonly) BOOL isInCollaborationMode;
@property (nonatomic, readonly) BOOL isInReadOnlyMode;
@property (nonatomic, readonly) NSSet *persistenceWarnings;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPersistenceWarnings:(id)arg1;
- (id)error;
- (BOOL)ignoreDocumentSupport;
- (id)init;
- (id)persistenceWarnings;
- (id)persistenceWarningsForData:(id)arg1 flags:(unsigned int)arg2;
- (void)presentPersistenceError:(id)arg1;
- (void)resumeAutosave;
- (void)setIgnoreDocumentSupport:(BOOL)arg1;
- (void)suspendAutosave;

@end
