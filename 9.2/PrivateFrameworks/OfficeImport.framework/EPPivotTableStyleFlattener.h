/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EPPivotTableStyleFlattener : EPStyleFlattener {
    unsigned int  mColumnFieldsCount;
    long  mFirstDataColumn;
    long  mFirstDataRow;
    long  mFirstHeaderRow;
    unsigned int  mPageFieldsCount;
    EDPivotTable * mPivotTable;
    unsigned int  mRowFieldsCount;
}

- (void)addColumnSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addRowSubheadingLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addSubtotalColumnLevel:(unsigned int)arg1 to:(id)arg2;
- (void)addSubtotalRowLevel:(unsigned int)arg1 to:(id)arg2;
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;
- (void)clearCache;
- (id)collectionFromWorksheet:(id)arg1;
- (unsigned int)constrainLevel:(unsigned int)arg1;
- (bool)isObjectSupported:(id)arg1;
- (id)keysInTheOrderTheyShouldBeApplied;
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;
- (int)stripeOffset:(int)arg1 row:(bool)arg2;
- (id)styleFromObject:(id)arg1;

@end
