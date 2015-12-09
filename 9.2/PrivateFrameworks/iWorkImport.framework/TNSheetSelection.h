/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNSheetSelection : TSKSelection {
    BOOL  mIsPaginated;
    TNSheet * mSheet;
}

@property (getter=isPaginated, nonatomic, readonly) BOOL paginated;
@property (nonatomic, readonly, retain) TNSheet *sheet;

+ (Class)archivedSelectionClass;
+ (id)selectionForSheet:(id)arg1 paginated:(BOOL)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithSheet:(id)arg1 paginated:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaginated;
- (id)sheet;

@end
