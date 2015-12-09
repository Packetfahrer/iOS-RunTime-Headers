/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUHorizontalTiledLayoutGenerator : PUTiledLayoutGenerator {
    struct CGPoint { 
        float x; 
        float y; 
    }  _origin;
    float  _referenceHeight;
}

@property (nonatomic) float referenceHeight;

- (BOOL)_addColumnWithContiguousTiles:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int)arg2;
- (BOOL)_addColumnWithTiles:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 imageFrames:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 count:(int)arg3;
- (BOOL)_addSpecialSequenceBlock:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (void)_enumerateColumnFramesWithContiguousTiles:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int)arg2 useMagneticGuidelines:(BOOL)arg3 block:(id /* block */)arg4;
- (BOOL)_hasLeftSuboptimalColumn;
- (BOOL)_isAtEndOfColumn;
- (BOOL)_parseSingleTile;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialSubsequenceWithColumnRequired:(BOOL)arg1 columnParsed:(BOOL*)arg2;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseTileTriplet;
- (BOOL)_scanNonPanoramaSequence:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int)arg2;
- (BOOL)_scanSpecialSequenceBlock:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_scanSpecialSequenceColumn:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int*)arg2;
- (BOOL)_scanTripletWithLargeLead:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)parseNextTiles;
- (float)referenceDistanceForMagneticGuidelines;
- (float)referenceHeight;
- (void)setReferenceHeight:(float)arg1;
- (void)willParseTiles;

@end
