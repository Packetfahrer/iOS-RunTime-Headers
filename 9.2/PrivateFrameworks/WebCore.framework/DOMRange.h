/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMRange : DOMObject <UIWebSelectionBlock>

@property (readonly) BOOL collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, copy) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *text;
@property (nonatomic, readonly) WebArchive *webArchive;

// Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore

- (id)_text;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingBox;
- (id)cloneContents;
- (id)cloneRange;
- (void)collapse:(BOOL)arg1;
- (BOOL)collapsed;
- (id)commonAncestorContainer;
- (short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (short)compareNode:(id)arg1;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (id)createContextualFragment:(id)arg1;
- (void)dealloc;
- (void)deleteContents;
- (id)description;
- (void)detach;
- (id)endContainer;
- (int)endOffset;
- (void)expand:(id)arg1;
- (void)extend:(unsigned long)arg1 inDirection:(int)arg2;
- (id)extractContents;
- (void)finalize;
- (id)firstNode;
- (void)insertNode:(id)arg1;
- (BOOL)intersectsNode:(id)arg1;
- (BOOL)isPointInRange:(id)arg1 offset:(int)arg2;
- (id)lineBoxRects;
- (void)move:(unsigned long)arg1 inDirection:(int)arg2;
- (struct CGImage { }*)renderedImageForcingBlackText:(BOOL)arg1;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1 :(int)arg2;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStart:(id)arg1 :(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (id)startContainer;
- (int)startOffset;
- (void)surroundContents:(id)arg1;
- (id)text;
- (id)textRects;
- (id)toString;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_attachmentURLs;
- (id)mf_firstNode;
- (void)mf_getBlockBoundaryParent:(id*)arg1 nextSibling:(id*)arg2 atStart:(BOOL)arg3;
- (void)mf_hoistRange;
- (id)mf_lastNode;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)asDomNode;
- (id)asDomRange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (BOOL)canShrinkDirectlyToTextOnly;
- (BOOL)containsBlock:(id)arg1;
- (BOOL)containsRange:(id)arg1;
- (id)enclosingDocument;
- (BOOL)isSameBlock:(id)arg1;
- (id)largerParent;
- (id)parentBlock;
- (id)rangeOfContents;
- (BOOL)rendersAsBlock;
- (BOOL)selectable;
- (BOOL)strictlyContainsBlock:(id)arg1;
- (void)unionWithRange:(id)arg1;
- (id)webFrame;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)rangeForFirstPosition:(id)arg1 second:(id)arg2;

- (id)enclosingWordRange;
- (id)endPosition;
- (id)markupString;
- (id)startPosition;
- (id)webArchive;

@end
