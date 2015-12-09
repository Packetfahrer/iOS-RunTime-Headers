/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditPluginManager : NSObject {
    NSArray * __plugins;
    int  _mediaType;
}

@property (setter=_setPlugins:, nonatomic, copy) NSArray *_plugins;
@property (readonly) int mediaType;

+ (id)sharedManagerForMediaType:(int)arg1;

- (void).cxx_destruct;
- (void)_discoveredAvailableExtensions:(id)arg1;
- (id)_initWithMediaType:(int)arg1;
- (id)_plugins;
- (void)_setPlugins:(id)arg1;
- (BOOL)hasPlugins;
- (int)mediaType;
- (id)pluginActivities;
- (void)rediscoverAvailablePlugins;

@end
