/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeSidecar : TSPObject <TSTCustomStrokeProviding> {
    NSPointerArray * _bottomRowStrokes;
    NSPointerArray * _leftColumnStrokes;
    int  _maxOrder;
    NSPointerArray * _rightColumnStrokes;
    NSPointerArray * _topRowStrokes;
}

@property (nonatomic, retain) NSPointerArray *bottomRowStrokes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSPointerArray *leftColumnStrokes;
@property (nonatomic) int maxOrder;
@property (nonatomic, retain) NSPointerArray *rightColumnStrokes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSPointerArray *topRowStrokes;

- (id)bottomRowStrokes;
- (id)cellBorderAtCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (void)flattenStrokeOrder;
- (id)initForUpgradeWithTableModel:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)insertColumns:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)insertRows:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)leftColumnStrokes;
- (int)maxOrder;
- (void)moveColumnIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toIndex:(unsigned char)arg2;
- (void)moveRowIndexRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 toIndex:(unsigned short)arg2;
- (id)p_flattenMajorStrokeLayer:(id)arg1 minorStrokeLayer:(id)arg2;
- (void)removeColumns:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)removeRows:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rightColumnStrokes;
- (void)saveToArchiver:(id)arg1;
- (void)setBordersWithCellMap:(id)arg1;
- (void)setBottomRowStrokes:(id)arg1;
- (void)setBottomStroke:(id)arg1 order:(int)arg2 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (void)setCellBorder:(id)arg1 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (void)setLeftColumnStrokes:(id)arg1;
- (void)setLeftStroke:(id)arg1 order:(int)arg2 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (void)setMaxOrder:(int)arg1;
- (void)setRightColumnStrokes:(id)arg1;
- (void)setRightStroke:(id)arg1 order:(int)arg2 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (void)setStroke:(id)arg1 forBottomOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg4;
- (void)setStroke:(id)arg1 forLeftOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg4;
- (void)setStroke:(id)arg1 forRightOfColumn:(unsigned char)arg2 order:(int)arg3 rowRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg4;
- (void)setStroke:(id)arg1 forTopOfRow:(unsigned short)arg2 order:(int)arg3 columnRange:(struct TSTSimpleRange { int x1; unsigned int x2; })arg4;
- (void)setTopRowStrokes:(id)arg1;
- (void)setTopStroke:(id)arg1 order:(int)arg2 atCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg3;
- (id)strokeLayerForBottomOfRow:(unsigned short)arg1;
- (id)strokeLayerForLeftSideOfColumn:(unsigned char)arg1;
- (id)strokeLayerForRightSideOfColumn:(unsigned char)arg1;
- (id)strokeLayerForTopOfRow:(unsigned short)arg1;
- (void)swapRowAtIndex:(unsigned short)arg1 withRowAtIndex:(unsigned short)arg2;
- (id)topRowStrokes;

@end
