/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartSceneAreaLayoutItemCache : NSObject {
    TSCH3DVector * _containingViewportVector;
    struct TSCH3DChartSceneAreaLayoutItemCacheValues { 
        struct tvec4<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
            union { 
                float z; 
                float b; 
                float p; 
            } ; 
            union { 
                float w; 
                float a; 
                float q; 
            } ; 
        } infoChartScale; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } containingViewport; 
        struct tvec2<float> { 
            union { 
                float x; 
                float r; 
                float s; 
            } ; 
            union { 
                float y; 
                float g; 
                float t; 
            } ; 
        } chartBodyLayoutOffsetInChartAreaLayoutSpace; 
        struct CGSize { 
            float width; 
            float height; 
        } layoutSize; 
        struct CGSize { 
            float width; 
            float height; 
        } requestLayoutSize; 
        struct CGSize { 
            float width; 
            float height; 
        } chartBodyLayoutSize; 
        struct CGSize { 
            float width; 
            float height; 
        } requestChartBodyLayoutSize; 
        struct tvec2<int> { 
            union { 
                int x; 
                int r; 
                int s; 
            } ; 
            union { 
                int y; 
                int g; 
                int t; 
            } ; 
        } modelSize; 
        struct { 
            BOOL forceOmitLegend; 
            BOOL forceOmitTitle; 
            BOOL forceOmitAxisTitle; 
            BOOL enable3DTightBounds; 
            BOOL enable3DScaledDepthBounds; 
            BOOL enable3DSageMaxDepthRatio; 
            unsigned int max3DLimitingSeries; 
        } layoutSettings; 
        BOOL forcedValid; 
    }  mValues;
}

@property (nonatomic, readonly) struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } chartBodyLayoutOffsetInChartAreaLayoutSpace;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } chartBodyLayoutSize;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } containingViewport;
@property (nonatomic, readonly) TSCH3DVector *containingViewportVector;
@property (nonatomic, readonly) BOOL forcedValid;
@property (nonatomic, readonly) struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; } infoChartScale;
@property (nonatomic, readonly) struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; } layoutSettings;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } layoutSize;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } modelSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } requestChartBodyLayoutSize;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } requestLayoutSize;

+ (id)cacheWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CGSize { float x_6_1_1; float x_6_1_2; } x6; struct CGSize { float x_7_1_1; float x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { BOOL x_9_1_1; BOOL x_9_1_2; BOOL x_9_1_3; BOOL x_9_1_4; BOOL x_9_1_5; BOOL x_9_1_6; unsigned int x_9_1_7; } x9; BOOL x10; }*)arg1;

- (id).cxx_construct;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })chartBodyLayoutOffsetInChartAreaLayoutSpace;
- (struct CGSize { float x1; float x2; })chartBodyLayoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })containingViewport;
- (id)containingViewportVector;
- (BOOL)forcedValid;
- (struct tvec4<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; union { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; union { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; })infoChartScale;
- (id)init;
- (id)initWithCacheValues:(const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CGSize { float x_6_1_1; float x_6_1_2; } x6; struct CGSize { float x_7_1_1; float x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { BOOL x_9_1_1; BOOL x_9_1_2; BOOL x_9_1_3; BOOL x_9_1_4; BOOL x_9_1_5; BOOL x_9_1_6; unsigned int x_9_1_7; } x9; BOOL x10; }*)arg1;
- (struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })layoutSettings;
- (struct CGSize { float x1; float x2; })layoutSize;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })modelSize;
- (void)printDebug;
- (struct CGSize { float x1; float x2; })requestChartBodyLayoutSize;
- (struct CGSize { float x1; float x2; })requestLayoutSize;
- (const struct TSCH3DChartSceneAreaLayoutItemCacheValues { struct tvec4<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; union { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_1_1_3; union { float x_4_2_1; float x_4_2_2; float x_4_2_3; } x_1_1_4; } x1; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_2_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_2_1_2; } x2; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_3_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_3_1_2; } x3; struct CGSize { float x_4_1_1; float x_4_1_2; } x4; struct CGSize { float x_5_1_1; float x_5_1_2; } x5; struct CGSize { float x_6_1_1; float x_6_1_2; } x6; struct CGSize { float x_7_1_1; float x_7_1_2; } x7; struct tvec2<int> { union { int x_1_2_1; int x_1_2_2; int x_1_2_3; } x_8_1_1; union { int x_2_2_1; int x_2_2_2; int x_2_2_3; } x_8_1_2; } x8; struct { BOOL x_9_1_1; BOOL x_9_1_2; BOOL x_9_1_3; BOOL x_9_1_4; BOOL x_9_1_5; BOOL x_9_1_6; unsigned int x_9_1_7; } x9; BOOL x10; }*)values;

@end
