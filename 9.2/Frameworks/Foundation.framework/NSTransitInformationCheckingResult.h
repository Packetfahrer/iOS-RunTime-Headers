/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSTransitInformationCheckingResult : NSTextCheckingResult {
    NSDictionary * _components;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
    id  _underlyingResult;
}

@property (readonly) void*underlyingResult;

- (BOOL)_adjustRangesWithOffset:(int)arg1;
- (id)components;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 components:(id)arg2;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 components:(id)arg2 underlyingResult:(void*)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)resultByAdjustingRangesWithOffset:(int)arg1;
- (unsigned long long)resultType;
- (void*)underlyingResult;

@end
