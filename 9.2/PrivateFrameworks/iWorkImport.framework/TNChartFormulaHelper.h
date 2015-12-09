/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TNChartFormulaHelper : NSObject {
    TNChartMediator * mChartMediator;
    BOOL  mCreateSpanningReferences;
}

@property (nonatomic, readonly) TNChartMediator *chartMediator;
@property (nonatomic) BOOL createSpanningReferences;

- (id)chartFormulaByAppendingRangeReference:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1 toFormula:(id)arg2 andLocale:(id)arg3;
- (id)chartMediator;
- (BOOL)createSpanningReferences;
- (void)dealloc;
- (id)formulaStorageForChartGridDirection:(int)arg1;
- (id)initWithMediator:(id)arg1;
- (id)initWithMediator:(id)arg1 createSpanningReferences:(BOOL)arg2;
- (void)p_addFormulasOfType:(unsigned int)arg1 rangeList:(id)arg2 byRow:(BOOL)arg3 toFormulaMap:(id)arg4;
- (void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 rowLabels:(id)arg4 columnLabels:(id)arg5 toFormulaMap:(id)arg6;
- (void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 toFormulaMap:(id)arg4;
- (void)p_addSeriesForTableModel:(id)arg1 seriesRange:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg2 rowLabelRange:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg3 columnLabelRange:(struct TSCERangeCoordinate { struct { unsigned short x_1_1_1; unsigned char x_1_1_2; unsigned char x_1_1_3; } x1; struct { unsigned short x_2_1_1; unsigned char x_2_1_2; unsigned char x_2_1_3; } x2; })arg4 toFormulaMap:(id)arg5;
- (void)p_addStringFormulasOfType:(unsigned int)arg1 rangeList:(id)arg2 byRow:(BOOL)arg3 labels:(id)arg4 toFormulaMap:(id)arg5;
- (BOOL)p_extendExistingSeriesWithSeriesRangeList:(id*)arg1 rowLabelRangeList:(id*)arg2 columnLabelRangeList:(id*)arg3 toFormulaMap:(id)arg4 withLocale:(id)arg5;
- (id)p_formulaForExistingSeriesInTable:(struct __CFUUID { }*)arg1 withRowOrColumnIndex:(unsigned short)arg2 inFormulaMap:(id)arg3 argumentCollectionMap:(id)arg4;
- (BOOL)p_hasOneValuePerSeries;
- (id)p_labelsOfType:(unsigned int)arg1 formulaMap:(id)arg2;
- (id)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(BOOL)arg3 resolveSpanning:(BOOL)arg4;
- (void)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(BOOL)arg3 resolveSpanning:(BOOL)arg4 orderedListOfOwnerIDs:(id)arg5 ownerIDToRangeList:(id)arg6;
- (id)p_rangeListsForFormulas:(id)arg1 byRow:(BOOL)arg2 resolveSpanning:(BOOL)arg3;
- (void)setCreateSpanningReferences:(BOOL)arg1;

@end
