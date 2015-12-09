/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVerticalTiledLayoutGenerator : PUTiledLayoutGenerator {
    struct PUTileInfo { 
        int index; 
        struct CGSize { 
            float width; 
            float height; 
        } imageSize; 
        struct CGSize { 
            float width; 
            float height; 
        } minimumSize; 
        BOOL hasCaption; 
        BOOL isBatchStart; 
    }  _enqueuedCaptionTileInfo;
    struct CGPoint { 
        float x; 
        float y; 
    }  _origin;
    float  _referenceWidth;
    BOOL  _shouldDisplayCaptionsBelowBatches;
}

@property (nonatomic) float referenceWidth;
@property (nonatomic) BOOL shouldDisplayCaptionsBelowBatches;

- (BOOL)_addRowWithContiguousTiles:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int)arg2;
- (BOOL)_addRowWithTiles:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 imageFrames:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 count:(int)arg3;
- (BOOL)_addSpecialSequenceBlock:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_dequeueCaption;
- (void)_enqueueCaptionWithTileInfo:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; })arg1;
- (void)_enumerateRowFramesWithContiguousTiles:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int)arg2 useMagneticGuidelines:(BOOL)arg3 block:(id /* block */)arg4;
- (BOOL)_hasEnqueuedCaption;
- (BOOL)_hasLeftSuboptimalRow;
- (BOOL)_isAtEndOfRow;
- (BOOL)_parseSingleTile;
- (BOOL)_parseSpecialSequence;
- (BOOL)_parseSpecialSubsequenceWithRowRequired:(BOOL)arg1 rowParsed:(BOOL*)arg2;
- (BOOL)_parseSpecialTileTriplet;
- (BOOL)_parseTilePair;
- (BOOL)_parseTileRequiringFullWidth;
- (BOOL)_parseTileTriplet;
- (BOOL)_scanNonPanoramaSequence:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int)arg2;
- (BOOL)_scanSpecialSequenceBlock:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_scanSpecialSequenceRow:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1 count:(int*)arg2;
- (BOOL)_scanTilePair:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_scanTileRequiringFullWidth:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_scanTileRequiringNewRow:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_scanTileTriplet:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_scanTripletWithLargeLead:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (BOOL)_scanTripletWithRearrangment:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; }*)arg1;
- (void)_willAddRowWithFirstTileInfo:(struct PUTileInfo { int x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; BOOL x4; BOOL x5; })arg1;
- (void)didParseTiles;
- (BOOL)parseNextTiles;
- (float)referenceDistanceForMagneticGuidelines;
- (float)referenceWidth;
- (void)setReferenceWidth:(float)arg1;
- (void)setShouldDisplayCaptionsBelowBatches:(BOOL)arg1;
- (BOOL)shouldDisplayCaptionsBelowBatches;
- (void)willParseTiles;

@end
