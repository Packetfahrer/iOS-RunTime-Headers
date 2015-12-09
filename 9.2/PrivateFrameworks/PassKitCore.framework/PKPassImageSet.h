/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassImageSet : PKImageSet {
    struct CGSize { 
        float width; 
        float height; 
    }  _displayProfileRectSize;
}

+ (BOOL)archivedObject:(id)arg1 matchesDisplayProfile:(id)arg2;
+ (Class)classForImageSetType:(int)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayProfile:(id)arg1 fileURL:(id)arg2 screenScale:(float)arg3 suffix:(id)arg4;

@end
