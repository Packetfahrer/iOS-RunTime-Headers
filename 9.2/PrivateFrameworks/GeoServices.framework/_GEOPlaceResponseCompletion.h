/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceResponseCompletion : NSObject <GEOCompletion> {
    NSArray * _groups;
    GEOPlaceSearchResponse * _response;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *groups;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)groups;
- (id)initWithPlaceSearchResponse:(id)arg1 query:(id)arg2 traits:(id)arg3;
- (id)metadata;
- (id)response;

@end
