/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBTrendLine : NSObject

+ (int)edTrendLineTypeFrom:(int)arg1 order:(int)arg2;
+ (void)readFrom:(struct XlChartTrendLine { int (**x1)(); struct XlChartSeries {} *x2; unsigned short x3; unsigned short x4; unsigned short x5; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_6_1_1; struct XlChartSeriesFormat {} **x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4; unsigned int x_6_1_5; } x6; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_7_1_1; struct XlChartSeriesFormat {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<XlChartCustomLabelText *> { struct XlChartCustomLabelText {} **x_8_1_1; struct XlChartCustomLabelText {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; struct ChVector<unsigned int> { unsigned int *x_9_1_1; unsigned int *x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; } x9; struct ChVector<int> { int *x_10_1_1; int *x_10_1_2; unsigned int x_10_1_3; unsigned int x_10_1_4; unsigned int x_10_1_5; } x10; struct XlChartLinkedData {} *x11; struct XlChartLinkedData {} *x12; struct XlChartLinkedData {} *x13; struct XlChartLinkedData {} *x14; struct ChVector<XlChartCustomLegend *> { struct XlChartCustomLegend {} **x_15_1_1; struct XlChartCustomLegend {} **x_15_1_2; unsigned int x_15_1_3; unsigned int x_15_1_4; unsigned int x_15_1_5; } x15; int (**x16)(); struct XlHeader { unsigned int x_17_1_1; short x_17_1_2; unsigned char x_17_1_3; } x17; double x18; double x19; double x20; int x21; unsigned char x22; unsigned char x23; unsigned char x24; }*)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (id)readTrendlineGraphicProperties:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)arg1 forStyleIndex:(unsigned int)arg2 state:(id)arg3;
+ (int)xlTrendLineRegressionTypeFrom:(int)arg1;

@end
