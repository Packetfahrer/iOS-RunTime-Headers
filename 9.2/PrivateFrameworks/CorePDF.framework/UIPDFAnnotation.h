/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFAnnotation : NSObject {
    UIPDFAnnotationController * _annotationController;
    NSString * _annotationID;
    UIPDFAnnotationView * _annotationView;
    void * _appearanceStream;
    NSString * _associatedAnnotationID;
    struct CGColor { } * _color;
    NSString * _contents;
    struct CGPDFDictionary { } * _dictionary;
    CALayer * _drawingLayer;
    BOOL  _hidden;
    int  _index;
    UIPDFPage * _page;
    struct CGPDFString { } * _pdfContents;
    UIPDFPopupAnnotation * _popup;
    NSMutableArray * _quadPoints;
    UIPDFSelection * _selection;
    unsigned int  _tag;
    id  data;
    BOOL  editable;
}

@property (nonatomic) UIPDFAnnotationController *annotationController;
@property (nonatomic, retain) UIPDFAnnotationView *annotationView;
@property (nonatomic, retain) NSString *associatedAnnotationID;
@property (nonatomic, retain) NSString *contents;
@property (nonatomic, retain) id data;
@property (nonatomic, retain) CALayer *drawingLayer;
@property (nonatomic) BOOL editable;
@property (nonatomic) int index;
@property (nonatomic) UIPDFPage *page;
@property (nonatomic) UIPDFPopupAnnotation *popup;
@property (nonatomic, readonly) BOOL recognizeGestures;
@property (nonatomic) UIPDFSelection *selection;
@property (nonatomic) unsigned int tag;

+ (id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })Rect;
- (id)annotationController;
- (id)annotationID;
- (int)annotationType;
- (id)annotationView;
- (id)archive;
- (id)associatedAnnotationID;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGColor { }*)color;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)contents;
- (id)data;
- (void)dealloc;
- (id)descriptionHOLD;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)drawingLayer;
- (BOOL)editable;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)getImageNamed:(id)arg1 ofType:(id)arg2;
- (BOOL)hasPopUp;
- (BOOL)hidden;
- (int)index;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { }*)arg1;
- (void)makeQuadpointsFrom:(id)arg1;
- (struct CGPath { }*)newPathFromQuadPoints;
- (id)newSelection;
- (id)page;
- (const char *)pdfContents;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })popUpAnnotationRect;
- (id)popup;
- (BOOL)recognizeGestures;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectIn:(struct CGPDFArray { }*)arg1;
- (id)selection;
- (void)setAnnotationController:(id)arg1;
- (void)setAnnotationID:(id)arg1;
- (void)setAnnotationView:(id)arg1;
- (void)setAssociatedAnnotationID:(id)arg1;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setContents:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDrawingLayer:(id)arg1;
- (void)setEditable:(BOOL)arg1;
- (void)setIndex:(int)arg1;
- (void)setPage:(id)arg1;
- (void)setPageView:(id)arg1;
- (void)setPopup:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setTag:(unsigned int)arg1;
- (unsigned int)tag;
- (Class)viewClass;

@end