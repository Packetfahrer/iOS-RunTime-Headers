/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCIBurstThumbnailCluster : NSObject {
    struct __CVBuffer { } * _fullsizeJpegData;
    NSMutableArray * burstImages;
    id /* block */  completionBlock;
    VCPCIBurstYUVImage * image;
    NSMutableDictionary * imageProps;
}

@property NSMutableArray *burstImages;
@property id /* block */ completionBlock;
@property struct __CVBuffer { }*fullsizeJpegData;
@property VCPCIBurstYUVImage *image;
@property NSMutableDictionary *imageProps;

- (void)addItemsFromCluster:(id)arg1;
- (id)burstImages;
- (id /* block */)completionBlock;
- (float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3;
- (void)dealloc;
- (struct __CVBuffer { }*)fullsizeJpegData;
- (id)image;
- (id)imageProps;
- (id)init;
- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)releaseImage;
- (void)setBurstImages:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setFullsizeJpegData:(struct __CVBuffer { }*)arg1;
- (void)setImage:(id)arg1;
- (void)setImageProps:(id)arg1;

@end
