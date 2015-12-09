/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH2DSageGeometryHelper : TSCHSageGeometryHelper {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mBottomAxisBounds;
    float  mBottomAxisHeightChange;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mBottomAxisLabelsBounds;
    struct CGSize { 
        float width; 
        float height; 
    }  mBottomLeftCategoryAxisTitleOverhang;
    struct CGSize { 
        float width; 
        float height; 
    }  mBottomLeftChartTitleOverhang;
    struct CGSize { 
        float width; 
        float height; 
    }  mBottomLeftValueAxisTitleOverhang;
    struct CGSize { 
        float width; 
        float height; 
    }  mBottomLeftValueAxisY2TitleOverhang;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mBottomLegendBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mCategoryAxisTitleBounds;
    BOOL  mCategoryAxisTitleSizeValid;
    BOOL  mChartAxisLabelsSizeValid;
    BOOL  mChartAxisSizeValid;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mChartBodyBounds;
    BOOL  mChartExplodedSizeValid;
    BOOL  mChartLayoutValid;
    BOOL  mChartLegendSizeValid;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mChartTitleBounds;
    BOOL  mChartTitleSizeValid;
    BOOL  mChartValueElementsGeometryValid;
    struct CGPoint { 
        float x; 
        float y; 
    }  mExplodedBodyShift;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mExplodedBounds;
    float  mHorizontalAxisOverhang;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mLeftAxisBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mLeftAxisLabelsBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mLeftLegendBounds;
    struct CGPoint { 
        float x; 
        float y; 
    }  mOutsideLabelsChartTitleShift;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mRightAxisBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mRightAxisLabelsBounds;
    float  mRightAxisWidthChange;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mRightLegendBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mTopAxisBounds;
    float  mTopAxisHeightChange;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mTopAxisLabelsBounds;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mTopLegendBounds;
    struct CGSize { 
        float width; 
        float height; 
    }  mTopRightCategoryAxisTitleOverhang;
    struct CGSize { 
        float width; 
        float height; 
    }  mTopRightChartTitleOverhang;
    struct CGSize { 
        float width; 
        float height; 
    }  mTopRightValueAxisTitleOverhang;
    struct CGSize { 
        float width; 
        float height; 
    }  mTopRightValueAxisY2TitleOverhang;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mValueAxisTitleBounds;
    BOOL  mValueAxisTitleSizeValid;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mValueAxisY2TitleBounds;
    BOOL  mValueAxisY2TitleSizeValid;
    float  mVerticalAxisOverhang;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeSageChartAreaBoundsForChartInfo:(id)arg1 geometryRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 returningContainingViewportSize:(id*)arg3;

- (float)_bottomAxisOuterWidth;
- (float)_horizontalAxisLabelsHeight;
- (float)_leftAxisOuterWidth;
- (float)_rightAxisOuterWidth;
- (float)_seriesSymbolWidth;
- (float)_topAxisOuterWidth;
- (float)_verticalAxisLabelsWidth:(bool)arg1;
- (BOOL)aspectRatioLocked;
- (BOOL)bottomAxisLabelsVisible;
- (void)calculateCategoryAxisTitleSize;
- (void)calculateChartAxisLabelsSize;
- (void)calculateChartAxisSize;
- (void)calculateChartBodySize;
- (BOOL)calculateChartExplodedSize;
- (void)calculateChartTitleSize;
- (void)calculateValueAxisTitleSize;
- (void)calculateValueAxisY2TitleSize;
- (float)chartTitlePadding;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeSageLayoutCBB;
- (float)distanceFromXAxisUsingParagraphStyle:(id)arg1;
- (float)distanceFromYAxisUsingParagraphStyle:(id)arg1;
- (float)fontHeight:(id)arg1;
- (BOOL)isArea;
- (BOOL)isLine;
- (BOOL)isPie;
- (BOOL)isScatter;
- (BOOL)isVertical;
- (BOOL)leftAxisLabelsVisible;
- (struct CGSize { float x1; float x2; })measureText:(id)arg1 withParagraphStyle:(id)arg2;
- (BOOL)p_labelsVisible:(id)arg1;
- (id)p_model;
- (float)p_widthFromTicksAndStrokeForAxis:(id)arg1;
- (BOOL)rightAxisLabelsVisible;
- (float)seriesCategoryLabelsHorizontalGutter;
- (float)seriesCategoryLabelsVerticalGutter;
- (BOOL)topAxisLabelsVisible;
- (float)xAxisLabelHeight;
- (float)xAxisTitlePadding;
- (float)yAxisLabelHeight:(BOOL)arg1;
- (float)yAxisTitlePadding:(BOOL)arg1;

@end
