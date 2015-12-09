/* Generated by RuntimeBrowser.
 */

@protocol TSCEReferenceTrackerDelegate

@required

- (NSArray *)cellRangeWasInserted:(struct { struct TSCERangeCoordinate { struct { unsigned short x_1_2_1; unsigned char x_1_2_2; unsigned char x_1_2_3; } x_1_1_1; struct { unsigned short x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; } x_1_1_2; } x1; struct __CFUUID {} *x2; })arg1;
- (void)referencedCellWasModified:(TSCETrackedReference *)arg1;
- (BOOL)shouldRewriteOnCellMerge;
- (BOOL)shouldRewriteOnRangeMove;
- (BOOL)shouldRewriteOnSort;
- (BOOL)shouldRewriteOnTableIDReassignment;
- (BOOL)shouldRewriteOnTectonicShift;
- (BOOL)shouldRewriteOnTranspose;
- (void)trackedReferenceWasDeleted:(TSCETrackedReference *)arg1 fromOwnerID:(struct __CFUUID { }*)arg2;

@optional

- (void)updateTrackedHeaders:(struct __CFUUID { }*)arg1;

@end
