/* Generated by RuntimeBrowser.
 */

@protocol TTTextStorageStyler <NSObject>

@required

- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(BOOL)arg2;
- (void)resetGuessedFontSizes;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (void)styleText:(TTTextStorage *)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 fixModelAttributes:(BOOL)arg3;

@end
