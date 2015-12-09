/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetResourceLoadingDataRequestInternal : NSObject {
    BOOL  canSupplyIncrementalDataImmediately;
    long long  currentOffset;
    NSObject<OS_dispatch_queue> * dataResponseQueue;
    long long  requestedLength;
    long long  requestedOffset;
    BOOL  requestsAllDataToEndOfResource;
    AVWeakReference * weakReferenceToLoadingRequest;
}

@end
