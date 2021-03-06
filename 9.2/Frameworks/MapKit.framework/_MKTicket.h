/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKTicket : NSObject <MKMapServiceTicket, _MKMapServiceTicketForFreshness> {
    NSError * _error;
    NSArray * _exactMapItems;
    NSArray * _refinedMapItems;
    <GEOMapServiceTicket> * _ticket;
}

@property (nonatomic, readonly) BOOL allAreFreshFromNetwork;
@property (nonatomic, readonly) GEOMapRegion *boundingRegion;
@property (getter=isChainResultSet, nonatomic, readonly) BOOL chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSArray *exactMapItems;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *refinedMapItems;
@property (nonatomic, readonly) double requestResponseTime;
@property (nonatomic, readonly) NSString *sectionHeader;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (BOOL)allAreFreshFromNetwork;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (id)boundingRegion;
- (void)cancel;
- (id)description;
- (id)error;
- (id)exactMapItems;
- (id)initWithTicket:(id)arg1;
- (BOOL)isChainResultSet;
- (id)refinedMapItems;
- (double)requestResponseTime;
- (id)sectionHeader;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 queue:(id)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(int)arg2 queue:(id)arg3 networkActivity:(id /* block */)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(int)arg2 networkActivity:(id /* block */)arg3;
- (id)traits;

@end
