/* Generated by RuntimeBrowser.
 */

@protocol CLIntersiloServiceProtocol <CLIntersiloProxyDelegateProtocol>

@required

+ (void)becameFatallyBlocked:(NSMutableArray *)arg1;
+ (CLSilo *)getSilo;
+ (BOOL)isSupported;
+ (void)performSyncOnSilo:(void *)arg1 invoker:(void *)arg2; // needs 2 arg types, found 6: CLSilo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@optional

- (void)beginService;
- (void)endService;
- (void)registerDelegate:(id <CLIntersiloProxyDelegateProtocol>)arg1 inSilo:(CLSilo *)arg2;
- (void)setOpaqueTag:(void*)arg1;

@end
