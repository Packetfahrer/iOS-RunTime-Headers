/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

@interface YTPersistentVideoList : NSObject {
    NSString * _categoryName;
    NSMutableArray * _videos;
}

+ (id)persistPathWithCategoryName:(id)arg1;

- (void)addVideo:(id)arg1;
- (void)dealloc;
- (id)initWithCategoryName:(id)arg1;
- (void)persist;
- (void)removeFromDisk;
- (id)videos;

@end