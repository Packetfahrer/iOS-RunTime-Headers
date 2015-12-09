/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver> {
    NSURL * _directoryURL;
    NSMutableArray * _inProgressUUIDs;
    NSLock * _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateVersionsInfo;
- (void)dealloc;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned int)arg2 scale:(float)arg3 drawingBlock:(id /* block */)arg4;
- (id)initWithDirectoryURL:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;

@end
