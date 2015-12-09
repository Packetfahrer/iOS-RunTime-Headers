/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoBakedThumbnailsCollection : NSObject {
    NSMutableDictionary * _bakedThumbnails;
    NSData * _data;
}

+ (void)setTesting:(BOOL)arg1;

- (void)_parseDataWithContentsOfFile:(id)arg1;
- (id)availableFormats;
- (id)bakedThumbnailsForFormat:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(id)arg1;
- (void)saveToFile:(id)arg1;
- (void)setBakedThumbnails:(id)arg1 forFormat:(int)arg2;

@end
