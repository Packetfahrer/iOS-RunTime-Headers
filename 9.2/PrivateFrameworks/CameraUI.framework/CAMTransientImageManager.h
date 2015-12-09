/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMTransientImageManager : NSObject <PUTransientImageManager> {
    NSMutableDictionary * __activeRequestsByPairedUUID;
    NSMutableDictionary * __pairedVideosByPairedUUID;
}

@property (nonatomic, readonly) NSMutableDictionary *_activeRequestsByPairedUUID;
@property (nonatomic, readonly) NSMutableDictionary *_pairedVideosByPairedUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeRequestsByPairedUUID;
- (void)_handleRequestTimeout:(id)arg1;
- (id)_pairedVideosByPairedUUID;
- (id)existingPairedVideoForUUID:(id)arg1;
- (id)init;
- (id)insertPairedVideoWithConvertible:(id)arg1;
- (void)removePairedVideoForUUID:(id)arg1;
- (void)requestPairedVideoURLForUUID:(id)arg1 resultHandler:(id /* block */)arg2;

@end
