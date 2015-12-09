/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacementGenerator : NSObject {
    UITextRange * _replacementRange;
    NSString * _stringToReplace;
}

@property (nonatomic, retain) UITextRange *replacementRange;
@property (nonatomic, copy) NSString *stringToReplace;

- (void).cxx_destruct;
- (void)addPlaceholderForEmptyReplacements:(id)arg1;
- (id)replacementRange;
- (id)replacementWithText:(id)arg1;
- (id)replacements;
- (void)setReplacementRange:(id)arg1;
- (void)setStringToReplace:(id)arg1;
- (BOOL)shouldAllowString:(id)arg1 intoReplacements:(id)arg2;
- (id)stringToReplace;

@end
