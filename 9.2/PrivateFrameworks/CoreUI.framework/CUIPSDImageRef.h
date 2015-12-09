/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDImageRef : NSObject {
    int  _file;
    BOOL  _parsedForLayers;
    NSString * _path;
    struct CPSDFile { int (**x1)(); struct CPSDFile {} *x2; char *x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned short x11; unsigned short x12; char *x13; struct CPSDChannelLengthInfo {} *x14; char **x15; unsigned short x16; void *x17; unsigned char x18; struct CPSDHeader { int (**x_19_1_1)(); struct CPSDFile {} *x_19_1_2; unsigned int x_19_1_3; unsigned short x_19_1_4; unsigned char x_19_1_5[6]; unsigned short x_19_1_6; unsigned int x_19_1_7; unsigned int x_19_1_8; unsigned short x_19_1_9; unsigned short x_19_1_10; } x19; struct CPSDColorModeData { int (**x_20_1_1)(); struct CPSDFile {} *x_20_1_2; unsigned int x_20_1_3; char *x_20_1_4; } x20; struct CPSDImageResources { int (**x_21_1_1)(); struct CPSDFile {} *x_21_1_2; unsigned int x_21_1_3; struct CPSDImageResourceBlock {} *x_21_1_4; } x21; struct CPSDLayerAndMaskInfo { int (**x_22_1_1)(); struct CPSDFile {} *x_22_1_2; unsigned int x_22_1_3; struct CPSDLayerInfo { int (**x_4_2_1)(); struct CPSDFile {} *x_4_2_2; unsigned int x_4_2_3; unsigned short x_4_2_4; struct vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_5_3_1; struct CPSDLayerRecord {} *x_5_3_2; struct __compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_3_4_1; } x_5_3_3; } x_4_2_5; struct vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_6_3_1; struct CPSDLayerChannelGroup {} **x_6_3_2; struct __compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_3_4_1; } x_6_3_3; } x_4_2_6; } x_22_1_4; struct CPSDGlobalLayerMaskInfo { int (**x_5_2_1)(); struct CPSDFile {} *x_5_2_2; unsigned int x_5_2_3; unsigned short x_5_2_4; unsigned short x_5_2_5[4]; unsigned short x_5_2_6; unsigned char x_5_2_7; unsigned int x_5_2_8; } x_22_1_5; struct CPSDAdditionalLayerInfo { int (**x_6_2_1)(); struct CPSDFile {} *x_6_2_2; unsigned int x_6_2_3; struct CPSDAdditionalLayerInfoItem {} *x_6_2_4; } x_22_1_6; } x22; unsigned char x23; } * _psd;
    _CUIPSDSublayerInfo * _rootLayers;
}

+ (BOOL)isValidPSDResourceAtPath:(id)arg1;
+ (BOOL)isValidPSDResourceAtPath:(id)arg1 withImageInfo:(struct _PSDImageInfo { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; int x6; }*)arg2;
+ (BOOL)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned int*)arg2;
+ (BOOL)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned int*)arg2 validateLayers:(BOOL)arg3;

