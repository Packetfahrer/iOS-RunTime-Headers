/* Generated by RuntimeBrowser.
 */

@protocol TSWPOffscreenColumn <NSObject>

@required

- (struct _NSRange { unsigned int x1; unsigned int x2; })anchoredRange;
- (unsigned int)nextWidowPullsDownFromCharIndex;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)startAnchoredCharIndex;
- (unsigned int)startCharIndex;
- (void)trimToCharIndex:(unsigned int)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeFootnoteLayoutCount:(unsigned int)arg3 removeAutoNumberFootnoteCount:(unsigned int)arg4;

@end
