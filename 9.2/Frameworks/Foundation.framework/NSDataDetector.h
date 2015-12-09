/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDataDetector : NSRegularExpression {
    unsigned long long  _types;
}

@property (readonly) unsigned long long checkingTypes;

+ (id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id*)arg2;
+ (void)initialize;

- (unsigned long long)checkingTypes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateMatchesInString:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 usingBlock:(id /* block */)arg4;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithTypes:(unsigned long long)arg1 error:(id*)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)numberOfCaptureGroups;
- (unsigned int)options;
- (id)pattern;

@end
