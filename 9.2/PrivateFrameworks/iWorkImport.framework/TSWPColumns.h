/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumns : NSObject {
    unsigned int  _columnCount;
    BOOL  _equalWidth;
    float  _gapArray;
    float  _widthArray;
}

@property (nonatomic) unsigned int columnCount;
@property (nonatomic) BOOL equalWidth;

+ (id)columns;

- (unsigned int)columnCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (BOOL)equalWidth;
- (float)gapForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (id)init;
- (id)initWithArchive:(const struct ColumnsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ColumnsArchive_EqualColumnsArchive {} *x5; struct ColumnsArchive_NonEqualColumnsArchive {} *x6; }*)arg1 unarchiver:(id)arg2;
- (id)initWithColumnCount:(unsigned int)arg1;
- (id)initWithColumnCount:(unsigned int)arg1 equalWidth:(BOOL)arg2 widthArray:(float*)arg3 gapArray:(float*)arg4;
- (id)initWithEqualColumnCount:(unsigned int)arg1 gapFraction:(float)arg2;
- (BOOL)isEqual:(id)arg1;
- (float)p_equalGapForEqualWidth:(float)arg1;
- (float)p_equalWidthForEqualGap:(float)arg1;
- (float)p_maxEqualGapForBodyWidth:(float)arg1;
- (void)p_setColumnCount:(unsigned int)arg1 gapFraction:(float)arg2;
- (void)p_setEqualWidth:(float)arg1 equalGap:(float)arg2;
- (float)positionForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2 outWidth:(float*)arg3 outGap:(float*)arg4;
- (void)saveToArchive:(struct ColumnsArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ColumnsArchive_EqualColumnsArchive {} *x5; struct ColumnsArchive_NonEqualColumnsArchive {} *x6; }*)arg1 archiver:(id)arg2;
- (void)setColumnCount:(unsigned int)arg1;
- (void)setEqualWidth:(BOOL)arg1;
- (void)setGap:(float)arg1 forColumnIndex:(unsigned int)arg2 bodyWidth:(float)arg3;
- (void)setWidth:(float)arg1 forColumnIndex:(unsigned int)arg2 bodyWidth:(float)arg3;
- (float)widthForColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;

@end
