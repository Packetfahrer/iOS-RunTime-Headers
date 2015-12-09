/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODirectionsProvider : NSObject {
    id /* block */  _errorHandler;
    id /* block */  _finishedHandler;
    BOOL  _isLoading;
    int  _requestType;
}

@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) id /* block */ finishedHandler;
@property (nonatomic) BOOL isLoading;

- (void)cancelProviderRequest;
- (void)cancelRequest;
- (void)dealloc;
- (id /* block */)errorHandler;
- (id /* block */)finishedHandler;
- (BOOL)isLoading;
- (void)providerDidCancel;
- (void)providerReceivedError:(id)arg1 problemDetails:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg2;
- (void)providerReceivedErrorCode:(int)arg1 userInfo:(id)arg2 problemDetails:(struct { int x1; int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg3;
- (void)providerReceivedResponse:(id)arg1;
- (void)requestCompleted;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFinishedHandler:(id /* block */)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)startProviderWithRequest:(id)arg1;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 error:(id /* block */)arg3;

@end