- (unsigned int)_absoluteIndexOfRootLayer:(unsigned int)arg1;
- (id)_bevelEmbossFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct CPSDAdditionalLayerInfoItem {} *x8; struct CPSDString { unsigned int x_9_1_1; unsigned short *x_9_1_2; } x9; char *x10; unsigned int x11; unsigned int x12; unsigned int x13; struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_14_1_1; struct CPSDActionKeyedItem {} *x_14_1_2; struct __compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_3_2_1; } x_14_1_3; } x14; unsigned int x15; unsigned int x16; }*)arg1;
- (int)_blendModeAtAbsluteIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsAtAbsoluteIndex:(unsigned int)arg1;
- (id)_colorOverlayFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct CPSDAdditionalLayerInfoItem {} *x8; struct CPSDString { unsigned int x_9_1_1; unsigned short *x_9_1_2; } x9; char *x10; unsigned int x11; unsigned int x12; unsigned int x13; struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_14_1_1; struct CPSDActionKeyedItem {} *x_14_1_2; struct __compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_3_2_1; } x_14_1_3; } x14; unsigned int x15; unsigned int x16; }*)arg1;
- (struct CGImage { }*)_copyCGImageAtAbsoluteIndex:(unsigned int)arg1;
- (id)_copySublayerInfoAtAbsoluteIndex:(unsigned int)arg1 atRoot:(BOOL)arg2;
- (id)_createMaskFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2;
- (id)_dropShadowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct CPSDAdditionalLayerInfoItem {} *x8; struct CPSDString { unsigned int x_9_1_1; unsigned short *x_9_1_2; } x9; char *x10; unsigned int x11; unsigned int x12; unsigned int x13; struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_14_1_1; struct CPSDActionKeyedItem {} *x_14_1_2; struct __compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_3_2_1; } x_14_1_3; } x14; unsigned int x15; unsigned int x16; }*)arg1;
- (float)_fillOpacityAtAbsoluteIndex:(unsigned int)arg1;
- (id)_fillSampleAtAbsoluteIndex:(unsigned int)arg1;
- (id)_gradientAtAbsoluteIndex:(unsigned int)arg1;
- (id)_gradientOverlayFromLayerEffectsAtAbsoluteIndex:(unsigned int)arg1;
- (id)_imageAtAbsoluteIndex:(unsigned int)arg1 isZeroSizeImage:(BOOL*)arg2;
- (id)_imageFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2 isEmptyImage:(BOOL*)arg3;
- (id)_innerGlowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct CPSDAdditionalLayerInfoItem {} *x8; struct CPSDString { unsigned int x_9_1_1; unsigned short *x_9_1_2; } x9; char *x10; unsigned int x11; unsigned int x12; unsigned int x13; struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_14_1_1; struct CPSDActionKeyedItem {} *x_14_1_2; struct __compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_3_2_1; } x_14_1_3; } x14; unsigned int x15; unsigned int x16; }*)arg1;
- (id)_innerShadowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct CPSDAdditionalLayerInfoItem {} *x8; struct CPSDString { unsigned int x_9_1_1; unsigned short *x_9_1_2; } x9; char *x10; unsigned int x11; unsigned int x12; unsigned int x13; struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_14_1_1; struct CPSDActionKeyedItem {} *x_14_1_2; struct __compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_3_2_1; } x_14_1_3; } x14; unsigned int x15; unsigned int x16; }*)arg1;
- (id)_layerEffectsAtAbsoluteIndex:(unsigned int)arg1;
- (int)_layerIndexFromLayerNames:(id)arg1 indexRangeBegin:(int)arg2 indexRangeEnd:(int)arg3 isTopLevel:(BOOL)arg4;
- (id)_layerInfo;
- (id)_layerRefAtAbsoluteIndex:(unsigned int)arg1;
- (void)_logInvalidAbsoluteIndex:(unsigned int)arg1 psd:(struct CPSDFile { int (**x1)(); struct CPSDFile {} *x2; char *x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned short x11; unsigned short x12; char *x13; struct CPSDChannelLengthInfo {} *x14; char **x15; unsigned short x16; void *x17; unsigned char x18; struct CPSDHeader { int (**x_19_1_1)(); struct CPSDFile {} *x_19_1_2; unsigned int x_19_1_3; unsigned short x_19_1_4; unsigned char x_19_1_5[6]; unsigned short x_19_1_6; unsigned int x_19_1_7; unsigned int x_19_1_8; unsigned short x_19_1_9; unsigned short x_19_1_10; } x19; struct CPSDColorModeData { int (**x_20_1_1)(); struct CPSDFile {} *x_20_1_2; unsigned int x_20_1_3; char *x_20_1_4; } x20; struct CPSDImageResources { int (**x_21_1_1)(); struct CPSDFile {} *x_21_1_2; unsigned int x_21_1_3; struct CPSDImageResourceBlock {} *x_21_1_4; } x21; struct CPSDLayerAndMaskInfo { int (**x_22_1_1)(); struct CPSDFile {} *x_22_1_2; unsigned int x_22_1_3; struct CPSDLayerInfo { int (**x_4_2_1)(); struct CPSDFile {} *x_4_2_2; unsigned int x_4_2_3; unsigned short x_4_2_4; struct vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_5_3_1; struct CPSDLayerRecord {} *x_5_3_2; struct __compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_3_4_1; } x_5_3_3; } x_4_2_5; struct vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_6_3_1; struct CPSDLayerChannelGroup {} **x_6_3_2; struct __compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_3_4_1; } x_6_3_3; } x_4_2_6; } x_22_1_4; struct CPSDGlobalLayerMaskInfo { int (**x_5_2_1)(); struct CPSDFile {} *x_5_2_2; unsigned int x_5_2_3; unsigned short x_5_2_4; unsigned short x_5_2_5[4]; unsigned short x_5_2_6; unsigned char x_5_2_7; unsigned int x_5_2_8; } x_22_1_5; struct CPSDAdditionalLayerInfo { int (**x_6_2_1)(); struct CPSDFile {} *x_6_2_2; unsigned int x_6_2_3; struct CPSDAdditionalLayerInfoItem {} *x_6_2_4; } x_22_1_6; } x22; unsigned char x23; }*)arg2;
- (id)_nameAtAbsoluteIndex:(unsigned int)arg1;
- (id)_namesOfSublayers:(id)arg1;
- (float)_opacityAtAbsoluteIndex:(unsigned int)arg1;
- (id)_outerGlowFromLayerEffectsInfo:(struct CPSDObjectEffectsLayerInfo { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; char *x5; unsigned int x6; unsigned int x7; struct CPSDAdditionalLayerInfoItem {} *x8; struct CPSDString { unsigned int x_9_1_1; unsigned short *x_9_1_2; } x9; char *x10; unsigned int x11; unsigned int x12; unsigned int x13; struct vector<CPSDActionKeyedItem, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_14_1_1; struct CPSDActionKeyedItem {} *x_14_1_2; struct __compressed_pair<CPSDActionKeyedItem *, std::__1::allocator<CPSDActionKeyedItem> > { struct CPSDActionKeyedItem {} *x_3_2_1; } x_14_1_3; } x14; unsigned int x15; unsigned int x16; }*)arg1;
- (id)_patternFromSlice:(unsigned int)arg1 atAbsoluteIndex:(unsigned int)arg2 isZeroSizeImage:(BOOL*)arg3;
- (struct CPSDFile { int (**x1)(); struct CPSDFile {} *x2; char *x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned short x11; unsigned short x12; char *x13; struct CPSDChannelLengthInfo {} *x14; char **x15; unsigned short x16; void *x17; unsigned char x18; struct CPSDHeader { int (**x_19_1_1)(); struct CPSDFile {} *x_19_1_2; unsigned int x_19_1_3; unsigned short x_19_1_4; unsigned char x_19_1_5[6]; unsigned short x_19_1_6; unsigned int x_19_1_7; unsigned int x_19_1_8; unsigned short x_19_1_9; unsigned short x_19_1_10; } x19; struct CPSDColorModeData { int (**x_20_1_1)(); struct CPSDFile {} *x_20_1_2; unsigned int x_20_1_3; char *x_20_1_4; } x20; struct CPSDImageResources { int (**x_21_1_1)(); struct CPSDFile {} *x_21_1_2; unsigned int x_21_1_3; struct CPSDImageResourceBlock {} *x_21_1_4; } x21; struct CPSDLayerAndMaskInfo { int (**x_22_1_1)(); struct CPSDFile {} *x_22_1_2; unsigned int x_22_1_3; struct CPSDLayerInfo { int (**x_4_2_1)(); struct CPSDFile {} *x_4_2_2; unsigned int x_4_2_3; unsigned short x_4_2_4; struct vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_5_3_1; struct CPSDLayerRecord {} *x_5_3_2; struct __compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_3_4_1; } x_5_3_3; } x_4_2_5; struct vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_6_3_1; struct CPSDLayerChannelGroup {} **x_6_3_2; struct __compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_3_4_1; } x_6_3_3; } x_4_2_6; } x_22_1_4; struct CPSDGlobalLayerMaskInfo { int (**x_5_2_1)(); struct CPSDFile {} *x_5_2_2; unsigned int x_5_2_3; unsigned short x_5_2_4; unsigned short x_5_2_5[4]; unsigned short x_5_2_6; unsigned char x_5_2_7; unsigned int x_5_2_8; } x_22_1_5; struct CPSDAdditionalLayerInfo { int (**x_6_2_1)(); struct CPSDFile {} *x_6_2_2; unsigned int x_6_2_3; struct CPSDAdditionalLayerInfoItem {} *x_6_2_4; } x_22_1_6; } x22; unsigned char x23; }*)_psdFileWithLayers:(BOOL)arg1;
- (struct CPSDLayerRecord { int (**x1)(); struct CPSDFile {} *x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned short x7; struct vector<CPSDChannelLengthInfo, std::__1::allocator<CPSDChannelLengthInfo> > { struct CPSDChannelLengthInfo {} *x_8_1_1; struct CPSDChannelLengthInfo {} *x_8_1_2; struct __compressed_pair<CPSDChannelLengthInfo *, std::__1::allocator<CPSDChannelLengthInfo> > { struct CPSDChannelLengthInfo {} *x_3_2_1; } x_8_1_3; } x8; unsigned int x9; unsigned int x10; unsigned char x11; unsigned char x12; unsigned char x13; unsigned char x14; unsigned int x15; struct CPSDLayerMaskData { int (**x_16_1_1)(); struct CPSDFile {} *x_16_1_2; unsigned int x_16_1_3; unsigned int x_16_1_4; unsigned int x_16_1_5; unsigned int x_16_1_6; unsigned int x_16_1_7; unsigned char x_16_1_8; unsigned char x_16_1_9; unsigned short x_16_1_10; unsigned int x_16_1_11; unsigned int x_16_1_12; unsigned int x_16_1_13; unsigned int x_16_1_14; unsigned char x_16_1_15; unsigned char x_16_1_16; } x16; struct CPSDLayerBlendingRanges { int (**x_17_1_1)(); struct CPSDFile {} *x_17_1_2; unsigned int x_17_1_3; unsigned int x_17_1_4; unsigned int x_17_1_5; struct vector<CPSDChannelBlendingInfo, std::__1::allocator<CPSDChannelBlendingInfo> > { struct CPSDChannelBlendingInfo {} *x_6_2_1; struct CPSDChannelBlendingInfo {} *x_6_2_2; struct __compressed_pair<CPSDChannelBlendingInfo *, std::__1::allocator<CPSDChannelBlendingInfo> > { struct CPSDChannelBlendingInfo {} *x_3_3_1; } x_6_2_3; } x_17_1_6; } x17; BOOL x18[256]; struct CPSDAdditionalLayerInfo { int (**x_19_1_1)(); struct CPSDFile {} *x_19_1_2; unsigned int x_19_1_3; struct CPSDAdditionalLayerInfoItem {} *x_19_1_4; } x19; }*)_psdLayerRecordAtAbsoluteIndex:(unsigned int)arg1;
- (BOOL)_treatDividerAsLayer;
- (BOOL)_visibilityAtAbsoluteIndex:(unsigned int)arg1;
- (int)absoluteLayerIndexFromLayerNames:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsAtLayer:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsForSlice:(unsigned int)arg1;
- (int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned int)arg1;
- (id)colorFromDocumentColor:(double*)arg1;
- (id)compositeImage;
- (struct CGColorSpace { }*)copyColorSpace;
- (struct CGImage { }*)createCGImageAtLayer:(unsigned int)arg1;
- (struct CGImage { }*)createCompositeCGImage;
- (void)dealloc;
- (void)enumerateLayersUsingBlock:(id /* block */)arg1;
- (id)fillSampleAtLayer:(unsigned int)arg1;
- (void)finalize;
- (id)gradientAtLayer:(unsigned int)arg1;
- (id)imageAtLayer:(unsigned int)arg1;
- (id)imageAtLayer:(unsigned int)arg1 isZeroSizeImage:(BOOL*)arg2;
- (id)imageFromRef:(struct CGImage { }*)arg1;
- (id)imageFromSlice:(unsigned int)arg1 atAbsoluteLayer:(unsigned int)arg2;
- (id)imageFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2;
- (id)imageFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2 isEmptyImage:(BOOL*)arg3;
- (struct _PSDImageInfo { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned short x5; int x6; })imageInfo;
- (id)initWithPath:(id)arg1;
- (id)layerEnumerator;
- (id)layerNames;
- (id)layerRefAtIndex:(unsigned int)arg1;
- (BOOL)loadPSDFileWithLayers:(BOOL)arg1;
- (id)maskFromCompositeAlphaChannel:(int)arg1;
- (id)maskFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2;
- (id)metadataString;
- (struct { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; })metricsInAlphaChannel:(int)arg1 forRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct { struct CGSize { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGSize { float x_3_1_1; float x_3_1_2; } x3; })metricsInMask:(id)arg1 forRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (unsigned int)numberOfChannels;
- (unsigned int)numberOfLayers;
- (unsigned int)numberOfSlices;
- (BOOL)openImageFile;
- (id)path;
- (id)patternFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2;
- (id)patternFromSlice:(unsigned int)arg1 atLayer:(unsigned int)arg2 isZeroSizeImage:(BOOL*)arg3;
- (struct CPSDFile { int (**x1)(); struct CPSDFile {} *x2; char *x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned short x11; unsigned short x12; char *x13; struct CPSDChannelLengthInfo {} *x14; char **x15; unsigned short x16; void *x17; unsigned char x18; struct CPSDHeader { int (**x_19_1_1)(); struct CPSDFile {} *x_19_1_2; unsigned int x_19_1_3; unsigned short x_19_1_4; unsigned char x_19_1_5[6]; unsigned short x_19_1_6; unsigned int x_19_1_7; unsigned int x_19_1_8; unsigned short x_19_1_9; unsigned short x_19_1_10; } x19; struct CPSDColorModeData { int (**x_20_1_1)(); struct CPSDFile {} *x_20_1_2; unsigned int x_20_1_3; char *x_20_1_4; } x20; struct CPSDImageResources { int (**x_21_1_1)(); struct CPSDFile {} *x_21_1_2; unsigned int x_21_1_3; struct CPSDImageResourceBlock {} *x_21_1_4; } x21; struct CPSDLayerAndMaskInfo { int (**x_22_1_1)(); struct CPSDFile {} *x_22_1_2; unsigned int x_22_1_3; struct CPSDLayerInfo { int (**x_4_2_1)(); struct CPSDFile {} *x_4_2_2; unsigned int x_4_2_3; unsigned short x_4_2_4; struct vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_5_3_1; struct CPSDLayerRecord {} *x_5_3_2; struct __compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_3_4_1; } x_5_3_3; } x_4_2_5; struct vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_6_3_1; struct CPSDLayerChannelGroup {} **x_6_3_2; struct __compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_3_4_1; } x_6_3_3; } x_4_2_6; } x_22_1_4; struct CPSDGlobalLayerMaskInfo { int (**x_5_2_1)(); struct CPSDFile {} *x_5_2_2; unsigned int x_5_2_3; unsigned short x_5_2_4; unsigned short x_5_2_5[4]; unsigned short x_5_2_6; unsigned char x_5_2_7; unsigned int x_5_2_8; } x_22_1_5; struct CPSDAdditionalLayerInfo { int (**x_6_2_1)(); struct CPSDFile {} *x_6_2_2; unsigned int x_6_2_3; struct CPSDAdditionalLayerInfoItem {} *x_6_2_4; } x_22_1_6; } x22; unsigned char x23; }*)psdFile;
- (struct CPSDFile { int (**x1)(); struct CPSDFile {} *x2; char *x3; unsigned int x4; unsigned int x5; unsigned char x6; unsigned int x7; unsigned int x8; unsigned short x9; unsigned int x10; unsigned short x11; unsigned short x12; char *x13; struct CPSDChannelLengthInfo {} *x14; char **x15; unsigned short x16; void *x17; unsigned char x18; struct CPSDHeader { int (**x_19_1_1)(); struct CPSDFile {} *x_19_1_2; unsigned int x_19_1_3; unsigned short x_19_1_4; unsigned char x_19_1_5[6]; unsigned short x_19_1_6; unsigned int x_19_1_7; unsigned int x_19_1_8; unsigned short x_19_1_9; unsigned short x_19_1_10; } x19; struct CPSDColorModeData { int (**x_20_1_1)(); struct CPSDFile {} *x_20_1_2; unsigned int x_20_1_3; char *x_20_1_4; } x20; struct CPSDImageResources { int (**x_21_1_1)(); struct CPSDFile {} *x_21_1_2; unsigned int x_21_1_3; struct CPSDImageResourceBlock {} *x_21_1_4; } x21; struct CPSDLayerAndMaskInfo { int (**x_22_1_1)(); struct CPSDFile {} *x_22_1_2; unsigned int x_22_1_3; struct CPSDLayerInfo { int (**x_4_2_1)(); struct CPSDFile {} *x_4_2_2; unsigned int x_4_2_3; unsigned short x_4_2_4; struct vector<CPSDLayerRecord, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_5_3_1; struct CPSDLayerRecord {} *x_5_3_2; struct __compressed_pair<CPSDLayerRecord *, std::__1::allocator<CPSDLayerRecord> > { struct CPSDLayerRecord {} *x_3_4_1; } x_5_3_3; } x_4_2_5; struct vector<CPSDLayerChannelGroup *, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_6_3_1; struct CPSDLayerChannelGroup {} **x_6_3_2; struct __compressed_pair<CPSDLayerChannelGroup **, std::__1::allocator<CPSDLayerChannelGroup *> > { struct CPSDLayerChannelGroup {} **x_3_4_1; } x_6_3_3; } x_4_2_6; } x_22_1_4; struct CPSDGlobalLayerMaskInfo { int (**x_5_2_1)(); struct CPSDFile {} *x_5_2_2; unsigned int x_5_2_3; unsigned short x_5_2_4; unsigned short x_5_2_5[4]; unsigned short x_5_2_6; unsigned char x_5_2_7; unsigned int x_5_2_8; } x_22_1_5; struct CPSDAdditionalLayerInfo { int (**x_6_2_1)(); struct CPSDFile {} *x_6_2_2; unsigned int x_6_2_3; struct CPSDAdditionalLayerInfoItem {} *x_6_2_4; } x_22_1_6; } x22; unsigned char x23; }*)psdFileForComposite;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)visibilityAtLayer:(unsigned int)arg1;

@end