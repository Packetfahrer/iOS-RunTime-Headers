/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKeyCommandDiscoverabilityHUDDescriptionView : UIView <NSLayoutManagerDelegate> {
    UIFont * _font;
    unsigned int  _glyphSize;
    NSMutableDictionary * _glyphViews;
    struct CGSize { 
        float width; 
        float height; 
    }  _intrinsicContentSize;
    float  _spaceWidth;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned int hash;
@property (nonatomic) float spaceWidth;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)font;
- (id)initWithText:(id)arg1 font:(id)arg2 lineHeight:(float)arg3 lineSpacing:(float)arg4 color:(id)arg5 edgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg6;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned int)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 glyphPosition:(struct CGPoint { float x1; float x2; })arg5 characterIndex:(unsigned int)arg6;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (unsigned int)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short*)arg2 properties:(const int*)arg3 characterIndexes:(const unsigned int*)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg6;
- (int)layoutManager:(id)arg1 shouldUseAction:(int)arg2 forControlCharacterAtIndex:(unsigned int)arg3;
- (void)setFont:(id)arg1;
- (void)setSpaceWidth:(float)arg1;
- (void)setText:(id)arg1;
- (float)spaceWidth;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1;
- (id)text;

@end
