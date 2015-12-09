/* Generated by RuntimeBrowser.
 */

@protocol TSPUnarchiverDelegate <NSObject>

@required

- (NSUUID *)UUIDForObjectIdentifier:(long long)arg1;
- (TSPData *)dataForIdentifier:(long long)arg1;
- (BOOL)didFinishResolvingReferences;
- (unsigned long long)fileFormatVersion;
- (BOOL)hasDocumentVersionUUID;
- (long long)objectIdentifierForUUID:(NSUUID *)arg1;
- (void)unarchiver:(TSPUnarchiver *)arg1 didReadLazyReference:(TSPLazyReference *)arg2 isExternal:(BOOL*)arg3;

@optional

- (BOOL)isCrossAppPaste;
- (BOOL)isCrossDocumentPaste;
- (BOOL)isFromCopy;

@end
